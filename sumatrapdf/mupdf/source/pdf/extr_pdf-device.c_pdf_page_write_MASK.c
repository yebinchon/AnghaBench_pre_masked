
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_6__ {int y1; int x0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_7__ {int member_0; int member_3; int member_5; int member_4; int member_2; int member_1; } ;
typedef TYPE_2__ fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_buffer ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int *,TYPE_2__,TYPE_1__,int *,int *) ;

fz_device *FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, fz_rect VAR_2, pdf_obj **VAR_3, fz_buffer **VAR_4)
{
 fz_matrix VAR_5 = { 1, 0, 0, -1, -VAR_2.x0, VAR_2.y1 };
 *VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 *VAR_4 = FUNC_0(VAR_0, 0);
 return FUNC_2(VAR_0, VAR_1, VAR_5, VAR_2, *VAR_3, *VAR_4);
}
