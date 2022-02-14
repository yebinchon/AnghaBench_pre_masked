
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct of_device_id* FUNC_0 (int ,struct device*) ;

__attribute__((used)) static inline int FUNC_1(struct device *VAR_2)
{
 const struct of_device_id *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3)
  return (uintptr_t)VAR_3->data;
 else
  return -VAR_0;
}
