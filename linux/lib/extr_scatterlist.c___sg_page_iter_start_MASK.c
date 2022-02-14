
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_page_iter {unsigned int __nents; unsigned long sg_pgoffset; struct scatterlist* sg; scalar_t__ __pg_advance; } ;
struct scatterlist {int dummy; } ;



void FUNC_0(struct sg_page_iter *VAR_0,
     struct scatterlist *VAR_1, unsigned int VAR_2,
     unsigned long VAR_3)
{
 VAR_0->__pg_advance = 0;
 VAR_0->__nents = VAR_2;

 VAR_0->sg = VAR_1;
 VAR_0->sg_pgoffset = VAR_3;
}
