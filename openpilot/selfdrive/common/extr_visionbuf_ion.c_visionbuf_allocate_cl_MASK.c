
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cl_mem ;
typedef int cl_device_id ;
typedef int cl_context ;
typedef int VisionBuf ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int ) ;

VisionBuf FUNC_2(size_t VAR_0, cl_device_id VAR_1, cl_context VAR_2, cl_mem *VAR_3) {
  VisionBuf VAR_4 = FUNC_0(VAR_0);
  *VAR_3 = FUNC_1(&VAR_4, VAR_1, VAR_2);
  return VAR_4;
}
