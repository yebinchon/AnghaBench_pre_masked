
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct dg* model_data; } ;
struct dg {int cs4245_shadow; } ;
typedef enum cs4245_shadow_operation { ____Placeholder_cs4245_shadow_operation } cs4245_shadow_operation ;


 unsigned char FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct oxygen*,unsigned char) ;
 int FUNC_2 (struct oxygen*,unsigned char) ;

int FUNC_3(struct oxygen *VAR_1, enum cs4245_shadow_operation VAR_2)
{
 struct dg *VAR_3 = VAR_1->model_data;
 unsigned char VAR_4;
 int VAR_5;

 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_3->cs4245_shadow); VAR_4++) {
  VAR_5 = (VAR_2 == VAR_0 ?
   FUNC_1(VAR_1, VAR_4) :
   FUNC_2(VAR_1, VAR_4));
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
