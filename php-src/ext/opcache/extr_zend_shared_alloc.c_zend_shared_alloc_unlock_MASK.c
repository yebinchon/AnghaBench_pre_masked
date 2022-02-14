
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_len; scalar_t__ l_start; int l_whence; int l_type; } ;
typedef int ZCG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct flock*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 () ;
 int VAR_6 ;

void FUNC_5(void)
{

 struct flock VAR_7;

 VAR_7.l_type = VAR_2;
 VAR_7.l_whence = VAR_3;
 VAR_7.l_start = 0;
 VAR_7.l_len = 1;


 ZCG(VAR_8) = 0;


 if (FUNC_0(VAR_5, VAR_1, &VAR_7) == -1) {
  FUNC_3(VAR_0, "Cannot remove lock - %s (%d)", FUNC_1(VAR_4), VAR_4);
 }






}
