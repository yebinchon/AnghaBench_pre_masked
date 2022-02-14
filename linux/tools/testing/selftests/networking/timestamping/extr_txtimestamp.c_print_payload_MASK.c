
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(char *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 if (VAR_2 > 70)
  VAR_2 = 70;

 FUNC_0(VAR_0, "payload: ");
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, "%02hhx ", VAR_1[VAR_3]);
 FUNC_0(VAR_0, "\n");
}
