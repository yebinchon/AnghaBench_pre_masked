
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(int VAR_3, int VAR_4)
{
 char VAR_5[VAR_2];
 int VAR_6, VAR_7;

 FUNC_3(VAR_5, "/proc/%d/oom_score_adj", VAR_3);

 VAR_6 = FUNC_2(VAR_5, VAR_1 | VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_1(VAR_6, "%d", VAR_4);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6);
  return VAR_7;
 }

 FUNC_0(VAR_6);
 return 0;
}
