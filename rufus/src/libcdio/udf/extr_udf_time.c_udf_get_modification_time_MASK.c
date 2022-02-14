
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int modification_time; } ;
struct TYPE_5__ {TYPE_1__ fe; } ;
typedef TYPE_2__ udf_dirent_t ;
typedef int time_t ;


 int FUNC_0 (int *,long*,int ) ;

time_t
FUNC_1(const udf_dirent_t *VAR_0)
{
  if (VAR_0) {
    time_t VAR_1;
    long int VAR_2;
    FUNC_0(&VAR_1, &VAR_2, VAR_0->fe.modification_time);
    return VAR_1;
  }
  return 0;
}
