
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,int ,char*,char*,char*) ;
 int FUNC_2 (char*,int ,char*,char*,int ) ;

RD_BOOL
FUNC_3(char *VAR_6, uint32 VAR_7, char *VAR_8, char *VAR_9,
     char *VAR_10, char *VAR_11, RD_BOOL VAR_12)
{
 RD_BOOL VAR_13 = VAR_0;
 uint32 VAR_14 = 0;

 if (!FUNC_2(VAR_6, VAR_5, VAR_8, VAR_9, VAR_12))
  return VAR_0;

 FUNC_1(VAR_7, VAR_8, VAR_5, VAR_9, VAR_10, VAR_11);


 while (!VAR_3)
 {
  if (VAR_2)
   return VAR_0;

  if (!FUNC_0(&VAR_13, &VAR_14))
   return VAR_0;

  if (VAR_4)
   return VAR_1;
 }
 return VAR_1;
}
