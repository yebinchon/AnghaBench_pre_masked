
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int settings_register; int io_type; int control_register; int control2_register; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_0 (struct hdspm*,int) ;
 int FUNC_1 (struct hdspm*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct hdspm*) ;
 int FUNC_4 (struct hdspm*,int,int) ;
 int FUNC_5 (struct hdspm*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hdspm * VAR_9)
{






 VAR_9->settings_register = 0;

 switch (VAR_9->io_type) {
 case 130:
 case 129:
  VAR_9->control_register =
   0x2 + 0x8 + 0x10 + 0x80 + 0x400 + 0x4000 + 0x1000000;
  break;

 case 128:
 case 131:
  VAR_9->settings_register = 0x1 + 0x1000;


  VAR_9->control_register =
   0x2 + 0x8 + 0x10 + 0x80 + 0x400 + 0x4000 + 0x1000000;
  break;

 case 132:
  VAR_9->control_register =
   VAR_1 |
   FUNC_2(7) |
   VAR_4 |
   VAR_2 |
   VAR_3;
  break;
 }

 FUNC_5(VAR_9, VAR_7, VAR_9->control_register);

 if (132 == VAR_9->io_type) {




  VAR_9->control2_register = 0;


  FUNC_5(VAR_9, VAR_6, VAR_9->control2_register);
 }
 FUNC_1(VAR_9);



 FUNC_0(VAR_9, 0 * VAR_8);

 if (FUNC_3(VAR_9))
  FUNC_5(VAR_9, VAR_5, VAR_9->settings_register);


 FUNC_4(VAR_9, 48000, 1);

 return 0;
}
