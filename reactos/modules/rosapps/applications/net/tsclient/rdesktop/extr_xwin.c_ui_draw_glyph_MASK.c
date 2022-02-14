
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gc; } ;
struct TYPE_5__ {TYPE_1__ xwin; int display; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;
typedef scalar_t__ HGLYPH ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int) ;

void
FUNC_6(RDPCLIENT * VAR_4, int VAR_5,
                  int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                 HGLYPH VAR_10, int VAR_11, int VAR_12,
       int VAR_13, int VAR_14)
{
 FUNC_2(VAR_14);
 FUNC_1(VAR_13);

 FUNC_3(VAR_4->display, VAR_4->xwin.gc,
        (VAR_5 == VAR_3) ? VAR_2 : VAR_0);
 FUNC_4(VAR_4->display, VAR_4->xwin.gc, (Pixmap) VAR_10);
 FUNC_5(VAR_4->display, VAR_4->xwin.gc, VAR_6, VAR_7);

 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_4->display, VAR_4->xwin.gc, VAR_1);
}
