
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int napi_hash_node; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

bool FUNC_4(struct napi_struct *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_1(&VAR_1);

 if (FUNC_3(VAR_0, &VAR_2->state)) {
  VAR_3 = 1;
  FUNC_0(&VAR_2->napi_hash_node);
 }
 FUNC_2(&VAR_1);
 return VAR_3;
}
