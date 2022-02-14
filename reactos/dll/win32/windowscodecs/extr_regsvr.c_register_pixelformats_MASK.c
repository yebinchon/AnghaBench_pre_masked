
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_pixelformat {int bitsperpixel; size_t channelcount; int const** channelmasks; int supportsalpha; int numericrepresentation; scalar_t__ version; int * vendor; scalar_t__ friendlyname; scalar_t__ author; int * clsid; } ;
typedef char WCHAR ;
typedef size_t UINT ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int BYTE ;


 int VAR_0 ;
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
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int const*,size_t) ;
 int VAR_8 ;
 int FUNC_5 (int *,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static HRESULT FUNC_8(struct regsvr_pixelformat const *VAR_21)
{
    LONG VAR_22 = VAR_1;
    HKEY VAR_23;
    WCHAR VAR_24[39];
    HKEY VAR_25;
    HKEY VAR_26;

    VAR_22 = FUNC_2(VAR_2, VAR_13, 0, ((void*)0), 0,
                          VAR_3 | VAR_4, ((void*)0), &VAR_23, ((void*)0));
    if (VAR_22 == VAR_1) {
        FUNC_5(&VAR_0, VAR_24, 39);
        VAR_22 = FUNC_2(VAR_23, VAR_24, 0, ((void*)0), 0,
                              VAR_3 | VAR_4, ((void*)0), &VAR_25, ((void*)0));
        if (VAR_22 == VAR_1)
        {
            VAR_22 = FUNC_2(VAR_25, VAR_16, 0, ((void*)0), 0,
                              VAR_3 | VAR_4, ((void*)0), &VAR_26, ((void*)0));
            if (VAR_22 != VAR_1) goto error_close_coclass_key;
        }
        if (VAR_22 != VAR_1)
            FUNC_1(VAR_23);
    }
    if (VAR_22 != VAR_1) goto error_return;

    for (; VAR_22 == VAR_1 && VAR_21->clsid; ++VAR_21) {
        HKEY VAR_27;
        HKEY VAR_28;

        FUNC_5(VAR_21->clsid, VAR_24, 39);
        VAR_22 = FUNC_2(VAR_23, VAR_24, 0, ((void*)0), 0,
                              VAR_3 | VAR_4, ((void*)0), &VAR_27, ((void*)0));
        if (VAR_22 != VAR_1) goto error_close_coclass_key;

        FUNC_5(VAR_21->clsid, VAR_24, 39);
        VAR_22 = FUNC_2(VAR_26, VAR_24, 0, ((void*)0), 0,
                              VAR_3 | VAR_4, ((void*)0), &VAR_28, ((void*)0));
        if (VAR_22 == VAR_1) {
            VAR_22 = FUNC_4(VAR_28, VAR_14, 0, VAR_7,
                                 (const BYTE*)VAR_24, 78);
            FUNC_1(VAR_28);
        }
        if (VAR_22 != VAR_1) goto error_close_clsid_key;

        if (VAR_21->author) {
            VAR_22 = FUNC_3(VAR_27, VAR_9, 0, VAR_7,
                                 (const BYTE*)VAR_21->author,
                                 FUNC_7(VAR_21->author) + 1);
            if (VAR_22 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_21->friendlyname) {
            VAR_22 = FUNC_3(VAR_27, VAR_15, 0, VAR_7,
                                 (const BYTE*)VAR_21->friendlyname,
                                 FUNC_7(VAR_21->friendlyname) + 1);
            if (VAR_22 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_21->vendor) {
            FUNC_5(VAR_21->vendor, VAR_24, 39);
            VAR_22 = FUNC_4(VAR_27, VAR_19, 0, VAR_7,
                                 (const BYTE*)VAR_24, 78);
            if (VAR_22 != VAR_1) goto error_close_clsid_key;
        }

        if (VAR_21->version) {
            VAR_22 = FUNC_3(VAR_27, VAR_20, 0, VAR_7,
                                 (const BYTE*)VAR_21->version,
                                 FUNC_7(VAR_21->version) + 1);
            if (VAR_22 != VAR_1) goto error_close_clsid_key;
        }

        VAR_22 = FUNC_3(VAR_27, VAR_10, 0, VAR_6,
                             (const BYTE*)&VAR_21->bitsperpixel, 4);
        if (VAR_22 != VAR_1) goto error_close_clsid_key;

        VAR_22 = FUNC_3(VAR_27, VAR_11, 0, VAR_6,
                             (const BYTE*)&VAR_21->channelcount, 4);
        if (VAR_22 != VAR_1) goto error_close_clsid_key;

        VAR_22 = FUNC_3(VAR_27, VAR_17, 0, VAR_6,
                             (const BYTE*)&VAR_21->numericrepresentation, 4);
        if (VAR_22 != VAR_1) goto error_close_clsid_key;

        VAR_22 = FUNC_3(VAR_27, VAR_18, 0, VAR_6,
                             (const BYTE*)&VAR_21->supportsalpha, 4);
        if (VAR_22 != VAR_1) goto error_close_clsid_key;

        if (VAR_21->channelmasks) {
            static const WCHAR VAR_29[] = {'%','d',0};
            HKEY VAR_30;
            UINT VAR_31, VAR_32;
            WCHAR VAR_33[11];

            VAR_32 = (VAR_21->bitsperpixel + 7)/8;

            VAR_22 = FUNC_2(VAR_27, VAR_12, 0, ((void*)0), 0,
                                  VAR_3 | VAR_4, ((void*)0), &VAR_30, ((void*)0));
            if (VAR_22 != VAR_1) goto error_close_clsid_key;
            for (VAR_31=0; VAR_31 < VAR_21->channelcount; VAR_31++)
            {
                FUNC_6(VAR_33, VAR_29, VAR_31);
                VAR_22 = FUNC_4(VAR_30, VAR_33, 0, VAR_5,
                                     VAR_21->channelmasks[VAR_31], VAR_32);
                if (VAR_22 != VAR_1) break;
            }
            FUNC_1(VAR_30);
            if (VAR_22 != VAR_1) goto error_close_clsid_key;
        }

    error_close_clsid_key:
        FUNC_1(VAR_27);
    }

error_close_coclass_key:
    FUNC_1(VAR_26);
    FUNC_1(VAR_25);
    FUNC_1(VAR_23);
error_return:
    return VAR_22 != VAR_1 ? FUNC_0(VAR_22) : VAR_8;
}
