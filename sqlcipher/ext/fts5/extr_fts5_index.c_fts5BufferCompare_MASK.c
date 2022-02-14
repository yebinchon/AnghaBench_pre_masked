
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int p; } ;
typedef TYPE_1__ Fts5Buffer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(Fts5Buffer *VAR_0, Fts5Buffer *VAR_1){
  int VAR_2 = FUNC_0(VAR_0->n, VAR_1->n);
  int VAR_3 = FUNC_1(VAR_0->p, VAR_1->p, VAR_2);
  return (VAR_3==0 ? (VAR_0->n - VAR_1->n) : VAR_3);
}
