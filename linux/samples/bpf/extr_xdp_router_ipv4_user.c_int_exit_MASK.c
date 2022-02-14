
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int,scalar_t__*,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_3 (char*,int) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 __u32 VAR_5 = 0;
 int VAR_6 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_0(VAR_1[VAR_6], &VAR_5, VAR_0)) {
   FUNC_3("bpf_get_link_xdp_id on iface %d failed\n",
          VAR_1[VAR_6]);
   FUNC_2(1);
  }
  if (VAR_2[VAR_6] == VAR_5)
   FUNC_1(VAR_1[VAR_6], -1, VAR_0);
  else if (!VAR_5)
   FUNC_3("couldn't find a prog id on iface %d\n",
          VAR_1[VAR_6]);
  else
   FUNC_3("program on iface %d changed, not removing\n",
          VAR_1[VAR_6]);
  VAR_5 = 0;
 }
 FUNC_2(0);
}
