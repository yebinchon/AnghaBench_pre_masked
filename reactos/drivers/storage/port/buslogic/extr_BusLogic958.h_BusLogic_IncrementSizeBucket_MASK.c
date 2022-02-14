
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * BusLogic_CommandSizeBuckets_T ;



__attribute__((used)) static void
FUNC_0(BusLogic_CommandSizeBuckets_T VAR_0,
                             unsigned int VAR_1)
{
  int VAR_2 = 0;
  if (VAR_1 < 8*1024)
  {
    if (VAR_1 < 2*1024)
        VAR_2 = (VAR_1 < 1*1024 ? 0 : 1);
    else
        VAR_2 = (VAR_1 < 4*1024 ? 2 : 3);
  }
  else if (VAR_1 < 128*1024)
  {
    if (VAR_1 < 32*1024)
        VAR_2 = (VAR_1 < 16*1024 ? 4 : 5);
    else
        VAR_2 = (VAR_1 < 64*1024 ? 6 : 7);
  }
  else
      VAR_2 = (VAR_1 < 256*1024 ? 8 : 9);
  VAR_0[VAR_2]++;
}
