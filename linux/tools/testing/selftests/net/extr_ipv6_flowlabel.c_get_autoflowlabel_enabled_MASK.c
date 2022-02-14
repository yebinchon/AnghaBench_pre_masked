
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static bool FUNC_4(void)
{
 int VAR_2, VAR_3;
 char VAR_4;

 VAR_2 = FUNC_2("/proc/sys/net/ipv6/auto_flowlabels", VAR_0);
 if (VAR_2 == -1)
  FUNC_1(1, VAR_1, "open sysctl");

 VAR_3 = FUNC_3(VAR_2, &VAR_4, 1);
 if (VAR_3 == -1)
  FUNC_1(1, VAR_1, "read sysctl");
 if (VAR_3 == 0)
  FUNC_1(1, 0, "read sysctl: 0");

 if (FUNC_0(VAR_2))
  FUNC_1(1, VAR_1, "close sysctl");

 return VAR_4 == '1';
}
