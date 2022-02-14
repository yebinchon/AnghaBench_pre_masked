
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trgm ;
typedef scalar_t__ int32 ;
typedef int TRGM ;
typedef int BITVECP ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int32
FUNC_5(TRGM *VAR_0, BITVECP VAR_1)
{
 int32 VAR_2 = 0;
 int32 VAR_3,
    VAR_4 = FUNC_0(VAR_0);
 trgm *VAR_5 = FUNC_2(VAR_0);
 int32 VAR_6 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
  FUNC_1(((char *) &VAR_6), VAR_5 + VAR_3);
  VAR_2 += FUNC_3(VAR_1, FUNC_4(VAR_6));
 }

 return VAR_2;
}
