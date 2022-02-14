
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ,char*) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(__u32 VAR_1, __u64 VAR_2, __u64 VAR_3)
{
 char VAR_4[VAR_0];

 if (!VAR_1)
  return;

 FUNC_1("  offloaded_to ");
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4))
  FUNC_1("%s", VAR_4);
 else
  FUNC_1("ifindex %u ns_dev %llu ns_ino %llu",
         VAR_1, VAR_2, VAR_3);
}
