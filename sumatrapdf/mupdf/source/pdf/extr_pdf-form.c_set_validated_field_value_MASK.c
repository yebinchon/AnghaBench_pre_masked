
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_6__ {int dirty; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *,char const*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,char const*) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2, const char *VAR_3, int VAR_4)
{
 if (!VAR_4)
 {
  if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
   return 0;
 }

 if (FUNC_0(VAR_0, VAR_1, VAR_2))
  VAR_1->dirty = 1;
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 return 1;
}
