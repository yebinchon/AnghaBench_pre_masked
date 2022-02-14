
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 scalar_t__ FUNC_6 (int,char*,int) ;

void FUNC_7(void)
{
 int VAR_2 = FUNC_3("/proc/sys/net/ipv4/tcp_fastopen", 0);
 int VAR_3 = 3;
 int VAR_4, VAR_5;
 char VAR_6[16];

 if (VAR_2 < 0)
  FUNC_2(1, VAR_1, "Unable to open tcp_fastopen sysctl");
 if (FUNC_4(VAR_2, VAR_6, sizeof(VAR_6)) <= 0)
  FUNC_2(1, VAR_1, "Unable to read tcp_fastopen sysctl");
 VAR_4 = FUNC_0(VAR_6);
 FUNC_1(VAR_2);

 if ((VAR_4 & VAR_3) != VAR_3) {
  VAR_2 = FUNC_3("/proc/sys/net/ipv4/tcp_fastopen", VAR_0);
  if (VAR_2 < 0)
   FUNC_2(1, VAR_1,
         "Unable to open tcp_fastopen sysctl for writing");
  VAR_4 |= VAR_3;
  VAR_5 = FUNC_5(VAR_6, 16, "%d", VAR_4);
  if (FUNC_6(VAR_2, VAR_6, VAR_5) <= 0)
   FUNC_2(1, VAR_1, "Unable to write tcp_fastopen sysctl");
  FUNC_1(VAR_2);
 }
}
