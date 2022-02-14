
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void xt_table_info ;
struct xt_table {size_t af; int list; void* private; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (struct xt_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_0 ;

void *FUNC_4(struct xt_table *VAR_1)
{
 struct xt_table_info *VAR_2;

 FUNC_2(&VAR_0[VAR_1->af].mutex);
 VAR_2 = VAR_1->private;
 FUNC_1(&VAR_1->list);
 FUNC_3(&VAR_0[VAR_1->af].mutex);
 FUNC_0(VAR_1);

 return VAR_2;
}
