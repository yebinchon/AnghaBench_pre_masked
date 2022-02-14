
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(int *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = 0;
 if (0 > FUNC_1(&VAR_2)) {
  FUNC_2(VAR_1, "failed to prepare signal block mask: sigemptyset()");
  return -1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  int VAR_7 = VAR_4[VAR_6];
  if (0 > FUNC_0(&VAR_2, VAR_7)) {
   if (VAR_7 <= VAR_0 && VAR_3[VAR_7] != ((void*)0)) {
    FUNC_2(VAR_1, "failed to prepare signal block mask: sigaddset(%s)",
      VAR_3[VAR_7]);
   } else {
    FUNC_2(VAR_1, "failed to prepare signal block mask: sigaddset(%d)", VAR_7);
   }
   return -1;
  }
 }
 return 0;
}
