
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* backtitle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_10(const char *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_7();


 FUNC_6(VAR_7, VAR_6, VAR_5);

 FUNC_5(VAR_7, VAR_9, VAR_10);
 if (VAR_9 < VAR_2 || VAR_10 < VAR_3) {
  FUNC_3();
  return -VAR_0;
 }

 VAR_4.backtitle = VAR_8;
 FUNC_1(FUNC_4("MENUCONFIG_COLOR"));

 FUNC_8(VAR_7, VAR_1);
 FUNC_0();
 FUNC_9();
 FUNC_2();

 return 0;
}
