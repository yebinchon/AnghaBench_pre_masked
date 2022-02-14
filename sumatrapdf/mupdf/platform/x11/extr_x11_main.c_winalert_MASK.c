
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdfapp_t ;
struct TYPE_3__ {char* title; char* message; int button_group_type; int button_pressed; } ;
typedef TYPE_1__ pdf_alert_event ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int VAR_2 ;

void FUNC_2(pdfapp_t *VAR_3, pdf_alert_event *VAR_4)
{
 char VAR_5[1024];
 FUNC_1(VAR_5, sizeof VAR_5, "Alert %s: %s", VAR_4->title, VAR_4->message);
 FUNC_0(VAR_2, "%s\n", VAR_5);
 switch (VAR_4->button_group_type)
 {
 case 131:
 case 130:
  VAR_4->button_pressed = VAR_0;
  break;
 case 129:
 case 128:
  VAR_4->button_pressed = VAR_1;
  break;
 }
}
