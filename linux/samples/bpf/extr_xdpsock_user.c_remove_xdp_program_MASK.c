
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 __u32 VAR_4 = 0;

 if (FUNC_0(VAR_1, &VAR_4, VAR_2)) {
  FUNC_3("bpf_get_link_xdp_id failed\n");
  FUNC_2(VAR_0);
 }
 if (VAR_3 == VAR_4)
  FUNC_1(VAR_1, -1, VAR_2);
 else if (!VAR_4)
  FUNC_3("couldn't find a prog id on a given interface\n");
 else
  FUNC_3("program on interface changed, not removing\n");
}
