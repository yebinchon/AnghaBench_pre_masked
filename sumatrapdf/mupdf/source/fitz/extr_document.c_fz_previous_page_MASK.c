
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int page; scalar_t__ chapter; } ;
typedef TYPE_1__ fz_location ;
typedef int fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 TYPE_1__ FUNC_1 (scalar_t__,int) ;

fz_location FUNC_2(fz_context *VAR_0, fz_document *VAR_1, fz_location VAR_2)
{
 if (VAR_2.page == 0)
 {
  if (VAR_2.chapter > 0)
  {
   int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2.chapter - 1);
   return FUNC_1(VAR_2.chapter - 1, VAR_3 - 1);
  }
 }
 else
 {
  return FUNC_1(VAR_2.chapter, VAR_2.page - 1);
 }
 return VAR_2;
}
