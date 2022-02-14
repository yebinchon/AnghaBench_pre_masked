
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gridsize; scalar_t__ key; int * dialog; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_1(500, (VAR_7.gridsize+4)*4);
 FUNC_4(VAR_6, VAR_3, VAR_4, 2, 2);
 FUNC_3("%C %s", 0x26a0, VAR_8);
 FUNC_4(VAR_0, VAR_3, VAR_5, 2, 2);
 if (FUNC_0("Okay") || VAR_7.key == VAR_1 || VAR_7.key == VAR_2)
  VAR_7.dialog = ((void*)0);
 FUNC_2();
}
