
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plink {struct plink* next; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 struct plink* VAR_0 ;
 int VAR_1 ;

struct plink *FUNC_3(void){
  struct plink *VAR_2;

  if( VAR_0==0 ){
    int VAR_3;
    int VAR_4 = 100;
    VAR_0 = (struct plink *)FUNC_0( VAR_4, sizeof(struct plink) );
    if( VAR_0==0 ){
      FUNC_2(VAR_1,
      "Unable to allocate memory for a new follow-set propagation link.\n");
      FUNC_1(1);
    }
    for(VAR_3=0; VAR_3<VAR_4-1; VAR_3++) VAR_0[VAR_3].next = &VAR_0[VAR_3+1];
    VAR_0[VAR_4-1].next = 0;
  }
  VAR_2 = VAR_0;
  VAR_0 = VAR_0->next;
  return VAR_2;
}
