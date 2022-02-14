
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_3(char *VAR_16)
{
 char VAR_17[VAR_0];

 FUNC_0(VAR_16, 0, VAR_0);

 if (VAR_9)
  FUNC_2(VAR_16, "pass,", VAR_0);
 if (VAR_8)
  FUNC_2(VAR_16, "pass_noisy,", VAR_0);
 if (VAR_11)
  FUNC_2(VAR_16, "redir,", VAR_0);
 if (VAR_12)
  FUNC_2(VAR_16, "redir_noisy,", VAR_0);
 if (VAR_5)
  FUNC_2(VAR_16, "drop,", VAR_0);
 if (VAR_3) {
  FUNC_1(VAR_17, VAR_0, "apply %d,", VAR_3);
  FUNC_2(VAR_16, VAR_17, VAR_0);
 }
 if (VAR_4) {
  FUNC_1(VAR_17, VAR_0, "cork %d,", VAR_4);
  FUNC_2(VAR_16, VAR_17, VAR_0);
 }
 if (VAR_14) {
  FUNC_1(VAR_17, VAR_0, "start %d,", VAR_14);
  FUNC_2(VAR_16, VAR_17, VAR_0);
 }
 if (VAR_6) {
  FUNC_1(VAR_17, VAR_0, "end %d,", VAR_6);
  FUNC_2(VAR_16, VAR_17, VAR_0);
 }
 if (VAR_15) {
  FUNC_1(VAR_17, VAR_0, "pop (%d,%d),",
    VAR_15, VAR_15 + VAR_10);
  FUNC_2(VAR_16, VAR_17, VAR_0);
 }
 if (VAR_7)
  FUNC_2(VAR_16, "ingress,", VAR_0);
 if (VAR_13)
  FUNC_2(VAR_16, "skb,", VAR_0);
 if (VAR_1)
  FUNC_2(VAR_16, "ktls,", VAR_0);
 if (VAR_2)
  FUNC_2(VAR_16, "peek,", VAR_0);
}
