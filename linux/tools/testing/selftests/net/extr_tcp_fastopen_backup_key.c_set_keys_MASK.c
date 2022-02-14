
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,char*,...) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int ) ;
 int FUNC_3 (char*,int,char*,int,int,int,int,...) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_9, uint32_t *VAR_10)
{
 char VAR_11[128];

 if (VAR_5) {
  if (FUNC_2(VAR_9, VAR_2, VAR_3, VAR_10,
      VAR_7))
   FUNC_0(1, VAR_6, "Unable to set key");
  return;
 }
 if (VAR_4)
  FUNC_3(VAR_11, 128, "%08x-%08x-%08x-%08x,%08x-%08x-%08x-%08x",
    VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5],
    VAR_10[6], VAR_10[7]);
 else
  FUNC_3(VAR_11, 128, "%08x-%08x-%08x-%08x",
    VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3]);
 FUNC_1(VAR_8, 0, VAR_1);
 if (FUNC_4(VAR_8, VAR_11, sizeof(VAR_11)) <= 0)
  FUNC_0(1, VAR_6, "Unable to write %s", VAR_0);
}
