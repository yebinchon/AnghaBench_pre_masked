
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {int config_mutex; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kmod_test_device *VAR_1,
     char *VAR_2,
     int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_1->config_mutex);
 VAR_4 = VAR_3;
 FUNC_1(&VAR_1->config_mutex);

 return FUNC_2(VAR_2, VAR_0, "%d\n", VAR_4);
}
