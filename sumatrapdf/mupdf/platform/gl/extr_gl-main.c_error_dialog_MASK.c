
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gridsize; char key; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_6(void)
{
 FUNC_2(500, (VAR_8.gridsize+4)*4);
 FUNC_5(VAR_6, VAR_3, VAR_4, 2, 2);
 FUNC_4("%C %s", 0x1f4a3, VAR_7);
 FUNC_5(VAR_0, VAR_3, VAR_5, 2, 2);
 if (FUNC_1("Quit") || VAR_8.key == VAR_1 || VAR_8.key == VAR_2 || VAR_8.key == 'q')
  FUNC_0();
 FUNC_3();
}
