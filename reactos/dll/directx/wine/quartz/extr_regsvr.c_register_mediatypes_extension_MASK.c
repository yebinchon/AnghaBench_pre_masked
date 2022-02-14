
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_mediatype_extension {int * subtype; int * majortype; int extension; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int * HKEY ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ,int,int *,int **,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int ,int,int *,int **,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int const*,int) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static HRESULT FUNC_7(struct regsvr_mediatype_extension const *VAR_11)
{
    LONG VAR_12 = VAR_1;
    HKEY VAR_13;
    HKEY VAR_14 = ((void*)0);
    WCHAR VAR_15[39];

    VAR_12 = FUNC_3(VAR_2, VAR_8, 0, ((void*)0), 0,
     VAR_3 | VAR_4, ((void*)0), &VAR_13, ((void*)0));
    if (VAR_12 != VAR_1) return FUNC_0(VAR_12);

    VAR_12 = FUNC_3(VAR_13, VAR_7, 0, ((void*)0), 0,
     VAR_3 | VAR_4, ((void*)0), &VAR_14, ((void*)0));
    if (VAR_12 != VAR_1) goto error_return;

    for (; VAR_12 == VAR_1 && VAR_11->majortype; ++VAR_11) {
 HKEY VAR_16;

 VAR_12 = FUNC_2(VAR_14, VAR_11->extension, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_16, ((void*)0));
 if (VAR_12 != VAR_1) break;

 FUNC_5(VAR_11->majortype, VAR_15, 39);
        VAR_12 = FUNC_4(VAR_16, VAR_8, 0, VAR_5, (const BYTE*)VAR_15,
        (FUNC_6(VAR_15) + 1) * sizeof(WCHAR));
 if (VAR_12 != VAR_1) goto error_close_key;

 FUNC_5(VAR_11->subtype, VAR_15, 39);
        VAR_12 = FUNC_4(VAR_16, VAR_10, 0, VAR_5, (const BYTE*)VAR_15,
        (FUNC_6(VAR_15) + 1) * sizeof(WCHAR));
 if (VAR_12 != VAR_1) goto error_close_key;

 FUNC_5(&VAR_0, VAR_15, 39);
        VAR_12 = FUNC_4(VAR_16, VAR_9, 0, VAR_5, (const BYTE*)VAR_15,
        (FUNC_6(VAR_15) + 1) * sizeof(WCHAR));
 if (VAR_12 != VAR_1) goto error_close_key;

error_close_key:
 FUNC_1(VAR_16);
    }

error_return:
    FUNC_1(VAR_13);
    if (VAR_14)
 FUNC_1(VAR_14);

    return VAR_12 != VAR_1 ? FUNC_0(VAR_12) : VAR_6;
}
