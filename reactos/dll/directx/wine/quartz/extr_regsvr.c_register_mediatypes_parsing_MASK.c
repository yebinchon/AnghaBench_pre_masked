
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_mediatype_parsing {scalar_t__* line; int * subtype; int * majortype; } ;
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
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int ,int,int *,int **,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int ,int ,int const*,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int const*,int) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static HRESULT FUNC_9(struct regsvr_mediatype_parsing const *VAR_9)
{
    LONG VAR_10 = VAR_1;
    HKEY VAR_11;
    WCHAR VAR_12[39];
    int VAR_13;

    VAR_10 = FUNC_2(VAR_2, VAR_7, 0, ((void*)0), 0,
     VAR_3 | VAR_4, ((void*)0), &VAR_11, ((void*)0));
    if (VAR_10 != VAR_1) return FUNC_0(VAR_10);

    for (; VAR_10 == VAR_1 && VAR_9->majortype; ++VAR_9) {
 HKEY VAR_14 = ((void*)0);
 HKEY VAR_15 = ((void*)0);

 FUNC_5(VAR_9->majortype, VAR_12, 39);
 VAR_10 = FUNC_2(VAR_11, VAR_12, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_14, ((void*)0));
 if (VAR_10 != VAR_1) goto error_close_keys;

 FUNC_5(VAR_9->subtype, VAR_12, 39);
 VAR_10 = FUNC_2(VAR_14, VAR_12, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_15, ((void*)0));
 if (VAR_10 != VAR_1) goto error_close_keys;

 FUNC_5(&VAR_0, VAR_12, 39);
        VAR_10 = FUNC_4(VAR_15, VAR_8, 0, VAR_5, (const BYTE*)VAR_12,
        (FUNC_7(VAR_12) + 1) * sizeof(WCHAR));
 if (VAR_10 != VAR_1) goto error_close_keys;

 for(VAR_13 = 0; VAR_9->line[VAR_13]; VAR_13++) {
     char VAR_16[3];
     FUNC_8(VAR_16, "%d", VAR_13);
            VAR_10 = FUNC_3(VAR_15, VAR_16, 0, VAR_5, (const BYTE*)VAR_9->line[VAR_13],
     FUNC_6(VAR_9->line[VAR_13]));
     if (VAR_10 != VAR_1) goto error_close_keys;
 }

error_close_keys:
 if (VAR_14)
     FUNC_1(VAR_14);
 if (VAR_15)
     FUNC_1(VAR_15);
    }

    FUNC_1(VAR_11);

    return VAR_10 != VAR_1 ? FUNC_0(VAR_10) : VAR_6;
}
