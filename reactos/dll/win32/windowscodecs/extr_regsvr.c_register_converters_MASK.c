
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_converter {int const* const clsid; int const* const vendor; int** formats; scalar_t__ version; scalar_t__ friendlyname; scalar_t__ author; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;
typedef int BYTE ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int const*,int) ;
 int VAR_6 ;
 int FUNC_5 (int const* const,int *,int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static HRESULT FUNC_7(struct regsvr_converter const *VAR_15)
{
    LONG VAR_16 = VAR_1;
    HKEY VAR_17;
    WCHAR VAR_18[39];
    HKEY VAR_19;
    HKEY VAR_20;

    VAR_16 = FUNC_2(VAR_2, VAR_8, 0, ((void*)0), 0,
     VAR_3 | VAR_4, ((void*)0), &VAR_17, ((void*)0));
    if (VAR_16 == VAR_1) {
        FUNC_5(&VAR_0, VAR_18, 39);
        VAR_16 = FUNC_2(VAR_17, VAR_18, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_19, ((void*)0));
        if (VAR_16 == VAR_1)
        {
            VAR_16 = FUNC_2(VAR_19, VAR_11, 0, ((void*)0), 0,
                VAR_3 | VAR_4, ((void*)0), &VAR_20, ((void*)0));
            if (VAR_16 != VAR_1) goto error_close_coclass_key;
        }
        if (VAR_16 != VAR_1)
            FUNC_1(VAR_17);
    }
    if (VAR_16 != VAR_1) goto error_return;

    for (; VAR_16 == VAR_1 && VAR_15->clsid; ++VAR_15) {
 HKEY VAR_21;
 HKEY VAR_22;

 FUNC_5(VAR_15->clsid, VAR_18, 39);
 VAR_16 = FUNC_2(VAR_17, VAR_18, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_21, ((void*)0));
 if (VAR_16 != VAR_1) goto error_close_coclass_key;

 FUNC_5(VAR_15->clsid, VAR_18, 39);
 VAR_16 = FUNC_2(VAR_20, VAR_18, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_22, ((void*)0));
 if (VAR_16 == VAR_1) {
     VAR_16 = FUNC_4(VAR_22, VAR_9, 0, VAR_5,
                                 (const BYTE*)VAR_18, 78);
     FUNC_1(VAR_22);
 }
 if (VAR_16 != VAR_1) goto error_close_clsid_key;

        if (VAR_15->author) {
     VAR_16 = FUNC_3(VAR_21, VAR_7, 0, VAR_5,
                                 (const BYTE*)VAR_15->author,
     FUNC_6(VAR_15->author) + 1);
     if (VAR_16 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_15->friendlyname) {
     VAR_16 = FUNC_3(VAR_21, VAR_10, 0, VAR_5,
                                 (const BYTE*)VAR_15->friendlyname,
     FUNC_6(VAR_15->friendlyname) + 1);
     if (VAR_16 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_15->vendor) {
            FUNC_5(VAR_15->vendor, VAR_18, 39);
     VAR_16 = FUNC_4(VAR_21, VAR_13, 0, VAR_5,
                                 (const BYTE*)VAR_18, 78);
     if (VAR_16 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_15->version) {
     VAR_16 = FUNC_3(VAR_21, VAR_14, 0, VAR_5,
                                 (const BYTE*)VAR_15->version,
     FUNC_6(VAR_15->version) + 1);
     if (VAR_16 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_15->formats) {
            HKEY VAR_23;
            GUID const * const *VAR_24;

            VAR_16 = FUNC_2(VAR_21, VAR_12, 0, ((void*)0), 0,
                                  VAR_3 | VAR_4, ((void*)0), &VAR_23, ((void*)0));
            if (VAR_16 != VAR_1) goto error_close_clsid_key;
            for (VAR_24=VAR_15->formats; *VAR_24; ++VAR_24)
            {
                HKEY VAR_25;
                FUNC_5(*VAR_24, VAR_18, 39);
                VAR_16 = FUNC_2(VAR_23, VAR_18, 0, ((void*)0), 0,
                                      VAR_3 | VAR_4, ((void*)0), &VAR_25, ((void*)0));
                if (VAR_16 != VAR_1) break;
                FUNC_1(VAR_25);
            }
            FUNC_1(VAR_23);
            if (VAR_16 != VAR_1) goto error_close_clsid_key;
        }

    error_close_clsid_key:
 FUNC_1(VAR_21);
    }

error_close_coclass_key:
    FUNC_1(VAR_20);
    FUNC_1(VAR_19);
    FUNC_1(VAR_17);
error_return:
    return VAR_16 != VAR_1 ? FUNC_0(VAR_16) : VAR_6;
}
