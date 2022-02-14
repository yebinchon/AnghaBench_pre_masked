
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 int FUNC_0 (int,scalar_t__*,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1, const char *VAR_2)
{
 __u32 VAR_3 = 0;
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, 0);
 if (VAR_4) {
  FUNC_2("bpf_get_link_xdp_id failed\n");
  return VAR_4;
 }
 if (VAR_0 == VAR_3) {
  VAR_4 = FUNC_1(VAR_1, -1, 0);
  if (VAR_4 < 0)
   FUNC_2("ERROR: failed to detach prog from %s\n", VAR_2);
 } else if (!VAR_3) {
  FUNC_2("couldn't find a prog id on a %s\n", VAR_2);
 } else {
  FUNC_2("program on interface changed, not removing\n");
 }

 return VAR_4;
}
