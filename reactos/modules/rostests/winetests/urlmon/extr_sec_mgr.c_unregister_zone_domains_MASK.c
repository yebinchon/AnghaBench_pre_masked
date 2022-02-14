
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* subdomain; char* domain; } ;
typedef TYPE_1__ zone_domain_mapping ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 char* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
    HKEY VAR_6;
    DWORD VAR_7, VAR_8;

    VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6);
    FUNC_5(VAR_7 == VAR_1 || FUNC_4(VAR_7 == VAR_0), "RegOpenKey failed: %d\n", VAR_7);
    if(VAR_7 == VAR_1) {
        FUNC_2(VAR_6, "local.machine");
        FUNC_1(VAR_6);
    }

    VAR_7 = FUNC_3(VAR_2, VAR_4, &VAR_6);
    FUNC_5(VAR_7 == VAR_1, "RegOpenKey failed: %d\n", VAR_7);

    for(VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); ++VAR_8) {
        const zone_domain_mapping *VAR_9 = VAR_5+VAR_8;





        if(VAR_9->subdomain) {
            HKEY VAR_10;

            VAR_7 = FUNC_3(VAR_6, VAR_9->domain, &VAR_10);
            if(VAR_7 == VAR_1) {
                FUNC_2(VAR_10, VAR_9->subdomain);
                FUNC_1(VAR_10);
            }
        }
        FUNC_2(VAR_6, VAR_9->domain);
    }

    FUNC_1(VAR_6);
}
