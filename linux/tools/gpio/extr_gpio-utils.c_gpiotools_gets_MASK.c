
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiohandle_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct gpiohandle_data*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,unsigned int*,unsigned int,int ,struct gpiohandle_data*,int ) ;

int FUNC_3(const char *VAR_2, unsigned int *VAR_3,
     unsigned int VAR_4, struct gpiohandle_data *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4,
        VAR_1, VAR_5,
        VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_7;
 VAR_7 = FUNC_0(VAR_6, VAR_5);
 VAR_8 = FUNC_1(VAR_6);
 return VAR_7 < 0 ? VAR_7 : VAR_8;
}
