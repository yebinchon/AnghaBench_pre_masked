
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdb {int * map; int size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct cdb *VAR_0) {
 if (!VAR_0->map) {
  return;
 }



 FUNC_0 (VAR_0->map);

 VAR_0->map = ((void*)0);
}
