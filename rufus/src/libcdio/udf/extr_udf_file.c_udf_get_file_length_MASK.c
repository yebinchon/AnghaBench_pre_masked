
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long uint64_t ;
struct TYPE_4__ {int info_len; } ;
struct TYPE_5__ {TYPE_1__ fe; } ;
typedef TYPE_2__ udf_dirent_t ;


 long FUNC_0 (int ) ;

uint64_t FUNC_1(const udf_dirent_t *VAR_0)
{
  if (VAR_0) {
    return FUNC_0(VAR_0->fe.info_len);
  }
  return 2147483647L;
}
