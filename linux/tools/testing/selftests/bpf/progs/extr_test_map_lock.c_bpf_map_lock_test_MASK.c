
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmap_elem {int* var; int lock; } ;
struct array_elem {int* var; int lock; } ;
struct __sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

int FUNC_4(struct __sk_buff *VAR_3)
{
 struct hmap_elem VAR_4 = {}, *VAR_5;
 int VAR_6 = FUNC_0();
 int VAR_7 = 0, VAR_8 = 1, VAR_9;
 struct array_elem *VAR_10;

 VAR_5 = FUNC_1(&VAR_2, &VAR_7);
 if (!VAR_5)
  goto err;

 FUNC_2(&VAR_5->lock);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_5->var[VAR_9] = VAR_6;
 FUNC_3(&VAR_5->lock);


 VAR_10 = FUNC_1(&VAR_1, &VAR_7);
 if (!VAR_10)
  goto err;
 FUNC_2(&VAR_10->lock);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_10->var[VAR_9] = VAR_6;
 FUNC_3(&VAR_10->lock);
 VAR_8 = 0;
err:
 return VAR_8;
}
