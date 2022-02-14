
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chapter; int page; } ;
typedef TYPE_1__ fz_location ;
typedef int fz_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(fz_context *VAR_0, fz_document *VAR_1, fz_location VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
 {
  if (VAR_3 == VAR_2.chapter)
   return VAR_5 + VAR_2.page;
  VAR_5 += FUNC_0(VAR_0, VAR_1, VAR_3);
 }
 return -1;
}
