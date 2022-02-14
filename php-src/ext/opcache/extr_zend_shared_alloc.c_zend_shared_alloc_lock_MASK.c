
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_len; int l_pid; scalar_t__ l_start; int l_whence; int l_type; } ;
typedef int ZCG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,struct flock*) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,scalar_t__) ;
 int FUNC_5 () ;
 int VAR_7 ;

void FUNC_6(void)
{

 struct flock VAR_8;

 VAR_8.l_type = VAR_3;
 VAR_8.l_whence = VAR_4;
 VAR_8.l_start = 0;
 VAR_8.l_len = 1;
 while (1) {
  if (FUNC_0(VAR_6, VAR_2, &VAR_8) == -1) {
   if (VAR_5 == VAR_1) {
    continue;
   }
   FUNC_4(VAR_0, "Cannot create lock - %s (%d)", FUNC_2(VAR_5), VAR_5);
  }
  break;
 }




 ZCG(VAR_9) = 1;
}
