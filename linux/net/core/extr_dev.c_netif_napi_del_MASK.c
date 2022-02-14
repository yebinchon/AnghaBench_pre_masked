
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {scalar_t__ gro_bitmask; int dev_list; } ;


 int FUNC_0 (struct napi_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct napi_struct*) ;
 scalar_t__ FUNC_4 (struct napi_struct*) ;
 int FUNC_5 () ;

void FUNC_6(struct napi_struct *VAR_0)
{
 FUNC_2();
 if (FUNC_4(VAR_0))
  FUNC_5();
 FUNC_1(&VAR_0->dev_list);
 FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 VAR_0->gro_bitmask = 0;
}
