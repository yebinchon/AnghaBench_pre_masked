
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct address_space {int i_pages; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {scalar_t__ xa_index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (void*) ;
 TYPE_1__ VAR_1 ;
 void* FUNC_2 (TYPE_1__*) ;

pgoff_t FUNC_3(struct address_space *VAR_2,
        pgoff_t VAR_3, unsigned long VAR_4)
{
 FUNC_0(VAR_1, &VAR_2->i_pages, VAR_3);

 while (VAR_4--) {
  void *VAR_5 = FUNC_2(&VAR_1);
  if (!VAR_5 || FUNC_1(VAR_5))
   break;
  if (VAR_1.xa_index == VAR_0)
   break;
 }

 return VAR_1.xa_index;
}
