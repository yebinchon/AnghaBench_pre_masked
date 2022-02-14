
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ptr; int len; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int xmlbuf_t ;
struct assembly_identity {void* language; void* public_key; void* arch; int version; void* type; void* name; } ;
typedef int UNICODE_STRING ;
typedef scalar_t__ BOOL ;
typedef int ACTIVATION_CONTEXT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,TYPE_1__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 void* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_8(xmlbuf_t* VAR_9, ACTIVATION_CONTEXT* VAR_10,
                                         struct assembly_identity* VAR_11)
{
    xmlstr_t VAR_12, VAR_13;
    BOOL VAR_14 = VAR_0, VAR_15;
    UNICODE_STRING VAR_16, VAR_17;

    while (FUNC_2(VAR_9, &VAR_12, &VAR_13, &VAR_15, &VAR_14))
    {
        if (FUNC_6(&VAR_12, VAR_3))
        {
            if (!(VAR_11->name = FUNC_7(&VAR_13))) return VAR_0;
        }
        else if (FUNC_6(&VAR_12, VAR_7))
        {
            if (!(VAR_11->type = FUNC_7(&VAR_13))) return VAR_0;
        }
        else if (FUNC_6(&VAR_12, VAR_8))
        {
            if (!FUNC_4(&VAR_13, &VAR_11->version)) return VAR_0;
        }
        else if (FUNC_6(&VAR_12, VAR_5))
        {
            if (!(VAR_11->arch = FUNC_7(&VAR_13))) return VAR_0;
        }
        else if (FUNC_6(&VAR_12, VAR_6))
        {
            if (!(VAR_11->public_key = FUNC_7(&VAR_13))) return VAR_0;
        }
        else if (FUNC_6(&VAR_12, VAR_4))
        {
            FUNC_0("Unsupported yet language attribute (%.*S)\n",
                   VAR_13.len, VAR_13.ptr);
            if (!(VAR_11->language = FUNC_7(&VAR_13))) return VAR_0;
        }
        else
        {
            VAR_17 = FUNC_5(&VAR_12);
            VAR_16 = FUNC_5(&VAR_13);
            FUNC_1("unknown attr %wZ=%wZ\n", &VAR_17, &VAR_16);
        }
    }

    if (VAR_15 || VAR_14) return VAR_14;
    return FUNC_3(VAR_9, VAR_2, VAR_1);
}
