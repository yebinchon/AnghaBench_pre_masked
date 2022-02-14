
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trgm ;
typedef scalar_t__ int32 ;
typedef int TRGM ;
typedef scalar_t__ BITVECP ;
typedef int BITVEC ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(BITVECP VAR_1, TRGM *VAR_2)
{
 int32 VAR_3,
    VAR_4 = FUNC_0(VAR_2);
 trgm *VAR_5 = FUNC_2(VAR_2);
 int32 VAR_6 = 0;

 FUNC_4((void *) VAR_1, 0, sizeof(BITVEC));
 FUNC_5(VAR_1, VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
  FUNC_1(((char *) &VAR_6), VAR_5 + VAR_3);
  FUNC_3(VAR_1, VAR_6);
 }
}
