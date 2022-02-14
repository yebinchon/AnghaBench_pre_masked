
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int,scalar_t__*,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 __u32 VAR_4 = 0;

 if (VAR_0 > -1) {
  if (FUNC_0(VAR_0, &VAR_4, VAR_2)) {
   FUNC_3("bpf_get_link_xdp_id failed\n");
   FUNC_2(1);
  }
  if (VAR_1 == VAR_4)
   FUNC_1(VAR_0, -1, VAR_2);
  else if (!VAR_4)
   FUNC_3("couldn't find a prog id on a given iface\n");
  else
   FUNC_3("program on interface changed, not removing\n");
 }
 FUNC_2(0);
}
