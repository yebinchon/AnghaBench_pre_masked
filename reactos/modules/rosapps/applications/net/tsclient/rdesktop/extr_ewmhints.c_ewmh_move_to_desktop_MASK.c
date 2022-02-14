
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int* l; } ;
struct TYPE_8__ {int format; TYPE_1__ data; int message_type; int window; } ;
struct TYPE_9__ {TYPE_2__ xclient; int type; } ;
typedef TYPE_3__ XEvent ;
typedef int Window ;
struct TYPE_10__ {int display; int net_wm_desktop_atom; } ;
typedef int Status ;
typedef TYPE_4__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int,TYPE_3__*) ;

int
FUNC_2(RDPCLIENT * VAR_4, Window VAR_5, unsigned int VAR_6)
{
 Status VAR_7;
 XEvent VAR_8;

 VAR_8.type = VAR_0;
 VAR_8.xclient.window = VAR_5;
 VAR_8.xclient.message_type = VAR_4->net_wm_desktop_atom;
 VAR_8.xclient.format = 32;
 VAR_8.xclient.data.l[0] = VAR_6;
 VAR_8.xclient.data.l[1] = 0;
 VAR_8.xclient.data.l[2] = 0;
 VAR_8.xclient.data.l[3] = 0;
 VAR_8.xclient.data.l[4] = 0;
 VAR_7 = FUNC_1(VAR_4->display, FUNC_0(VAR_4->display), VAR_1,
       VAR_2 | VAR_3, &VAR_8);
 if (!VAR_7)
  return -1;

 return 0;
}
