
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ annotations_list; int ctx; scalar_t__ page_list; } ;
typedef TYPE_1__ pdfapp_t ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_cookie ;


 int FUNC_0 (int ,scalar_t__,int *,int const,int ,int *) ;

__attribute__((used)) static void FUNC_1(pdfapp_t *VAR_0, fz_device *VAR_1, const fz_matrix VAR_2, fz_rect VAR_3, fz_cookie *VAR_4)
{
 if (VAR_0->page_list)
  FUNC_0(VAR_0->ctx, VAR_0->page_list, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_0->annotations_list)
  FUNC_0(VAR_0->ctx, VAR_0->annotations_list, VAR_1, VAR_2, VAR_3, VAR_4);
}
