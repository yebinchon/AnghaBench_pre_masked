
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int thandle_t ;
struct TYPE_4__ {int fd; int h; } ;
typedef TYPE_1__ fd_as_handle_union_t ;
struct TYPE_5__ {scalar_t__ st_size; } ;
typedef TYPE_2__ _TIFF_stat_s ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static uint64
FUNC_1(thandle_t VAR_0)
{
 _TIFF_stat_s VAR_1;
 fd_as_handle_union_t VAR_2;
 VAR_2.h = VAR_0;
 if (FUNC_0(VAR_2.fd,&VAR_1)<0)
  return(0);
 else
  return((uint64)VAR_1.st_size);
}
