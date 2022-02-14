
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int dummy; } ;
struct intel_sst_drv {struct stream_info* streams; } ;


 scalar_t__ FUNC_0 (struct intel_sst_drv*,int) ;

struct stream_info *FUNC_1(
  struct intel_sst_drv *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return ((void*)0);
 return &VAR_0->streams[VAR_1];
}
