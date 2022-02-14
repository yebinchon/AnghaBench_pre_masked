
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int str; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_2;
    int VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_3 = FUNC_1(VAR_1[VAR_2].str);
        FUNC_0(VAR_3 == VAR_1[VAR_2].value,
           "(test %d): call failed: _atol(\"%s\") has result %d, expected: %d\n",
           VAR_2, VAR_1[VAR_2].str, VAR_3, VAR_1[VAR_2].value);
    }
}
