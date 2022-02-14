
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_info_iterator {scalar_t__ offset; int * pages; int * addr; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (char*,int ,int *,scalar_t__,unsigned long,void*,unsigned long) ;

void FUNC_5(struct rds_info_iterator *VAR_1, void *VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4;

 while (VAR_3) {
  if (!VAR_1->addr)
   VAR_1->addr = FUNC_0(*VAR_1->pages);

  VAR_4 = FUNC_3(VAR_3, VAR_0 - VAR_1->offset);

  FUNC_4("page %p addr %p offset %lu this %lu data %p "
     "bytes %lu\n", *VAR_1->pages, VAR_1->addr,
     VAR_1->offset, VAR_4, VAR_2, VAR_3);

  FUNC_2(VAR_1->addr + VAR_1->offset, VAR_2, VAR_4);

  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  VAR_1->offset += VAR_4;

  if (VAR_1->offset == VAR_0) {
   FUNC_1(VAR_1->addr);
   VAR_1->addr = ((void*)0);
   VAR_1->offset = 0;
   VAR_1->pages++;
  }
 }
}
