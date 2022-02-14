
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(
 void (*VAR_3)(int, void *, void *, void *, void *), void *VAR_4,
 void *VAR_5, void *VAR_6, void *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  int VAR_9;

  if (!FUNC_0(VAR_8, VAR_1, VAR_0))
   continue;
  if (VAR_8)
   VAR_9 = FUNC_1(
    1, "/sys/devices/system/cpu/cpu%d/online", VAR_8);
  else
   VAR_9 =
    1;

  if (VAR_9 && VAR_3)
   VAR_3(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
 }
}
