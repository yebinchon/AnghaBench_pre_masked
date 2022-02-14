
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(wlc_param VAR_4, void *VAR_5, void *VAR_6)
{
 int *VAR_7 = (int *) VAR_6;
 char *VAR_8 = *((char **) VAR_5);
 int VAR_9 = -1;

 if (VAR_4 & VAR_1) {
  VAR_9 = FUNC_1(VAR_2, VAR_8, VAR_3, VAR_0);
  if (!VAR_9) {
   if (FUNC_0(VAR_3, "mbss4"))
    *VAR_7 = 4;
   else if (FUNC_0(VAR_3, "mbss16"))
    *VAR_7 = 16;
   else
    *VAR_7 = 1;
  }
 }

 return VAR_9;
}
