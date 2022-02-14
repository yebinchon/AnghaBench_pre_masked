
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {int config_mutex; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char const*,int,long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kmod_test_device *VAR_3,
          const char *VAR_4, size_t VAR_5,
          int *VAR_6)
{
 int VAR_7;
 long VAR_8;

 VAR_7 = FUNC_0(VAR_4, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 < VAR_2 || VAR_8 > VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_3->config_mutex);
 *VAR_6 = VAR_8;
 FUNC_2(&VAR_3->config_mutex);

 return VAR_5;
}
