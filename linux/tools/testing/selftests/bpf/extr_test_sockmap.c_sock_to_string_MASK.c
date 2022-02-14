
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

char *FUNC_0(int VAR_6)
{
 if (VAR_6 == VAR_0)
  return "client1";
 else if (VAR_6 == VAR_1)
  return "client2";
 else if (VAR_6 == VAR_4)
  return "server1";
 else if (VAR_6 == VAR_5)
  return "server2";
 else if (VAR_6 == VAR_2)
  return "peer1";
 else if (VAR_6 == VAR_3)
  return "peer2";
 else
  return "unknown";
}
