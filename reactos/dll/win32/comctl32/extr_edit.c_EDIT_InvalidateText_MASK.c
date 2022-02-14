
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int style; } ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EDITSTATE *VAR_1, INT VAR_2, INT VAR_3)
{
 if (VAR_3 == VAR_2)
  return;

 if (VAR_3 == -1)
  VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 < VAR_2) {
     INT VAR_4 = VAR_2;
     VAR_2 = VAR_3;
     VAR_3 = VAR_4;
 }

 if (VAR_1->style & VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
