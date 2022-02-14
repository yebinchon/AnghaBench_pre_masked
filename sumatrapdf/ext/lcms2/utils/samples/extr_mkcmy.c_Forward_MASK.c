
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double L; double a; double b; } ;
typedef TYPE_1__ cmsCIELab ;
typedef scalar_t__ WORD ;
struct TYPE_5__ {int Lab2RGB; } ;
typedef int LPVOID ;
typedef TYPE_2__* LPCARGO ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__**,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (char*,double,double,double) ;

__attribute__((used)) static
int FUNC_3(register WORD VAR_1[], register WORD VAR_2[], register LPVOID VAR_3)
{
 LPCARGO VAR_4 = (LPCARGO) VAR_3;
 WORD VAR_5[3];
    cmsCIELab VAR_6;

    FUNC_1(&VAR_6, VAR_1);

 FUNC_2("%g %g %g\n", VAR_6.L, VAR_6.a, VAR_6.b);

 FUNC_0(VAR_4 ->Lab2RGB, VAR_1, &VAR_5, 1);


 VAR_2[0] = 0xFFFF - VAR_5[0];
 VAR_2[1] = 0xFFFF - VAR_5[1];
 VAR_2[2] = 0xFFFF - VAR_5[2];


 return VAR_0;

}
