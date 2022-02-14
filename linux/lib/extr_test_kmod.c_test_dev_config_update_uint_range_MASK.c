
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {int config_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kmod_test_device *VAR_1,
          const char *VAR_2, size_t VAR_3,
          unsigned int *VAR_4,
          unsigned int VAR_5,
          unsigned int VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_0(VAR_2, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 < VAR_5 || VAR_8 > VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_1->config_mutex);
 *VAR_4 = VAR_8;
 FUNC_2(&VAR_1->config_mutex);


 return VAR_3;
}
