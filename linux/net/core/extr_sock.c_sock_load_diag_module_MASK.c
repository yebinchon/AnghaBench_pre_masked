
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int,...) ;
 int FUNC_2 (int) ;

int FUNC_3(int VAR_6, int VAR_7)
{
 if (!VAR_7) {
  if (!FUNC_2(VAR_6))
   return -VAR_1;

  return FUNC_1("net-pf-%d-proto-%d-type-%d", VAR_4,
          VAR_3, VAR_6);
 }
 return FUNC_1("net-pf-%d-proto-%d-type-%d-%d", VAR_4,
         VAR_3, VAR_6, VAR_7);
}
