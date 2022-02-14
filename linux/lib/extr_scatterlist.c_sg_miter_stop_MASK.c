
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {scalar_t__ consumed; scalar_t__ length; int __flags; int * addr; int * page; int __remaining; int __offset; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

void FUNC_7(struct sg_mapping_iter *VAR_2)
{
 FUNC_1(VAR_2->consumed > VAR_2->length);


 if (VAR_2->addr) {
  VAR_2->__offset += VAR_2->consumed;
  VAR_2->__remaining -= VAR_2->consumed;

  if ((VAR_2->__flags & VAR_1) &&
      !FUNC_0(VAR_2->page))
   FUNC_3(VAR_2->page);

  if (VAR_2->__flags & VAR_0) {
   FUNC_2(FUNC_6());
   FUNC_5(VAR_2->addr);
  } else
   FUNC_4(VAR_2->page);

  VAR_2->page = ((void*)0);
  VAR_2->addr = ((void*)0);
  VAR_2->length = 0;
  VAR_2->consumed = 0;
 }
}
