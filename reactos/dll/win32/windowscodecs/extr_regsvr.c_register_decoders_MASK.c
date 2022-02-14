
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regsvr_decoder {int const* const clsid; int const* const vendor; int const* const container_format; int** formats; TYPE_1__* patterns; scalar_t__ extensions; scalar_t__ mimetypes; scalar_t__ version; scalar_t__ friendlyname; scalar_t__ author; } ;
typedef char WCHAR ;
struct TYPE_2__ {int length; int endofstream; int const* mask; int const* pattern; int position; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int const*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int const*,int) ;
 int VAR_8 ;
 int FUNC_5 (int const* const,char*,int) ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (char*,int,char const*,int) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static HRESULT FUNC_8(struct regsvr_decoder const *VAR_26)
{
    LONG VAR_27 = VAR_1;
    HKEY VAR_28;
    WCHAR VAR_29[39];
    HKEY VAR_30;
    HKEY VAR_31;

    VAR_27 = FUNC_2(VAR_2, VAR_10, 0, ((void*)0), 0,
     VAR_3 | VAR_4, ((void*)0), &VAR_28, ((void*)0));
    if (VAR_27 == VAR_1) {
        FUNC_5(&VAR_0, VAR_29, 39);
        VAR_27 = FUNC_2(VAR_28, VAR_29, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_30, ((void*)0));
        if (VAR_27 == VAR_1)
        {
            VAR_27 = FUNC_2(VAR_30, VAR_17, 0, ((void*)0), 0,
                VAR_3 | VAR_4, ((void*)0), &VAR_31, ((void*)0));
            if (VAR_27 != VAR_1) goto error_close_coclass_key;
        }
        if (VAR_27 != VAR_1)
            FUNC_1(VAR_28);
    }
    if (VAR_27 != VAR_1) goto error_return;

    for (; VAR_27 == VAR_1 && VAR_26->clsid; ++VAR_26) {
 HKEY VAR_32;
 HKEY VAR_33;

 FUNC_5(VAR_26->clsid, VAR_29, 39);
 VAR_27 = FUNC_2(VAR_28, VAR_29, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_32, ((void*)0));
 if (VAR_27 != VAR_1) goto error_close_coclass_key;

 FUNC_5(VAR_26->clsid, VAR_29, 39);
 VAR_27 = FUNC_2(VAR_31, VAR_29, 0, ((void*)0), 0,
         VAR_3 | VAR_4, ((void*)0), &VAR_33, ((void*)0));
 if (VAR_27 == VAR_1) {
     VAR_27 = FUNC_4(VAR_33, VAR_11, 0, VAR_7,
                                 (const BYTE*)VAR_29, 78);
     FUNC_1(VAR_33);
 }
 if (VAR_27 != VAR_1) goto error_close_clsid_key;

        if (VAR_26->author) {
     VAR_27 = FUNC_3(VAR_32, VAR_9, 0, VAR_7,
                                 (const BYTE*)VAR_26->author,
     FUNC_7(VAR_26->author) + 1);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->friendlyname) {
     VAR_27 = FUNC_3(VAR_32, VAR_16, 0, VAR_7,
                                 (const BYTE*)VAR_26->friendlyname,
     FUNC_7(VAR_26->friendlyname) + 1);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->vendor) {
            FUNC_5(VAR_26->vendor, VAR_29, 39);
     VAR_27 = FUNC_4(VAR_32, VAR_24, 0, VAR_7,
                                 (const BYTE*)VAR_29, 78);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->container_format) {
            FUNC_5(VAR_26->container_format, VAR_29, 39);
     VAR_27 = FUNC_4(VAR_32, VAR_12, 0, VAR_7,
                                 (const BYTE*)VAR_29, 78);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->version) {
     VAR_27 = FUNC_3(VAR_32, VAR_25, 0, VAR_7,
                                 (const BYTE*)VAR_26->version,
     FUNC_7(VAR_26->version) + 1);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->mimetypes) {
     VAR_27 = FUNC_3(VAR_32, VAR_20, 0, VAR_7,
                                 (const BYTE*)VAR_26->mimetypes,
     FUNC_7(VAR_26->mimetypes) + 1);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->extensions) {
     VAR_27 = FUNC_3(VAR_32, VAR_14, 0, VAR_7,
                                 (const BYTE*)VAR_26->extensions,
     FUNC_7(VAR_26->extensions) + 1);
     if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->formats) {
            HKEY VAR_34;
            GUID const * const *VAR_35;

            VAR_27 = FUNC_2(VAR_32, VAR_15, 0, ((void*)0), 0,
                                  VAR_3 | VAR_4, ((void*)0), &VAR_34, ((void*)0));
            if (VAR_27 != VAR_1) goto error_close_clsid_key;
            for (VAR_35=VAR_26->formats; *VAR_35; ++VAR_35)
            {
                HKEY VAR_36;
                FUNC_5(*VAR_35, VAR_29, 39);
                VAR_27 = FUNC_2(VAR_34, VAR_29, 0, ((void*)0), 0,
                                      VAR_3 | VAR_4, ((void*)0), &VAR_36, ((void*)0));
                if (VAR_27 != VAR_1) break;
                FUNC_1(VAR_36);
            }
            FUNC_1(VAR_34);
            if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_26->patterns) {
            HKEY VAR_37;
            int VAR_38;

            VAR_27 = FUNC_2(VAR_32, VAR_22, 0, ((void*)0), 0,
                                  VAR_3 | VAR_4, ((void*)0), &VAR_37, ((void*)0));
            if (VAR_27 != VAR_1) goto error_close_clsid_key;
            for (VAR_38=0; VAR_26->patterns[VAR_38].length; VAR_38++)
            {
                HKEY VAR_39;
                static const WCHAR VAR_40[] = {'%','i',0};
                FUNC_6(VAR_29, 39, VAR_40, VAR_38);
                VAR_27 = FUNC_2(VAR_37, VAR_29, 0, ((void*)0), 0,
                                      VAR_3 | VAR_4, ((void*)0), &VAR_39, ((void*)0));
                if (VAR_27 != VAR_1) break;
         VAR_27 = FUNC_3(VAR_39, VAR_18, 0, VAR_6,
                                     (const BYTE*)&VAR_26->patterns[VAR_38].length, 4);
                if (VAR_27 == VAR_1)
             VAR_27 = FUNC_3(VAR_39, VAR_23, 0, VAR_6,
                                         (const BYTE*)&VAR_26->patterns[VAR_38].position, 4);
                if (VAR_27 == VAR_1)
             VAR_27 = FUNC_3(VAR_39, VAR_21, 0, VAR_5,
             VAR_26->patterns[VAR_38].pattern,
             VAR_26->patterns[VAR_38].length);
                if (VAR_27 == VAR_1)
             VAR_27 = FUNC_3(VAR_39, VAR_19, 0, VAR_5,
             VAR_26->patterns[VAR_38].mask,
             VAR_26->patterns[VAR_38].length);
                if (VAR_27 == VAR_1)
             VAR_27 = FUNC_3(VAR_39, VAR_13, 0, VAR_6,
                                         (const BYTE*)&VAR_26->patterns[VAR_38].endofstream, 4);
                FUNC_1(VAR_39);
            }
            FUNC_1(VAR_37);
            if (VAR_27 != VAR_1) goto error_close_clsid_key;
        }

    error_close_clsid_key:
 FUNC_1(VAR_32);
    }

error_close_coclass_key:
    FUNC_1(VAR_31);
    FUNC_1(VAR_30);
    FUNC_1(VAR_28);
error_return:
    return VAR_27 != VAR_1 ? FUNC_0(VAR_27) : VAR_8;
}
