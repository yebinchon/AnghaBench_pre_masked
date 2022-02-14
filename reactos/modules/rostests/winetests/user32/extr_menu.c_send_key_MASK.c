
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i ;
typedef int WORD ;
struct TYPE_6__ {int dwFlags; int wVk; } ;
struct TYPE_5__ {TYPE_2__ ki; } ;
struct TYPE_7__ {TYPE_1__ u; int type; } ;
typedef TYPE_3__ TEST_INPUT ;
typedef int INPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int,int *,int) ;

__attribute__((used)) static void FUNC_2(WORD VAR_2)
{
    TEST_INPUT VAR_3[2];
    FUNC_0(VAR_3, 0, sizeof(VAR_3));
    VAR_3[0].type = VAR_3[1].type = VAR_0;
    VAR_3[0].u.ki.wVk = VAR_3[1].u.ki.wVk = VAR_2;
    VAR_3[1].u.ki.dwFlags = VAR_1;
    FUNC_1(2, (INPUT *) VAR_3, sizeof(INPUT));
}
