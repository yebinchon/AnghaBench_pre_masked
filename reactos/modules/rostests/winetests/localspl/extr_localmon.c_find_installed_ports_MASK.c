
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {char* pName; } ;
typedef TYPE_1__ PORT_INFO_1W ;
typedef int * LPBYTE ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_4 (char*,int ) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char**,char*,size_t) ;
 size_t FUNC_7 (int *,int,int *,size_t,size_t*,size_t*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    PORT_INFO_1W * VAR_10 = ((void*)0);
    WCHAR VAR_11[VAR_1];
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;

    VAR_4[0] = '\0';
    VAR_6[0] = '\0';
    VAR_5[0] = '\0';

    if (!&FUNC_7) return;

    VAR_14 = FUNC_7(((void*)0), 1, ((void*)0), 0, &VAR_12, &VAR_13);
    if (!VAR_14 && (FUNC_0() == VAR_0)) {
        VAR_10 = FUNC_2(FUNC_1(), 0, VAR_12);
    }
    VAR_14 = FUNC_7(((void*)0), 1, (LPBYTE) VAR_10, VAR_12, &VAR_12, &VAR_13);

    if (!VAR_14) {
        FUNC_8("no ports found\n");
        FUNC_3(FUNC_1(), 0, VAR_10);
        return;
    }

    VAR_15 = 0;
    while (VAR_15 < VAR_13) {
        VAR_14 = FUNC_5(VAR_10[VAR_15].pName);
        if ((VAR_14 >= VAR_2) && (VAR_14 < VAR_1) &&
            (VAR_10[VAR_15].pName[VAR_14-1] == ':')) {

            FUNC_6(&VAR_11, VAR_10[VAR_15].pName, VAR_3 * sizeof(WCHAR));
            VAR_11[VAR_3] = '\0';

            if (!VAR_4[0] && (FUNC_4(VAR_11, VAR_7) == 0)) {
                FUNC_6(&VAR_4, VAR_10[VAR_15].pName, (VAR_14+1) * sizeof(WCHAR));
            }

            if (!VAR_6[0] && (FUNC_4(VAR_11, VAR_9) == 0)) {
                FUNC_6(&VAR_6, VAR_10[VAR_15].pName, (VAR_14+1) * sizeof(WCHAR));
            }

            if (!VAR_5[0] && (FUNC_4(VAR_10[VAR_15].pName, VAR_8) == 0)) {
                FUNC_6(&VAR_5, VAR_10[VAR_15].pName, (VAR_14+1) * sizeof(WCHAR));
            }
        }
        VAR_15++;
    }

    FUNC_3(FUNC_1(), 0, VAR_10);
}
