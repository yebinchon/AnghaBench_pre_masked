
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;

void
FUNC_1(bool VAR_3)
{
 if (VAR_3)
 {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
   FUNC_0(VAR_0, "leaked hash_seq_search scan for hash table %p",
     VAR_2[VAR_4]);
  }
 }
 VAR_1 = 0;
}
