
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; scalar_t__ destructor; } ;
struct lemon {scalar_t__ tokendest; scalar_t__ vardest; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct symbol *VAR_1, struct lemon *VAR_2)
{
  int VAR_3;
  if( VAR_1->type==VAR_0 ){
    VAR_3 = VAR_2->tokendest!=0;
  }else{
    VAR_3 = VAR_2->vardest!=0 || VAR_1->destructor!=0;
  }
  return VAR_3;
}
