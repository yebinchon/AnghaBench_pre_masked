
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_decoder {int * clsid; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static HRESULT FUNC_6(struct regsvr_decoder const *VAR_9)
{
    LONG VAR_10 = VAR_2;
    HKEY VAR_11;
    WCHAR VAR_12[39];
    HKEY VAR_13;
    HKEY VAR_14;

    VAR_10 = FUNC_4(VAR_3, VAR_7, 0,
   VAR_4 | VAR_5, &VAR_11);
    if (VAR_10 == VAR_1) return VAR_6;

    if (VAR_10 == VAR_2) {
        FUNC_5(&VAR_0, VAR_12, 39);
        VAR_10 = FUNC_2(VAR_11, VAR_12, 0, ((void*)0), 0,
         VAR_4 | VAR_5, ((void*)0), &VAR_13, ((void*)0));
        if (VAR_10 == VAR_2)
        {
            VAR_10 = FUNC_2(VAR_13, VAR_8, 0, ((void*)0), 0,
                VAR_4 | VAR_5, ((void*)0), &VAR_14, ((void*)0));
            if (VAR_10 != VAR_2) goto error_close_coclass_key;
        }
        if (VAR_10 != VAR_2)
            FUNC_1(VAR_11);
    }
    if (VAR_10 != VAR_2) goto error_return;

    for (; VAR_10 == VAR_2 && VAR_9->clsid; ++VAR_9) {
 FUNC_5(VAR_9->clsid, VAR_12, 39);

 VAR_10 = FUNC_3(VAR_11, VAR_12);
 if (VAR_10 == VAR_1) VAR_10 = VAR_2;
 if (VAR_10 != VAR_2) goto error_close_coclass_key;

 VAR_10 = FUNC_3(VAR_14, VAR_12);
 if (VAR_10 == VAR_1) VAR_10 = VAR_2;
 if (VAR_10 != VAR_2) goto error_close_coclass_key;
    }

error_close_coclass_key:
    FUNC_1(VAR_14);
    FUNC_1(VAR_13);
    FUNC_1(VAR_11);
error_return:
    return VAR_10 != VAR_2 ? FUNC_0(VAR_10) : VAR_6;
}
