
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int prev ;
typedef int __u64 ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *,int*) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_2();
 __u64 VAR_4[VAR_3], VAR_5[VAR_3];

 FUNC_4(VAR_5, 0, sizeof(VAR_5));

 while (1) {
  __u64 VAR_6 = 0;
  __u32 VAR_7 = 0;
  int VAR_8;

  FUNC_6(VAR_1);
  FUNC_0(FUNC_1(VAR_0, &VAR_7, VAR_4) == 0);
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   VAR_6 += (VAR_4[VAR_8] - VAR_5[VAR_8]);
  if (VAR_6)
   FUNC_5("ifindex %i: %10llu pkt/s\n",
          VAR_2, VAR_6 / VAR_1);
  FUNC_3(VAR_5, VAR_4, sizeof(VAR_4));
 }
}
