
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (unsigned long) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (unsigned long,unsigned long,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (unsigned long,unsigned long,int,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_7 (unsigned long) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_7, unsigned long VAR_8,
       uint64_t VAR_9, uint64_t VAR_10, uint64_t VAR_11,
       uint64_t VAR_12)
{
 VAR_9 = FUNC_3(VAR_9, VAR_12);

 if (!FUNC_0(VAR_9))
  return;

 if (VAR_1 && VAR_10 != (uint64_t)VAR_1)
  return;

 if (VAR_2)
  FUNC_2(VAR_8);
 if (VAR_5)
  FUNC_7(VAR_8);

 if (VAR_4)
  FUNC_4(VAR_8);

 if (VAR_3 == 1)
  FUNC_6(VAR_7, VAR_8, 1, VAR_9, VAR_10, VAR_11);
 else if (VAR_3 == 2)
  FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_0[FUNC_1(VAR_9)]++;
 VAR_6++;
}
