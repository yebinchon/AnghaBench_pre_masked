
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {int __flags; scalar_t__ __offset; int page; scalar_t__ addr; int __remaining; int length; int consumed; int piter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sg_mapping_iter*) ;
 int FUNC_3 (struct sg_mapping_iter*) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct sg_mapping_iter *VAR_1)
{
 FUNC_3(VAR_1);





 if (!FUNC_2(VAR_1))
  return 0;

 VAR_1->page = FUNC_4(&VAR_1->piter);
 VAR_1->consumed = VAR_1->length = VAR_1->__remaining;

 if (VAR_1->__flags & VAR_0)
  VAR_1->addr = FUNC_1(VAR_1->page) + VAR_1->__offset;
 else
  VAR_1->addr = FUNC_0(VAR_1->page) + VAR_1->__offset;

 return 1;
}
