
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(__u64 *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  FUNC_0(VAR_8, VAR_5[VAR_11], VAR_9[VAR_11]);

 for (VAR_11 = VAR_2; VAR_13 < VAR_10; VAR_13++) {
  if (VAR_9[VAR_11] == VAR_3)
   for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++, VAR_11++)
    FUNC_0(VAR_8, VAR_6[VAR_12], VAR_9[VAR_11]);
  else if (VAR_9[VAR_11] == VAR_4)
   for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++, VAR_11++)
    FUNC_0(VAR_8, VAR_7[VAR_12], VAR_9[VAR_11]);
  else

   return;
 }
}
