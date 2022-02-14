
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,int ) ;

void FUNC_6(__u32 VAR_2, __u64 VAR_3, __u64 VAR_4)
{
 char VAR_5[VAR_0];

 if (!VAR_2)
  return;

 FUNC_2(VAR_1, "dev");
 FUNC_3(VAR_1);
 FUNC_5(VAR_1, "ifindex", VAR_2);
 FUNC_5(VAR_1, "ns_dev", VAR_3);
 FUNC_5(VAR_1, "ns_inode", VAR_4);
 if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5))
  FUNC_4(VAR_1, "ifname", VAR_5);
 FUNC_1(VAR_1);
}
