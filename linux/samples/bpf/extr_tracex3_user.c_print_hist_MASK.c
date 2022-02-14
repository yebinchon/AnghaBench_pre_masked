
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int*,long*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int) ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 char** VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4(int VAR_7)
{
 unsigned int VAR_8 = FUNC_1();
 __u64 VAR_9 = 0;
 long VAR_10[VAR_8];
 __u64 VAR_11 = 0;
 __u64 VAR_12[VAR_0];
 __u64 VAR_13;
 __u32 VAR_14;
 int VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  FUNC_0(VAR_7, &VAR_14, VAR_10);
  VAR_13 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
   VAR_13 += VAR_10[VAR_15];
  VAR_12[VAR_14] = VAR_13;
  VAR_9 += VAR_13;
  if (VAR_13 > VAR_11)
   VAR_11 = VAR_13;
 }
 FUNC_2(VAR_7);
 for (VAR_14 = VAR_2 ? 0 : 29; VAR_14 < VAR_0; VAR_14++) {
  int VAR_16 = VAR_4 * VAR_12[VAR_14] / (VAR_11 + 1);

  if (VAR_6)
   FUNC_3("%s", VAR_5[VAR_16]);
  else
   FUNC_3("%s %s", VAR_1[VAR_16], VAR_3);
 }
 FUNC_3(" # %lld\n", VAR_9);
}
