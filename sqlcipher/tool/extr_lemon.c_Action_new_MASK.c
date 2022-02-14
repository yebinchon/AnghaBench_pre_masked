
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct action {struct action* next; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct action *FUNC_3(void){
  static struct action *VAR_1 = 0;
  struct action *VAR_2;

  if( VAR_1==0 ){
    int VAR_3;
    int VAR_4 = 100;
    VAR_1 = (struct action *)FUNC_0(VAR_4, sizeof(struct action));
    if( VAR_1==0 ){
      FUNC_2(VAR_0,"Unable to allocate memory for a new parser action.");
      FUNC_1(1);
    }
    for(VAR_3=0; VAR_3<VAR_4-1; VAR_3++) VAR_1[VAR_3].next = &VAR_1[VAR_3+1];
    VAR_1[VAR_4-1].next = 0;
  }
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  return VAR_2;
}
