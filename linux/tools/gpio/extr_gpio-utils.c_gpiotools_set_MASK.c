
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiohandle_data {unsigned int* values; } ;


 int FUNC_0 (char const*,unsigned int*,int,struct gpiohandle_data*) ;

int FUNC_1(const char *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct gpiohandle_data VAR_3;
 unsigned int VAR_4[] = {VAR_1};

 VAR_3.values[0] = VAR_2;
 return FUNC_0(VAR_0, VAR_4, 1, &VAR_3);
}
