
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t,unsigned long*,int ) ;
 int FUNC_2 () ;

int FUNC_3(phys_addr_t VAR_1, size_t VAR_2,
        void **VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(FUNC_2());

 VAR_5 = FUNC_1(VAR_1, VAR_2,
        &VAR_4, VAR_0);
 if (VAR_5) {
  *VAR_3 = ((void*)0);
  return VAR_5;
 }

 *VAR_3 = (void *)VAR_4;
 return 0;
}
