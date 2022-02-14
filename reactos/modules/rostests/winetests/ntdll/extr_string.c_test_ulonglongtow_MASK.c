
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; int value; } ;
typedef int * LPWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int *) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int * FUNC_3 (int ,int *,int) ;
 int * FUNC_4 (int ,int *,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_2;
    LPWSTR VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 if (VAR_1[VAR_2].mask & 0x10) {
     FUNC_1(VAR_2, &VAR_1[VAR_2]);
 }
 if (&FUNC_4) {
     if (VAR_1[VAR_2].mask & 0x20) {
  FUNC_2(VAR_2, &VAR_1[VAR_2]);
     }
 }
    }

    if (0) {

        VAR_3 = FUNC_3(VAR_1[0].value, ((void*)0), 10);
        FUNC_0(VAR_3 == ((void*)0),
           "(test d): _i64tow(0x%s, NULL, 10) has result %p, expected: NULL\n",
           FUNC_5(VAR_1[0].value), VAR_3);
    }

    if (&FUNC_4) {
        if (0) {

     VAR_3 = FUNC_4(VAR_1[0].value, ((void*)0), 10);
     FUNC_0(VAR_3 == ((void*)0),
               "(test e): _ui64tow(0x%s, NULL, 10) has result %p, expected: NULL\n",
        FUNC_5(VAR_1[0].value), VAR_3);
        }
    }
}
