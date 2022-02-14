
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_mem {int dummy; } ;
struct TYPE_2__ {scalar_t__ device_handle; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct nfit_mem*) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct nfit_mem *VAR_2, unsigned int VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (FUNC_1(VAR_2)->device_handle == VAR_1[VAR_4])
   break;
 if (VAR_4 >= FUNC_0(VAR_1))
  return -VAR_0;
 return VAR_4;
}
