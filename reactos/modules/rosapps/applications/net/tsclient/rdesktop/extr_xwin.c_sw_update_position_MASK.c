
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int outpos_serial; int outpos_xoffset; int outpos_yoffset; int outpos_height; int outpos_width; int outstanding_position; int id; int wnd; } ;
typedef TYPE_1__ seamless_window ;
struct TYPE_9__ {int height; int width; int border_width; int root; } ;
typedef TYPE_2__ XWindowAttributes ;
typedef int Window ;
struct TYPE_10__ {int display; } ;
typedef TYPE_3__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int*,int*,int *) ;
 unsigned int FUNC_2 (TYPE_3__*,int ,int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(RDPCLIENT * VAR_1, seamless_window * VAR_2)
{
 XWindowAttributes VAR_3;
 int VAR_4, VAR_5;
 Window VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_1->display, VAR_2->wnd, &VAR_3);
 FUNC_1(VAR_1->display, VAR_2->wnd, VAR_3.root,
         -VAR_3.border_width, -VAR_3.border_width, &VAR_4, &VAR_5, &VAR_6);

 VAR_7 = FUNC_2(VAR_1, VAR_2->id, VAR_4, VAR_5, VAR_3.width, VAR_3.height, 0);

 VAR_2->outstanding_position = VAR_0;
 VAR_2->outpos_serial = VAR_7;

 VAR_2->outpos_xoffset = VAR_4;
 VAR_2->outpos_yoffset = VAR_5;
 VAR_2->outpos_width = VAR_3.width;
 VAR_2->outpos_height = VAR_3.height;
}
