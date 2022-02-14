
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* page; int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_12__ {int y1; int x0; } ;
typedef TYPE_2__ fz_rect ;
struct TYPE_13__ {int y; int x; } ;
typedef TYPE_3__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_14__ {int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 TYPE_3__ FUNC_3 (int ,int ,int ) ;
 TYPE_2__ FUNC_4 (TYPE_2__,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 TYPE_2__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,TYPE_4__*,int *,int *) ;
 int FUNC_10 (int *,int ) ;

fz_rect
FUNC_11(fz_context *VAR_4, pdf_annot *VAR_5)
{
 fz_matrix VAR_6;
 fz_rect VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_4, VAR_5->obj, FUNC_0(VAR_2));
 FUNC_9(VAR_4, VAR_5->page, ((void*)0), &VAR_6);

 VAR_8 = FUNC_7(VAR_4, VAR_5->obj, FUNC_0(VAR_0));
 if (VAR_8 & VAR_1)
 {
  int VAR_9 = FUNC_10(VAR_4, FUNC_6(VAR_4, VAR_5->page->obj, FUNC_0(VAR_3)));
  fz_point VAR_10 = FUNC_3(VAR_7.x0, VAR_7.y1, VAR_6);
  VAR_6 = FUNC_1(VAR_6, FUNC_5(-VAR_10.x, -VAR_10.y));
  VAR_6 = FUNC_1(VAR_6, FUNC_2(-VAR_9));
  VAR_6 = FUNC_1(VAR_6, FUNC_5(VAR_10.x, VAR_10.y));
 }

 return FUNC_4(VAR_7, VAR_6);
}
