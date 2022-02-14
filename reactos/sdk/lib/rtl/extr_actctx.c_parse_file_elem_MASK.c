
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct dll_redirect {void* name; void* hash; } ;
struct assembly {int dummy; } ;
struct actctx_loader {TYPE_1__* actctx; } ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
struct TYPE_2__ {int sections; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dll_redirect* FUNC_2 (struct assembly*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,struct dll_redirect*,struct actctx_loader*) ;
 scalar_t__ FUNC_6 (int *,struct dll_redirect*,struct actctx_loader*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,struct dll_redirect*,struct actctx_loader*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,struct dll_redirect*,struct actctx_loader*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,char const*) ;
 void* FUNC_16 (int *) ;

__attribute__((used)) static BOOL FUNC_17(xmlbuf_t* VAR_12, struct assembly* VAR_13, struct actctx_loader* VAR_14)
{
    xmlstr_t VAR_15, VAR_16, VAR_17;
    UNICODE_STRING VAR_18, VAR_19;
    BOOL VAR_20 = VAR_1, VAR_21, VAR_22 = VAR_2;
    struct dll_redirect* VAR_23;

    if (!(VAR_23 = FUNC_2(VAR_13))) return VAR_1;

    while (FUNC_3(VAR_12, &VAR_15, &VAR_16, &VAR_21, &VAR_20))
    {
        VAR_18 = FUNC_12(&VAR_15);
        VAR_19 = FUNC_12(&VAR_16);

        if (FUNC_13(&VAR_15, VAR_7))
        {
            if (!(VAR_23->name = FUNC_16(&VAR_16))) return VAR_1;
            FUNC_0("name=%wZ\n", &VAR_19);
        }
        else if (FUNC_13(&VAR_15, VAR_8))
        {
            if (!(VAR_23->hash = FUNC_16(&VAR_16))) return VAR_1;
        }
        else if (FUNC_13(&VAR_15, VAR_9))
        {
            static const WCHAR VAR_24[] = {'S','H','A','1',0};
            if (!FUNC_15(&VAR_16, VAR_24))
                FUNC_1("hashalg should be SHA1, got %wZ\n", &VAR_19);
        }
        else
        {
            FUNC_1("unknown attr %wZ=%wZ\n", &VAR_18, &VAR_19);
        }
    }

    if (VAR_21 || !VAR_23->name) return VAR_1;

    VAR_14->actctx->sections |= VAR_0;

    if (VAR_20) return VAR_2;

    while (VAR_22 && (VAR_22 = FUNC_4(VAR_12, &VAR_17)))
    {
        if (FUNC_14(&VAR_17, VAR_6))
        {
            VAR_22 = FUNC_7(VAR_12);
            break;
        }
        else if (FUNC_13(&VAR_17, VAR_4))
        {
            VAR_22 = FUNC_5(VAR_12, VAR_23, VAR_14);
        }
        else if (FUNC_13(&VAR_17, VAR_5))
        {
            VAR_22 = FUNC_6(VAR_12, VAR_23, VAR_14);
        }
        else if (FUNC_11(&VAR_17, VAR_8, VAR_3))
        {
            FUNC_1("asmv2hash (undocumented) not supported\n");
            VAR_22 = FUNC_9(VAR_12, &VAR_17);
        }
        else if (FUNC_13(&VAR_17, VAR_10))
        {
            VAR_22 = FUNC_8(VAR_12, VAR_23, VAR_14);
        }
        else if (FUNC_13(&VAR_17, VAR_11))
        {
            VAR_22 = FUNC_10(VAR_12, VAR_23, VAR_14);
        }
        else
        {
            VAR_18 = FUNC_12(&VAR_17);
            FUNC_1("unknown elem %wZ\n", &VAR_18);
            VAR_22 = FUNC_9( VAR_12, &VAR_17 );
        }
    }

    return VAR_22;
}
