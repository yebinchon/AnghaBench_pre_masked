
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct address_space {int i_pages; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {scalar_t__ xa_index; } ;


 int FUNC_0 (TYPE_1__,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (void*) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_2 (TYPE_1__*) ;

pgoff_t FUNC_3(struct address_space *VAR_1,
        pgoff_t VAR_2, unsigned long VAR_3)
{
 FUNC_0(VAR_0, &VAR_1->i_pages, VAR_2);

 while (VAR_3--) {
  void *VAR_4 = FUNC_2(&VAR_0);
  if (!VAR_4 || FUNC_1(VAR_4))
   break;
  if (VAR_0.xa_index == 0)
   break;
 }

 return VAR_0.xa_index;
}
