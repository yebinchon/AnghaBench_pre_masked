
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,int ,char*,int ,int *) ;

void FUNC_5(int VAR_5)
{
 if (FUNC_1(&VAR_1))
  return;

 if (!FUNC_1(&VAR_2)) {
  FUNC_2(&VAR_2, 1);

  VAR_4 = FUNC_4(
   "[twitch ingest update] ", FUNC_0(),
   "https://ingest.twitch.tv/api/v2/ingests",
   VAR_3, ((void*)0));
 }


 if (!FUNC_1(&VAR_0)) {
  for (int VAR_6 = 0; VAR_6 < VAR_5 * 100; VAR_6++) {
   if (FUNC_1(&VAR_1)) {
    break;
   }
   FUNC_3(10);
  }
 }
}
