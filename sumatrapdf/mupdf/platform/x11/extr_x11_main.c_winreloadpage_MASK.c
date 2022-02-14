
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdfapp_t ;
struct TYPE_5__ {scalar_t__* l; } ;
struct TYPE_6__ {int format; TYPE_1__ data; int message_type; int window; int send_event; scalar_t__ serial; int type; } ;
struct TYPE_7__ {TYPE_2__ xclient; } ;
typedef TYPE_3__ XEvent ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,TYPE_3__*) ;
 int VAR_3 ;

void FUNC_3(pdfapp_t *VAR_4)
{
 XEvent VAR_5;
 Display *VAR_6 = FUNC_1(((void*)0));

 VAR_5.xclient.type = VAR_0;
 VAR_5.xclient.serial = 0;
 VAR_5.xclient.send_event = VAR_1;
 VAR_5.xclient.window = VAR_3;
 VAR_5.xclient.message_type = VAR_2;
 VAR_5.xclient.format = 32;
 VAR_5.xclient.data.l[0] = 0;
 VAR_5.xclient.data.l[1] = 0;
 VAR_5.xclient.data.l[2] = 0;
 FUNC_2(VAR_6, VAR_3, 0, 0, &VAR_5);
 FUNC_0(VAR_6);
}
