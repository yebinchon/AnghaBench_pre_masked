
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,...) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(bool VAR_11)
{
 const char *VAR_12 = "INVALID";

 if (VAR_5 == VAR_1)
  VAR_12 = "rxdrop";
 else if (VAR_5 == VAR_2)
  VAR_12 = "txonly";
 else if (VAR_5 == VAR_0)
  VAR_12 = "l2fwd";

 FUNC_1("%s:%d %s ", VAR_6, VAR_8, VAR_12);
 if (VAR_9 & VAR_4)
  FUNC_1("xdp-skb ");
 else if (VAR_9 & VAR_3)
  FUNC_1("xdp-drv ");
 else
  FUNC_1("	");

 if (VAR_7)
  FUNC_1("poll() ");

 if (VAR_11) {
  FUNC_1("running...");
  FUNC_0(VAR_10);
 }
}
