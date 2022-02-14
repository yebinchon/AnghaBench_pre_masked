
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(int VAR_8)
{
 FUNC_1(VAR_7, "family:       %s %s\n",
   VAR_8 == VAR_0 ? "INET" : "INET6",
   VAR_6 ? "(PF_PACKET)" : "");

 FUNC_1(VAR_7, "test SND\n");
 FUNC_0(VAR_8, VAR_4);

 FUNC_1(VAR_7, "test ENQ\n");
 FUNC_0(VAR_8, VAR_3);

 FUNC_1(VAR_7, "test ENQ + SND\n");
 FUNC_0(VAR_8, VAR_3 |
   VAR_4);

 if (VAR_5 == VAR_1) {
  FUNC_1(VAR_7, "\ntest ACK\n");
  FUNC_0(VAR_8, VAR_2);

  FUNC_1(VAR_7, "\ntest SND + ACK\n");
  FUNC_0(VAR_8, VAR_4 |
    VAR_2);

  FUNC_1(VAR_7, "\ntest ENQ + SND + ACK\n");
  FUNC_0(VAR_8, VAR_3 |
    VAR_4 |
    VAR_2);
 }
}
