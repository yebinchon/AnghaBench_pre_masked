
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiohandle_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int,char*) ;
 int FUNC_1 (int const,int ,struct gpiohandle_data*) ;
 int VAR_2 ;
 char* FUNC_2 (int) ;

int FUNC_3(const int VAR_3, struct gpiohandle_data *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_4);
 if (VAR_5 == -1) {
  VAR_5 = -VAR_1;
  FUNC_0(VAR_2, "Failed to issue %s (%d), %s\n",
   "GPIOHANDLE_GET_LINE_VALUES_IOCTL", VAR_5,
   FUNC_2(VAR_1));
 }

 return VAR_5;
}
