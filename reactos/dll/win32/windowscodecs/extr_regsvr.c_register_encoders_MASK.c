
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_encoder {int const* const clsid; int const* const vendor; int const* const container_format; int** formats; scalar_t__ extensions; scalar_t__ mimetypes; scalar_t__ version; scalar_t__ friendlyname; scalar_t__ author; } ;
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
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static HRESULT FUNC_7(struct regsvr_encoder const *VAR_18)
{
    LONG VAR_19 = VAR_1;
    HKEY VAR_20;
    WCHAR VAR_21[39];
    HKEY VAR_22;
    HKEY VAR_23;

    VAR_19 = FUNC_2(VAR_2, VAR_8, 0, ((void*)0), 0,
     VAR_3 | VAR_4, ((void*)0), &VAR_20, ((void*)0));
    if (VAR_19 == VAR_1) {
        FUNC_5(&VAR_0, VAR_21, 39);
        VAR_19 = FUNC_2(VAR_20, VAR_21, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_22, ((void*)0));
        if (VAR_19 == VAR_1)
        {
            VAR_19 = FUNC_2(VAR_22, VAR_14, 0, ((void*)0), 0,
                VAR_3 | VAR_4, ((void*)0), &VAR_23, ((void*)0));
            if (VAR_19 != VAR_1) goto error_close_coclass_key;
        }
        if (VAR_19 != VAR_1)
            FUNC_1(VAR_20);
    }
    if (VAR_19 != VAR_1) goto error_return;

    for (; VAR_19 == VAR_1 && VAR_18->clsid; ++VAR_18) {
 HKEY VAR_24;
 HKEY VAR_25;

 FUNC_5(VAR_18->clsid, VAR_21, 39);
 VAR_19 = FUNC_2(VAR_20, VAR_21, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_24, ((void*)0));
 if (VAR_19 != VAR_1) goto error_close_coclass_key;

 FUNC_5(VAR_18->clsid, VAR_21, 39);
 VAR_19 = FUNC_2(VAR_23, VAR_21, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_25, ((void*)0));
 if (VAR_19 == VAR_1) {
     VAR_19 = FUNC_4(VAR_25, VAR_9, 0, VAR_5,
                                 (const BYTE*)VAR_21, 78);
     FUNC_1(VAR_25);
 }
 if (VAR_19 != VAR_1) goto error_close_clsid_key;

        if (VAR_18->author) {
     VAR_19 = FUNC_3(VAR_24, VAR_7, 0, VAR_5,
                                 (const BYTE*)VAR_18->author,
     FUNC_6(VAR_18->author) + 1);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->friendlyname) {
     VAR_19 = FUNC_3(VAR_24, VAR_13, 0, VAR_5,
                                 (const BYTE*)VAR_18->friendlyname,
     FUNC_6(VAR_18->friendlyname) + 1);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->vendor) {
            FUNC_5(VAR_18->vendor, VAR_21, 39);
     VAR_19 = FUNC_4(VAR_24, VAR_16, 0, VAR_5,
                                 (const BYTE*)VAR_21, 78);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->container_format) {
            FUNC_5(VAR_18->container_format, VAR_21, 39);
     VAR_19 = FUNC_4(VAR_24, VAR_10, 0, VAR_5,
                                 (const BYTE*)VAR_21, 78);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->version) {
     VAR_19 = FUNC_3(VAR_24, VAR_17, 0, VAR_5,
                                 (const BYTE*)VAR_18->version,
     FUNC_6(VAR_18->version) + 1);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->mimetypes) {
     VAR_19 = FUNC_3(VAR_24, VAR_15, 0, VAR_5,
                                 (const BYTE*)VAR_18->mimetypes,
     FUNC_6(VAR_18->mimetypes) + 1);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->extensions) {
     VAR_19 = FUNC_3(VAR_24, VAR_11, 0, VAR_5,
                                 (const BYTE*)VAR_18->extensions,
     FUNC_6(VAR_18->extensions) + 1);
     if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_18->formats) {
            HKEY VAR_26;
            GUID const * const *VAR_27;

            VAR_19 = FUNC_2(VAR_24, VAR_12, 0, ((void*)0), 0,
                                  VAR_3 | VAR_4, ((void*)0), &VAR_26, ((void*)0));
            if (VAR_19 != VAR_1) goto error_close_clsid_key;
            for (VAR_27=VAR_18->formats; *VAR_27; ++VAR_27)
            {
                HKEY VAR_28;
                FUNC_5(*VAR_27, VAR_21, 39);
                VAR_19 = FUNC_2(VAR_26, VAR_21, 0, ((void*)0), 0,
                                      VAR_3 | VAR_4, ((void*)0), &VAR_28, ((void*)0));
                if (VAR_19 != VAR_1) break;
                FUNC_1(VAR_28);
            }
            FUNC_1(VAR_26);
            if (VAR_19 != VAR_1) goto error_close_clsid_key;
        }

    error_close_clsid_key:
 FUNC_1(VAR_24);
    }

error_close_coclass_key:
    FUNC_1(VAR_23);
    FUNC_1(VAR_22);
    FUNC_1(VAR_20);
error_return:
    return VAR_19 != VAR_1 ? FUNC_0(VAR_19) : VAR_6;
}
