
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driveexists_test {char* drivespec; int drivetype; scalar_t__ expected_ret; } ;
typedef char WCHAR ;
typedef scalar_t__ VARIANT_BOOL ;
typedef scalar_t__ HRESULT ;
typedef char* BSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct driveexists_test* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 int FUNC_5 (char*,int,int ) ;
 char FUNC_6 (char) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    const struct driveexists_test *VAR_6 = VAR_4;
    HRESULT VAR_7;
    VARIANT_BOOL VAR_8;
    BSTR VAR_9;
    WCHAR VAR_10[] = {'?',':','\\',0};

    VAR_7 = FUNC_1(VAR_5, ((void*)0), ((void*)0));
    FUNC_4(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);

    VAR_8 = VAR_3;
    VAR_7 = FUNC_1(VAR_5, ((void*)0), &VAR_8);
    FUNC_4(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    FUNC_4(VAR_8 == VAR_2, "got %x\n", VAR_8);

    VAR_9 = FUNC_2(VAR_10);
    VAR_7 = FUNC_1(VAR_5, VAR_9, ((void*)0));
    FUNC_4(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);
    FUNC_3(VAR_9);

    for (; *VAR_6->drivespec; VAR_6++) {
        VAR_9 = FUNC_2(VAR_6->drivespec);
        if (VAR_6->drivetype != -1) {
            for (VAR_10[0] = 'A'; VAR_10[0] <= 'Z'; VAR_10[0]++)
                if (FUNC_0(VAR_10) == VAR_6->drivetype)
                    break;
            if (VAR_10[0] > 'Z') {
                FUNC_5("No drive with type 0x%x found, skipping test %s.\n",
                        VAR_6->drivetype, FUNC_7(VAR_6->drivespec));
                FUNC_3(VAR_9);
                continue;
            }


            VAR_9[0] = VAR_10[0];
            VAR_8 = VAR_6->expected_ret == VAR_3 ? VAR_2 : VAR_3;
            VAR_7 = FUNC_1(VAR_5, VAR_9, &VAR_8);
            FUNC_4(VAR_7 == VAR_1, "got 0x%08x for drive spec %s (%s)\n",
                    VAR_7, FUNC_7(VAR_9), FUNC_7(VAR_6->drivespec));
            FUNC_4(VAR_8 == VAR_6->expected_ret, "got %d, expected %d for drive spec %s (%s)\n",
                    VAR_8, VAR_6->expected_ret, FUNC_7(VAR_9), FUNC_7(VAR_6->drivespec));

            VAR_9[0] = FUNC_6(VAR_10[0]);
        }

        VAR_8 = VAR_6->expected_ret == VAR_3 ? VAR_2 : VAR_3;
        VAR_7 = FUNC_1(VAR_5, VAR_9, &VAR_8);
        FUNC_4(VAR_7 == VAR_1, "got 0x%08x for drive spec %s (%s)\n",
                VAR_7, FUNC_7(VAR_9), FUNC_7(VAR_6->drivespec));
        FUNC_4(VAR_8 == VAR_6->expected_ret, "got %d, expected %d for drive spec %s (%s)\n",
                VAR_8, VAR_6->expected_ret, FUNC_7(VAR_9), FUNC_7(VAR_6->drivespec));

        FUNC_3(VAR_9);
    }
}
