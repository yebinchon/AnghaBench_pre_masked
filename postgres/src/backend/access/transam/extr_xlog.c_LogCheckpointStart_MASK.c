
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(int VAR_9, bool VAR_10)
{
 FUNC_0(VAR_8, "%s starting:%s%s%s%s%s%s%s%s",
   VAR_10 ? "restartpoint" : "checkpoint",
   (VAR_9 & VAR_6) ? " shutdown" : "",
   (VAR_9 & VAR_2) ? " end-of-recovery" : "",
   (VAR_9 & VAR_5) ? " immediate" : "",
   (VAR_9 & VAR_4) ? " force" : "",
   (VAR_9 & VAR_7) ? " wait" : "",
   (VAR_9 & VAR_1) ? " wal" : "",
   (VAR_9 & VAR_0) ? " time" : "",
   (VAR_9 & VAR_3) ? " flush-all" : "");
}
