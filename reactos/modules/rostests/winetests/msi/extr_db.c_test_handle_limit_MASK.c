
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hviews ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_2;
    MSIHANDLE VAR_3;
    MSIHANDLE VAR_4[VAR_1];
    UINT VAR_5;


    VAR_3 = FUNC_3();
    FUNC_5( VAR_3, "failed to create db\n");

    FUNC_4(VAR_4, 0, sizeof(VAR_4));

    for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
        static char VAR_6[256] = "SELECT * from `_Tables`";
        VAR_4[VAR_2] = 0xdeadbeeb;
        VAR_5 = FUNC_1(VAR_3, VAR_6, &VAR_4[VAR_2]);
        if( VAR_5 != VAR_0 || VAR_4[VAR_2] == 0xdeadbeeb ||
            VAR_4[VAR_2] == 0 || (VAR_2 && (VAR_4[VAR_2] == VAR_4[VAR_2-1])))
            break;
    }

    FUNC_5( VAR_2 == VAR_1, "problem opening views\n");

    for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
        if (VAR_4[VAR_2] != 0 && VAR_4[VAR_2] != 0xdeadbeeb) {
            FUNC_2(VAR_4[VAR_2]);
            VAR_5 = FUNC_0(VAR_4[VAR_2]);
            if (VAR_5 != VAR_0)
                break;
        }
    }

    FUNC_5( VAR_2 == VAR_1, "problem closing views\n");

    VAR_5 = FUNC_0(VAR_3);
    FUNC_5( VAR_5 == VAR_0, "failed to close database\n");
}
