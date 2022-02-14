
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int link_count; } ;
struct TYPE_5__ {TYPE_1__ fe; } ;
typedef TYPE_2__ udf_dirent_t ;


 int FUNC_0 (int ) ;

uint16_t FUNC_1(const udf_dirent_t *VAR_0)
{
  if (VAR_0) {
    return FUNC_0(VAR_0->fe.link_count);
  }
  return 0;
}
