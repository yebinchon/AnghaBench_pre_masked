
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(int VAR_6)
{
 __u32 VAR_7 = 0;

 if (FUNC_0(VAR_1, &VAR_7, VAR_5)) {
  FUNC_3("bpf_get_link_xdp_id failed\n");
  FUNC_2(1);
 }
 if (VAR_4 == VAR_7)
  FUNC_1(VAR_1, -1, VAR_5);
 else if (!VAR_7)
  FUNC_3("couldn't find a prog id on iface IN\n");
 else
  FUNC_3("program on iface IN changed, not removing\n");

 if (VAR_3) {
  VAR_7 = 0;
  if (FUNC_0(VAR_2, &VAR_7,
     VAR_5)) {
   FUNC_3("bpf_get_link_xdp_id failed\n");
   FUNC_2(1);
  }
  if (VAR_0 == VAR_7)
   FUNC_1(VAR_2, -1, VAR_5);
  else if (!VAR_7)
   FUNC_3("couldn't find a prog id on iface OUT\n");
  else
   FUNC_3("program on iface OUT changed, not removing\n");
 }
 FUNC_2(0);
}
