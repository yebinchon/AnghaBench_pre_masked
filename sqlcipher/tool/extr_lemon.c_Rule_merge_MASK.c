
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {scalar_t__ iRule; struct rule* next; } ;



__attribute__((used)) static struct rule *FUNC_0(struct rule *VAR_0, struct rule *VAR_1){
  struct rule *VAR_2 = 0;
  struct rule **VAR_3 = &VAR_2;
  while( VAR_0 && VAR_1 ){
    if( VAR_0->iRule<VAR_1->iRule ){
      *VAR_3 = VAR_0;
      VAR_3 = &VAR_0->next;
      VAR_0 = VAR_0->next;
    }else{
      *VAR_3 = VAR_1;
      VAR_3 = &VAR_1->next;
      VAR_1 = VAR_1->next;
    }
  }
  if( VAR_0 ){
    *VAR_3 = VAR_0;
  }else{
    *VAR_3 = VAR_1;
  }
  return VAR_2;
}
