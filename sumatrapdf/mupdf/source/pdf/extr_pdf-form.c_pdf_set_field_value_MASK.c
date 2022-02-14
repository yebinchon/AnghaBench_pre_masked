
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_6__ {int recalculate; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;







 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *,char const*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,char const*,int) ;
 int FUNC_3 (int *,TYPE_1__*,int *,char const*) ;

int FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 switch (FUNC_0(VAR_0, VAR_2))
 {
 case 128:
 case 131:
 case 130:
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 132:
 case 129:
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;

 default:
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_5 = 1;
  break;
 }

 if (!VAR_4)
  VAR_1->recalculate = 1;

 return VAR_5;
}
