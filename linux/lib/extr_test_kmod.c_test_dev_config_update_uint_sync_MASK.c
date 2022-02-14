
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {int config_mutex; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kmod_test_device *VAR_2,
         const char *VAR_3, size_t VAR_4,
         unsigned int *VAR_5,
         int (*VAR_6)(struct kmod_test_device *VAR_7))
{
 int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 VAR_8 = FUNC_1(VAR_3, 10, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_9 > VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_2->config_mutex);

 VAR_10 = *VAR_5;
 *(unsigned int *)VAR_5 = VAR_9;

 VAR_8 = VAR_6(VAR_2);
 if (VAR_8) {
  *(unsigned int *)VAR_5 = VAR_10;

  VAR_8 = VAR_6(VAR_2);
  FUNC_0(VAR_8);

  FUNC_3(&VAR_2->config_mutex);
  return -VAR_0;
 }

 FUNC_3(&VAR_2->config_mutex);

 return VAR_4;
}
