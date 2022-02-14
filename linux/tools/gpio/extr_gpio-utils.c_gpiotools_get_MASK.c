
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiohandle_data {int* values; } ;


 int FUNC_0 (char const*,unsigned int*,int,struct gpiohandle_data*) ;

int FUNC_1(const char *VAR_0, unsigned int VAR_1)
{
 struct gpiohandle_data VAR_2;
 unsigned int VAR_3[] = {VAR_1};

 FUNC_0(VAR_0, VAR_3, 1, &VAR_2);
 return VAR_2.values[0];
}
