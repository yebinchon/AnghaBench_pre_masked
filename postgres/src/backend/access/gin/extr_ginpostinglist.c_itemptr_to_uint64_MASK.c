
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int ItemPointer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int VAR_0 ;

__attribute__((used)) static inline uint64
FUNC_4(const ItemPointer VAR_1)
{
 uint64 VAR_2;

 FUNC_0(FUNC_3(VAR_1));
 FUNC_0(FUNC_2(VAR_1) < (1 << VAR_0));

 VAR_2 = FUNC_1(VAR_1);
 VAR_2 <<= VAR_0;
 VAR_2 |= FUNC_2(VAR_1);

 return VAR_2;
}
