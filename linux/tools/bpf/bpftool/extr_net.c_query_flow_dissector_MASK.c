
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_attach_info {int flow_dissector_id; } ;
typedef int __u32 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int*,int*,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct bpf_attach_info *VAR_4)
{
 __u32 VAR_5;
 __u32 VAR_6[1];
 __u32 VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3("/proc/self/ns/net", VAR_2);
 if (VAR_9 < 0) {
  FUNC_4("can't open /proc/self/ns/net: %s",
        FUNC_5(VAR_3));
  return -1;
 }
 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = FUNC_1(VAR_9, VAR_0, 0,
        &VAR_5, VAR_6, &VAR_7);
 FUNC_2(VAR_9);
 if (VAR_8) {
  if (VAR_3 == VAR_1) {



   VAR_3 = 0;
   return 0;
  }
  FUNC_4("can't query prog: %s", FUNC_5(VAR_3));
  return -1;
 }

 if (VAR_7 == 1)
  VAR_4->flow_dissector_id = VAR_6[0];

 return 0;
}
