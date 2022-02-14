
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct assembly {scalar_t__ run_level; void* ui_access; } ;
struct actctx_loader {int dummy; } ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *,...) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int *,int *,void**,void**) ;
 void* FUNC_2 (int *,int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int *,char const*) ;

__attribute__((used)) static BOOL FUNC_9(xmlbuf_t* VAR_8, struct assembly* VAR_9, struct actctx_loader *VAR_10)
{
    static const WCHAR VAR_11[] = {'l','e','v','e','l',0};
    static const WCHAR VAR_12[] = {'a','s','I','n','v','o','k','e','r',0};
    static const WCHAR VAR_13[] = {'r','e','q','u','i','r','e','A','d','m','i','n','i','s','t','r','a','t','o','r',0};
    static const WCHAR VAR_14[] = {'h','i','g','h','e','s','t','A','v','a','i','l','a','b','l','e',0};
    static const WCHAR VAR_15[] = {'u','i','A','c','c','e','s','s',0};
    static const WCHAR VAR_16[] = {'f','a','l','s','e',0};
    static const WCHAR VAR_17[] = {'t','r','u','e',0};

    xmlstr_t VAR_18, VAR_19, VAR_20;
    BOOL VAR_21 = VAR_4, VAR_22 = VAR_5, VAR_23;


    if (VAR_9->run_level != VAR_3)
        return VAR_4;

    while (FUNC_1(VAR_8, &VAR_18, &VAR_19, &VAR_23, &VAR_21))
    {
        UNICODE_STRING VAR_24 = FUNC_6(&VAR_18);
        UNICODE_STRING VAR_25 = FUNC_6(&VAR_19);
        if (FUNC_7(&VAR_18, VAR_11))
        {
            if (FUNC_8(&VAR_19, VAR_12))
                VAR_9->run_level = VAR_0;
            else if (FUNC_8(&VAR_19, VAR_14))
                VAR_9->run_level = VAR_1;
            else if (FUNC_8(&VAR_19, VAR_13))
                VAR_9->run_level = VAR_2;
            else
                FUNC_0("unknown execution level: %wZ\n", &VAR_25);
        }
        else if (FUNC_7(&VAR_18, VAR_15))
        {
            if (FUNC_8(&VAR_19, VAR_16))
                VAR_9->ui_access = VAR_4;
            else if (FUNC_8(&VAR_19, VAR_17))
                VAR_9->ui_access = VAR_5;
            else
                FUNC_0("unknown uiAccess value: %wZ\n", &VAR_25);
        }
        else
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_24, &VAR_25);
    }

    if (VAR_23) return VAR_4;
    if (VAR_21) return VAR_5;

    while (VAR_22 && (VAR_22 = FUNC_2(VAR_8, &VAR_20)))
    {
        if (FUNC_5(&VAR_20, VAR_7, VAR_6))
        {
            VAR_22 = FUNC_3(VAR_8);
            break;
        }
        else
        {
            UNICODE_STRING VAR_26 = FUNC_6(&VAR_20);
            FUNC_0("unknown element %wZ\n", &VAR_26);
            VAR_22 = FUNC_4(VAR_8, &VAR_20);
        }
    }

    return VAR_22;
}
