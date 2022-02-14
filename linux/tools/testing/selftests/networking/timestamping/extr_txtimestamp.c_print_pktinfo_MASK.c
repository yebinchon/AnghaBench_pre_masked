
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sa ;
typedef int da ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*,char*) ;
 char* FUNC_1 (int,void*,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2, int VAR_3, void *VAR_4, void *VAR_5)
{
 char VAR_6[VAR_0], VAR_7[VAR_0];

 FUNC_0(VAR_1, "         pktinfo: ifindex=%u src=%s dst=%s\n",
  VAR_3,
  VAR_4 ? FUNC_1(VAR_2, VAR_4, VAR_6, sizeof(VAR_6)) : "unknown",
  VAR_5 ? FUNC_1(VAR_2, VAR_5, VAR_7, sizeof(VAR_7)) : "unknown");
}
