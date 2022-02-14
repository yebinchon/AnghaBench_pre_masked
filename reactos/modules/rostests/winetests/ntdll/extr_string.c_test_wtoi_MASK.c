
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_6__ {int value; int str; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_2;
    UNICODE_STRING VAR_3;
    int VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 FUNC_1(&VAR_3, VAR_1[VAR_2].str);
 VAR_4 = FUNC_3(VAR_3.Buffer);
 FUNC_0(VAR_4 == VAR_1[VAR_2].value,
           "(test %d): call failed: _wtoi(\"%s\") has result %d, expected: %d\n",
    VAR_2, VAR_1[VAR_2].str, VAR_4, VAR_1[VAR_2].value);
 FUNC_2(&VAR_3);
    }
}
