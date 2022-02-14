
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CompressionAlgorithm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_3, CompressionAlgorithm *VAR_4, int *VAR_5)
{
 if (VAR_3 == VAR_2 ||
  (VAR_3 > 0 && VAR_3 <= 9))
  *VAR_4 = VAR_0;
 else if (VAR_3 == 0)
  *VAR_4 = VAR_1;
 else
 {
  FUNC_0("invalid compression code: %d", VAR_3);
  *VAR_4 = VAR_1;
 }


 if (VAR_5)
  *VAR_5 = VAR_3;
}
