
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int socklen_t ;
typedef int buf ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,char*,...) ;
 scalar_t__ FUNC_1 (int,int ,int ,int *,int*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,char*,int *,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_5(int VAR_8, uint32_t *VAR_9)
{
 char VAR_10[128];
 socklen_t VAR_11 = VAR_0 * 2;

 if (VAR_5) {
  if (FUNC_1(VAR_8, VAR_3, VAR_4, VAR_9, &VAR_11))
   FUNC_0(1, VAR_6, "Unable to get key");
  return;
 }
 FUNC_2(VAR_7, 0, VAR_2);
 if (FUNC_3(VAR_7, VAR_10, sizeof(VAR_10)) <= 0)
  FUNC_0(1, VAR_6, "Unable to read %s", VAR_1);
 if (FUNC_4(VAR_10, "%x-%x-%x-%x,%x-%x-%x-%x", VAR_9, VAR_9 + 1, VAR_9 + 2,
     VAR_9 + 3, VAR_9 + 4, VAR_9 + 5, VAR_9 + 6, VAR_9 + 7) != 8)
  FUNC_0(1, 0, "Unable to parse %s", VAR_1);
}
