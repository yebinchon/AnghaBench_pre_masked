
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdfapp_t ;
struct TYPE_3__ {int icon_type; int button_group_type; int button_pressed; int title; int message; } ;
typedef TYPE_1__ pdf_alert_event ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int VAR_13 ;

void FUNC_1(pdfapp_t *VAR_14, pdf_alert_event *VAR_15)
{
 int VAR_16 = VAR_4;
 int VAR_17 = VAR_3;
 int VAR_18 = VAR_10;

 switch (VAR_15->icon_type)
 {
 case 131:
  VAR_17 = VAR_0;
  break;
 case 128:
  VAR_17 = VAR_3;
  break;
 case 130:
  VAR_17 = VAR_2;
  break;
 case 129:
  VAR_17 = VAR_1;
  break;
 }

 switch (VAR_15->button_group_type)
 {
 case 135:
  VAR_16 = VAR_4;
  break;
 case 134:
  VAR_16 = VAR_5;
  break;
 case 133:
  VAR_16 = VAR_6;
  break;
 case 132:
  VAR_16 = VAR_7;
  break;
 }

 VAR_18 = FUNC_0(VAR_13, VAR_15->message, VAR_15->title, VAR_17|VAR_16);

 switch (VAR_18)
 {
 case 137:
  VAR_15->button_pressed = VAR_11;
  break;
 case 139:
  VAR_15->button_pressed = VAR_8;
  break;
 case 138:
  VAR_15->button_pressed = VAR_9;
  break;
 case 136:
  VAR_15->button_pressed = VAR_12;
 }
}
