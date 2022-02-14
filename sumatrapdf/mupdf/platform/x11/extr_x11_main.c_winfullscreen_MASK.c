
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdfapp_t ;
struct TYPE_5__ {int* l; } ;
struct TYPE_6__ {int format; TYPE_1__ data; int message_type; int window; int send_event; scalar_t__ serial; int type; } ;
struct TYPE_7__ {TYPE_2__ xclient; } ;
typedef TYPE_3__ XEvent ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_2(pdfapp_t *VAR_9, int VAR_10)
{
 XEvent VAR_11;
 VAR_11.xclient.type = VAR_0;
 VAR_11.xclient.serial = 0;
 VAR_11.xclient.send_event = VAR_6;
 VAR_11.xclient.window = VAR_8;
 VAR_11.xclient.message_type = VAR_2;
 VAR_11.xclient.format = 32;
 VAR_11.xclient.data.l[0] = VAR_10;
 VAR_11.xclient.data.l[1] = VAR_3;
 VAR_11.xclient.data.l[2] = 0;
 FUNC_1(VAR_7, FUNC_0(VAR_7), VAR_1,
  VAR_5 | VAR_4,
  &VAR_11);
}
