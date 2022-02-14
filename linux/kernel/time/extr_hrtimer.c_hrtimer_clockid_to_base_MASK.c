
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*,size_t) ;
 int* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(clockid_t VAR_4)
{
 if (FUNC_1(VAR_4 < VAR_2)) {
  int VAR_5 = VAR_3[VAR_4];

  if (FUNC_1(VAR_5 != VAR_1))
   return VAR_5;
 }
 FUNC_0(1, "Invalid clockid %d. Using MONOTONIC\n", VAR_4);
 return VAR_0;
}
