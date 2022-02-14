
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int thandle_t ;
struct TYPE_2__ {int fd; int h; } ;
typedef TYPE_1__ fd_as_handle_union_t ;
typedef scalar_t__ _TIFF_off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static uint64
FUNC_1(thandle_t VAR_2, uint64 VAR_3, int VAR_4)
{
 fd_as_handle_union_t VAR_5;
 _TIFF_off_t VAR_6 = (_TIFF_off_t) VAR_3;
 if ((uint64) VAR_6 != VAR_3)
 {
  VAR_1=VAR_0;
  return (uint64) -1;
 }
 VAR_5.h = VAR_2;
 return((uint64)FUNC_0(VAR_5.fd,VAR_6,VAR_4));
}
