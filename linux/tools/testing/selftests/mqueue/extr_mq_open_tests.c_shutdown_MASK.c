
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,char*,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ) ;

void FUNC_7(int VAR_12, char *VAR_13, int VAR_14)
{
 static int VAR_15 = 0;


 if (VAR_15++)
  return;

 if (FUNC_6(0) == -1)
  FUNC_5("seteuid() failed");

 if (VAR_6 != -1)
  if (FUNC_3(VAR_6))
   FUNC_5("mq_close() during shutdown");
 if (VAR_7)




  FUNC_4(VAR_7);
 if (VAR_2) {
  if (VAR_8)
   FUNC_0(VAR_0, VAR_8,
         "failed to restore saved_def_msgs");
  if (VAR_9)
   FUNC_0(VAR_1, VAR_9,
         "failed to restore saved_def_msgsize");
 }
 if (VAR_10)
  FUNC_0(VAR_4, VAR_10,
        "failed to restore saved_max_msgs");
 if (VAR_11)
  FUNC_0(VAR_5, VAR_11,
        "failed to restore saved_max_msgsize");
 if (VAR_12)
  FUNC_1(VAR_12, VAR_3, "%s at %d", VAR_13, VAR_14);
 FUNC_2(0);
}
