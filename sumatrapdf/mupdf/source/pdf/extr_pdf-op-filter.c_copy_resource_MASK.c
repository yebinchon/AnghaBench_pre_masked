
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_3__ {int new_rdb; int old_rdb; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;


 int * FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *,int *,char const*) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (int *,int *,char const*,int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, pdf_filter_processor *VAR_1, pdf_obj *VAR_2, const char *VAR_3)
{
 pdf_obj *VAR_4, *VAR_5;

 if (!VAR_3 || VAR_3[0] == 0)
  return;

 VAR_4 = FUNC_0(VAR_0, VAR_1->old_rdb, VAR_2);
 VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_3);
 if (VAR_5)
 {
  VAR_4 = FUNC_0(VAR_0, VAR_1->new_rdb, VAR_2);
  if (!VAR_4)
  {
   VAR_4 = FUNC_5(VAR_0, FUNC_4(VAR_0, VAR_1->new_rdb), 1);
   FUNC_2(VAR_0, VAR_1->new_rdb, VAR_2, VAR_4);
  }
  FUNC_3(VAR_0, VAR_4, VAR_3, VAR_5);
 }
}
