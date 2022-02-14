
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int so_timestamp; int so_timestampns; int so_timestamping; } ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int ,int*,int) ;

void FUNC_2(int VAR_6, struct options VAR_7)
{
 int VAR_8 = 1;

 if (FUNC_1(VAR_6, VAR_0, VAR_1, &VAR_8, sizeof(VAR_8)) < 0)
  FUNC_0(1, VAR_5, "Failed to enable SO_REUSEADDR");

 if (VAR_7.so_timestamp &&
     FUNC_1(VAR_6, VAR_0, VAR_2,
         &VAR_7.so_timestamp, sizeof(VAR_7.so_timestamp)) < 0)
  FUNC_0(1, VAR_5, "Failed to enable SO_TIMESTAMP");

 if (VAR_7.so_timestampns &&
     FUNC_1(VAR_6, VAR_0, VAR_4,
         &VAR_7.so_timestampns, sizeof(VAR_7.so_timestampns)) < 0)
  FUNC_0(1, VAR_5, "Failed to enable SO_TIMESTAMPNS");

 if (VAR_7.so_timestamping &&
     FUNC_1(VAR_6, VAR_0, VAR_3,
         &VAR_7.so_timestamping, sizeof(VAR_7.so_timestamping)) < 0)
  FUNC_0(1, VAR_5, "Failed to set SO_TIMESTAMPING");
}
