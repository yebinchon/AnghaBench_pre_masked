
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ private_data; } ;
typedef TYPE_1__ DSL_DRV_file_t ;
typedef scalar_t__ DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 scalar_t__ FUNC_0 (int *,char const*,size_t,long*,long*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_1 (DSL_DRV_file_t * VAR_2, const char *VAR_3, size_t VAR_4, loff_t * VAR_5)
{
 DSL_DEV_MeiError_t VAR_6 = VAR_0;
 long VAR_7 = 0;
 DSL_DEV_Device_t *VAR_8 = (DSL_DEV_Device_t *) VAR_2->private_data;

 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_6 =
  FUNC_0 (VAR_8, VAR_3, VAR_4, (long *) VAR_5, &VAR_7);

 if (VAR_6 == VAR_0)
  return -VAR_1;
 return (ssize_t) VAR_7;
}
