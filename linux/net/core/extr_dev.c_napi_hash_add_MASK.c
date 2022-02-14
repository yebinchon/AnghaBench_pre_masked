
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {size_t napi_id; int napi_hash_node; int state; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct napi_struct *VAR_6)
{
 if (FUNC_6(VAR_2, &VAR_6->state) ||
     FUNC_5(VAR_1, &VAR_6->state))
  return;

 FUNC_3(&VAR_5);


 do {
  if (FUNC_7(++VAR_3 < VAR_0))
   VAR_3 = VAR_0;
 } while (FUNC_2(VAR_3));
 VAR_6->napi_id = VAR_3;

 FUNC_1(&VAR_6->napi_hash_node,
      &VAR_4[VAR_6->napi_id % FUNC_0(VAR_4)]);

 FUNC_4(&VAR_5);
}
