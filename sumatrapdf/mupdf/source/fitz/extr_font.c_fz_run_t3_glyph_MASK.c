
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_matrix ;
struct TYPE_3__ {int t3matrix; int ** t3lists; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_display_list ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,int ,int ,int *) ;

void
FUNC_2(fz_context *VAR_1, fz_font *VAR_2, int VAR_3, fz_matrix VAR_4, fz_device *VAR_5)
{
 fz_display_list *VAR_6;
 fz_matrix VAR_7;

 VAR_6 = VAR_2->t3lists[VAR_3];
 if (!VAR_6)
  return;

 VAR_7 = FUNC_0(VAR_2->t3matrix, VAR_4);
 FUNC_1(VAR_1, VAR_6, VAR_5, VAR_7, VAR_0, ((void*)0));
}
