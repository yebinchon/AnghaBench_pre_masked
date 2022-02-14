
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(const char *VAR_3)
{
 FUNC_0(VAR_2,
  "usage: %s [OPTS] -I interface destination\n\n"
  "OPTS:\n"
  "    -c count		Stop after sending count requests\n"
  "			(default %d, max %d)\n"
  "    -I interface	interface name\n"
  "    -N			Run in driver mode\n"
  "    -s			Server mode\n"
  "    -S			Run in skb mode\n",
  VAR_3, VAR_0, VAR_1);
}
