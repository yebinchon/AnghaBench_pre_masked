
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int state; int mutex; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

enum wimax_st FUNC_2(struct wimax_dev *VAR_0)
{
 enum wimax_st VAR_1;
 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_0->state;
 FUNC_1(&VAR_0->mutex);
 return VAR_1;
}
