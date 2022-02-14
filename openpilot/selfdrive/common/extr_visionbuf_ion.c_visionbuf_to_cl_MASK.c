
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int host_cache_policy; int allocation_type; } ;
struct TYPE_7__ {scalar_t__ ion_hostptr; int ion_filedesc; TYPE_1__ ext_host_ptr; int member_0; } ;
typedef TYPE_2__ cl_mem_ion_host_ptr ;
typedef int cl_mem ;
typedef int cl_device_id ;
typedef int cl_context ;
struct TYPE_8__ {int len; scalar_t__ addr; int fd; } ;
typedef TYPE_3__ VisionBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 uintptr_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,TYPE_2__*,int*) ;

cl_mem FUNC_2(const VisionBuf* VAR_5, cl_device_id VAR_6, cl_context VAR_7) {
  int VAR_8 = 0;

  FUNC_0(((uintptr_t)VAR_5->addr % VAR_4) == 0);

  cl_mem_ion_host_ptr VAR_9 = {0};
  VAR_9.ext_host_ptr.allocation_type = VAR_2;
  VAR_9.ext_host_ptr.host_cache_policy = VAR_1;
  VAR_9.ion_filedesc = VAR_5->fd;
  VAR_9.ion_hostptr = VAR_5->addr;

  cl_mem VAR_10 = FUNC_1(VAR_7,
                              VAR_3 | VAR_0,
                              VAR_5->len, &VAR_9, &VAR_8);
  FUNC_0(VAR_8 == 0);

  return VAR_10;
}
