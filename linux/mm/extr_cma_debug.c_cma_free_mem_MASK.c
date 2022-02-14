
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma_mem {int n; int p; } ;
struct cma {scalar_t__ order_per_bit; } ;


 int FUNC_0 (struct cma*,struct cma_mem*) ;
 struct cma_mem* FUNC_1 (struct cma*) ;
 int FUNC_2 (struct cma*,int,int) ;
 int FUNC_3 (struct cma_mem*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct cma *VAR_0, int VAR_1)
{
 struct cma_mem *VAR_2 = ((void*)0);

 while (VAR_1) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 == ((void*)0))
   return 0;

  if (VAR_2->n <= VAR_1) {
   FUNC_2(VAR_0, VAR_2->p, VAR_2->n);
   VAR_1 -= VAR_2->n;
   FUNC_3(VAR_2);
  } else if (VAR_0->order_per_bit == 0) {
   FUNC_2(VAR_0, VAR_2->p, VAR_1);
   VAR_2->p += VAR_1;
   VAR_2->n -= VAR_1;
   VAR_1 = 0;
   FUNC_0(VAR_0, VAR_2);
  } else {
   FUNC_4("cma: cannot release partial block when order_per_bit != 0\n");
   FUNC_0(VAR_0, VAR_2);
   break;
  }
 }

 return 0;

}
