
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test_resource {int dummy; } ;
typedef int phys_addr_t ;
typedef int pfn_t ;


 unsigned long VAR_0 ;
 struct nfit_test_resource* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

pfn_t FUNC_2(phys_addr_t VAR_1, unsigned long VAR_2)
{
 struct nfit_test_resource *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3)
  VAR_2 &= ~VAR_0;
        return FUNC_1(VAR_1, VAR_2);
}
