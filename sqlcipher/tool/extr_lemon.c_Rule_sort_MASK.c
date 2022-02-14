
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct rule {struct rule* next; } ;


 struct rule* FUNC_0 (struct rule*,struct rule*) ;
 int FUNC_1 (struct rule**,int ,int) ;

__attribute__((used)) static struct rule *FUNC_2(struct rule *VAR_0){
  int VAR_1;
  struct rule *VAR_2;
  struct rule *VAR_3[32];
  FUNC_1(VAR_3, 0, sizeof(VAR_3));
  while( VAR_0 ){
    VAR_2 = VAR_0->next;
    VAR_0->next = 0;
    for(VAR_1=0; VAR_1<sizeof(VAR_3)/sizeof(VAR_3[0]) && VAR_3[VAR_1]; VAR_1++){
      VAR_0 = FUNC_0(VAR_3[VAR_1], VAR_0);
      VAR_3[VAR_1] = 0;
    }
    VAR_3[VAR_1] = VAR_0;
    VAR_0 = VAR_2;
  }
  VAR_0 = 0;
  for(VAR_1=0; VAR_1<sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_1++){
    VAR_0 = FUNC_0(VAR_3[VAR_1], VAR_0);
  }
  return VAR_0;
}
