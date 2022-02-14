
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; int value; } ;
typedef int * LPWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int *) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int * FUNC_4 (int ,int *,int) ;
 int * FUNC_5 (int ,int *,int) ;
 int * FUNC_6 (int ,int *,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_7(void)
{
    int VAR_2;
    LPWSTR VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 if (VAR_1[VAR_2].mask & 0x10) {
     FUNC_1(VAR_2, &VAR_1[VAR_2]);
 }
 if (VAR_1[VAR_2].mask & 0x20) {
     FUNC_2(VAR_2, &VAR_1[VAR_2]);
 }
 if (VAR_1[VAR_2].mask & 0x40) {
     FUNC_3(VAR_2, &VAR_1[VAR_2]);
 }
    }

    if (0) {

        VAR_3 = FUNC_4(VAR_1[0].value, ((void*)0), 10);
        FUNC_0(VAR_3 == ((void*)0),
           "(test a): _itow(%d, NULL, 10) has result %p, expected: NULL\n",
           VAR_1[0].value, VAR_3);
    }

    if (0) {

        VAR_3 = FUNC_5(VAR_1[0].value, ((void*)0), 10);
        FUNC_0(VAR_3 == ((void*)0),
           "(test b): _ltow(%d, NULL, 10) has result %p, expected: NULL\n",
           VAR_1[0].value, VAR_3);
    }

    if (0) {

        VAR_3 = FUNC_6(VAR_1[0].value, ((void*)0), 10);
        FUNC_0(VAR_3 == ((void*)0),
           "(test c): _ultow(%d, NULL, 10) has result %p, expected: NULL\n",
           VAR_1[0].value, VAR_3);
    }
}
