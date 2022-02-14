
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* domain; char* subdomain; char* scheme; int zone; } ;
typedef TYPE_1__ zone_domain_mapping ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int *,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 int FUNC_7 (char*) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static BOOL FUNC_8(void)
{
    HKEY VAR_11;
    DWORD VAR_12, VAR_13;


    VAR_12 = FUNC_3(VAR_5, VAR_9, &VAR_11);
    FUNC_6(VAR_12 == VAR_2 || FUNC_5(VAR_12 == VAR_1), "RegOpenKey failed: %d\n", VAR_12);
    if(VAR_12 == VAR_2) {
        HKEY VAR_14;
        DWORD VAR_15 = VAR_8;

        VAR_12 = FUNC_2(VAR_11, "local.machine", &VAR_14);
        if (VAR_12 == VAR_0)
        {
            FUNC_7("need admin rights\n");
            FUNC_1(VAR_11);
            return VAR_3;
        }
        FUNC_6(VAR_12 == VAR_2, "RegCreateKey failed: %d\n", VAR_12);

        VAR_12 = FUNC_4(VAR_14, "http", 0, VAR_6, (BYTE*)&VAR_15, sizeof(DWORD));
        FUNC_6(VAR_12 == VAR_2, "RegSetValueEx failed: %d\n", VAR_12);

        FUNC_1(VAR_14);
        FUNC_1(VAR_11);
    }

    VAR_12 = FUNC_3(VAR_4, VAR_9, &VAR_11);
    FUNC_6(VAR_12 == VAR_2, "RegOpenKey failed: %d\n", VAR_12);

    for(VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); ++VAR_13) {
        const zone_domain_mapping *VAR_16 = VAR_10+VAR_13;
        HKEY VAR_17;

        VAR_12 = FUNC_2(VAR_11, VAR_16->domain, &VAR_17);
        FUNC_6(VAR_12 == VAR_2, "RegCreateKey failed with %d on test %d\n", VAR_12, VAR_13);


        if(!VAR_16->subdomain) {
            VAR_12 = FUNC_4(VAR_17, VAR_16->scheme, 0, VAR_6, (BYTE*)&VAR_16->zone, sizeof(DWORD));
            FUNC_6(VAR_12 == VAR_2, "RegSetValueEx failed with %d on test %d\n", VAR_12, VAR_13);
        } else {
            HKEY VAR_18;

            VAR_12 = FUNC_2(VAR_17, VAR_16->subdomain, &VAR_18);
            FUNC_6(VAR_12 == VAR_2, "RegCreateKey failed with %d on test %d\n", VAR_12, VAR_13);

            VAR_12 = FUNC_4(VAR_18, VAR_16->scheme, 0, VAR_6, (BYTE*)&VAR_16->zone, sizeof(DWORD));
            FUNC_6(VAR_12 == VAR_2, "RegSetValueEx failed with %d on test %d\n", VAR_12, VAR_13);

            FUNC_1(VAR_18);
        }

        FUNC_1(VAR_17);
    }

    FUNC_1(VAR_11);
    return VAR_7;
}
