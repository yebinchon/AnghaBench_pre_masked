
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spl_filesystem_object ;
struct TYPE_4__ {int intern; void* object; } ;
typedef TYPE_1__ spl_filesystem_iterator ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline spl_filesystem_iterator* FUNC_2(spl_filesystem_object *VAR_0)
{
 spl_filesystem_iterator *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(spl_filesystem_iterator));
 VAR_1->object = (void *)VAR_0;
 FUNC_1(&VAR_1->intern);
 return VAR_1;
}
