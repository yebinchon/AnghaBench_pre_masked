
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__*,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(int VAR_7)
{
 __u32 VAR_8 = 0;

 if (VAR_2 > -1) {
  if (FUNC_0(VAR_2, &VAR_8, VAR_6)) {
   FUNC_4("bpf_get_link_xdp_id failed\n");
   FUNC_2(VAR_0);
  }
  if (VAR_4 == VAR_8) {
   FUNC_3(VAR_5,
    "Interrupted: Removing XDP program on ifindex:%d device:%s\n",
    VAR_2, VAR_3);
   FUNC_1(VAR_2, -1, VAR_6);
  } else if (!VAR_8) {
   FUNC_4("couldn't find a prog id on a given iface\n");
  } else {
   FUNC_4("program on interface changed, not removing\n");
  }
 }
 FUNC_2(VAR_1);
}
