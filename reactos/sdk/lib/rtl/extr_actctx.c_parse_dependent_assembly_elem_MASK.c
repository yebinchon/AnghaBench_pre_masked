
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int xmlbuf_t ;
struct assembly_identity {void* delayed; void* optional; } ;
struct actctx_loader {int actctx; } ;
typedef int ai ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef void* BOOL ;


 int FUNC_0 (char*,int ,...) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct actctx_loader*,struct assembly_identity*) ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct assembly_identity*,int ,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,TYPE_1__*,void**,void**) ;
 void* FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ,struct assembly_identity*) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 void* FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 void* FUNC_11 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static BOOL FUNC_13(xmlbuf_t* VAR_6, struct actctx_loader* VAR_7, BOOL VAR_8)
{
    struct assembly_identity VAR_9;
    xmlstr_t VAR_10, VAR_11, VAR_12;
    BOOL VAR_13 = VAR_0, VAR_14 = VAR_0, VAR_15 = VAR_1, VAR_16 = VAR_0;

    UNICODE_STRING VAR_17, VAR_18;

    while (FUNC_3(VAR_6, &VAR_11, &VAR_12, &VAR_14, &VAR_13))
    {
        static const WCHAR VAR_19[] = {'a','l','l','o','w','D','e','l','a','y','e','d','B','i','n','d','i','n','g',0};
        static const WCHAR VAR_20[] = {'t','r','u','e',0};

        if (FUNC_11(&VAR_11, VAR_19))
            VAR_16 = FUNC_11(&VAR_12, VAR_20);
        else
        {
            VAR_17 = FUNC_10(&VAR_11);
            VAR_18 = FUNC_10(&VAR_12);
            FUNC_0("unknown attr %s=%s\n", VAR_17, &VAR_18);
        }
    }

    if (VAR_14 || VAR_13) return VAR_13;

    FUNC_2(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.optional = VAR_8;
    VAR_9.delayed = VAR_16;

    if (!FUNC_8(VAR_6, VAR_3, VAR_2) ||
        !FUNC_5(VAR_6, VAR_7->actctx, &VAR_9))
        return VAR_0;




    if (!FUNC_1(VAR_7, &VAR_9)) return VAR_0;

    while (VAR_15 && (VAR_15 = FUNC_4(VAR_6, &VAR_10)))
    {
        if (FUNC_12(&VAR_10, VAR_5))
        {
            VAR_15 = FUNC_7(VAR_6);
            break;
        }
        else if (FUNC_11(&VAR_10, VAR_4))
        {
            VAR_15 = FUNC_6(VAR_6);
        }
        else
        {
            FUNC_0("unknown elem %S\n", VAR_10.ptr);
            VAR_15 = FUNC_9(VAR_6, &VAR_10);
        }
    }

    return VAR_15;
}
