
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cl_mem ;
typedef int cl_device_id ;
typedef int cl_context ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ VisionBuf ;


 TYPE_1__ FUNC_0 (int ,int ,int ,int *) ;

cl_mem FUNC_1(const VisionBuf* VAR_0, cl_device_id VAR_1, cl_context VAR_2) {

  VisionBuf *VAR_3 = (VisionBuf*)VAR_0;
  cl_mem VAR_4;
  *VAR_3 = FUNC_0(VAR_0->len, VAR_1, VAR_2, &VAR_4);
  return VAR_4;
}
