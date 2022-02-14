
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double L; int b; int a; } ;
typedef TYPE_1__ cmsCIELab ;
typedef int WORD ;
typedef int LPVOID ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static
int FUNC_3(register WORD VAR_1[], register WORD VAR_2[], register LPVOID VAR_3)
{
    cmsCIELab VAR_4;


    FUNC_0(&VAR_4, VAR_1);

 if (FUNC_1(VAR_4.a) < 3 && FUNC_1(VAR_4.b) < 3) {

  double VAR_5 = VAR_4.L / 100.0;
     WORD VAR_6;

  if (VAR_5 > 1) VAR_5 = 1;
  VAR_6 = (WORD) FUNC_2(VAR_5* 65535.0 + 0.5);

  VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_6;
 }
 else {
  VAR_2[0] = 0xFFFF; VAR_2[1] = 0; VAR_2[2] = 0;
 }

 return VAR_0;
}
