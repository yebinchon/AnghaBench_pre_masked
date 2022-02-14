
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ breathing; int level; scalar_t__ enable; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(void) {
  FUNC_4("backlight_init_ports()\n");
  FUNC_3(VAR_0, 6, FUNC_0(1));
  FUNC_5(&VAR_1, &VAR_3);

  if(VAR_2.enable){
    FUNC_1(VAR_2.level);
    if(VAR_2.breathing){
      FUNC_2();
    }
  } else {
    FUNC_1(0);
  }

}
