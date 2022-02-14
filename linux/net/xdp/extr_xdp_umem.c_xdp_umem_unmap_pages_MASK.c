
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {unsigned int npgs; TYPE_1__* pages; int * pgs; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xdp_umem *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->npgs; VAR_1++)
  if (FUNC_0(VAR_0->pgs[VAR_1]))
   FUNC_1(VAR_0->pages[VAR_1].addr);
}
