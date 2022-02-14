
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int statstg ;
typedef float WCHAR ;
struct TYPE_6__ {int pwcsName; } ;
typedef TYPE_1__ STATSTG ;
typedef int IStorage ;
typedef int IEnumSTATSTG ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int,TYPE_1__*,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int ,int **) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (float const*,int,int ,int **) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (int *,int ,float*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_10 (TYPE_1__*,int,int) ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ FUNC_12 (int ,float const*) ;

__attribute__((used)) static void FUNC_13(void)
{
    IStorage *VAR_6;
    IEnumSTATSTG *VAR_7;
    HRESULT VAR_8;
    static const char VAR_9[] = {'f','m','t','t','e','s','t',0};
    static const WCHAR VAR_10[] = {'f','m','t','t','e','s','t',0};
    static WCHAR VAR_11[] = {'S','t','g','U','s','r','T','y','p','e',0};
    static const WCHAR VAR_12[] = {1,'C','o','m','p','O','b','j',0};
    static const STATSTG VAR_13;

    VAR_8 = FUNC_7( VAR_10, VAR_1 | VAR_3 | VAR_2, 0, &VAR_6);
    FUNC_11(VAR_8 == VAR_4, "should succeed, res=%x\n", VAR_8);

    if (FUNC_6(VAR_8))
    {

        VAR_8 = FUNC_8(VAR_6, 0, VAR_11);
        FUNC_11(VAR_8 == VAR_4, "should succeed, res=%x\n", VAR_8);


        VAR_8 = FUNC_4(VAR_6, 0, ((void*)0), 0, &VAR_7);
        FUNC_11(VAR_8 == VAR_4, "should succeed, res=%x\n", VAR_8);
        if (FUNC_6(VAR_8))
        {
            BOOL VAR_14 = VAR_0;
            STATSTG VAR_15;
            DWORD VAR_16;
            FUNC_10(&VAR_15, 0xad, sizeof(VAR_15));
            while ((VAR_8 = FUNC_2(VAR_7, 1, &VAR_15, &VAR_16)) == VAR_4 && VAR_16 == 1)
            {
                if (FUNC_12(VAR_15.pwcsName, VAR_12) == 0)
                    VAR_14 = VAR_5;
                else
                    FUNC_11(0, "found unexpected stream or storage\n");
                FUNC_0(VAR_15.pwcsName);
            }
            FUNC_11(FUNC_9(&VAR_15, &VAR_13, sizeof(VAR_15)) == 0, "statstg is not zeroed\n");
            FUNC_11(VAR_14 == VAR_5, "expected storage to contain stream \\0001CompObj\n");
            FUNC_3(VAR_7);
        }


        VAR_8 = FUNC_8(VAR_6, 0, VAR_11);
        FUNC_11(VAR_8 == VAR_4, "should succeed, res=%x\n", VAR_8);


        VAR_8 = FUNC_4(VAR_6, 0, ((void*)0), 0, &VAR_7);
        FUNC_11(VAR_8 == VAR_4, "should succeed, res=%x\n", VAR_8);
        if (FUNC_6(VAR_8))
        {
            BOOL VAR_17 = VAR_0;
            STATSTG VAR_18;
            DWORD VAR_19;
            FUNC_10(&VAR_18, 0xad, sizeof(VAR_18));
            while ((VAR_8 = FUNC_2(VAR_7, 1, &VAR_18, &VAR_19)) == VAR_4 && VAR_19 == 1)
            {
                if (FUNC_12(VAR_18.pwcsName, VAR_12) == 0)
                    VAR_17 = VAR_5;
                else
                    FUNC_11(0, "found unexpected stream or storage\n");
                FUNC_0(VAR_18.pwcsName);
            }
            FUNC_11(FUNC_9(&VAR_18, &VAR_13, sizeof(VAR_18)) == 0, "statstg is not zeroed\n");
            FUNC_11(VAR_17 == VAR_5, "expected storage to contain stream \\0001CompObj\n");
            FUNC_3(VAR_7);
        }

        FUNC_5(VAR_6);
        FUNC_1( VAR_9 );
    }
}
