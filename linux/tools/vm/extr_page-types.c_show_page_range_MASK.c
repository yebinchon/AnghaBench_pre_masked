
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,unsigned long,...) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4, unsigned long VAR_5,
       unsigned long VAR_6, uint64_t VAR_7,
       uint64_t VAR_8, uint64_t VAR_9)
{
 static uint64_t VAR_10;
 static uint64_t VAR_11;
 static uint64_t VAR_12;
 static unsigned long VAR_13;
 static unsigned long VAR_14;
 static unsigned long VAR_15;

 if (VAR_7 == VAR_10 && VAR_8 == VAR_11 && VAR_9 == VAR_12 &&
     VAR_5 == VAR_14 + VAR_15 && VAR_6 && VAR_4 == VAR_13 + VAR_15) {
  VAR_15 += VAR_6;
  return;
 }

 if (VAR_15) {
  if (VAR_3)
   FUNC_1("%lx\t", VAR_13);
  if (VAR_0)
   FUNC_1("%lu\t", VAR_13);
  if (VAR_1)
   FUNC_1("@%llu\t", (unsigned long long)VAR_11);
  if (VAR_2)
   FUNC_1("%lu\t", VAR_12);
  FUNC_1("%lx\t%lx\t%s\n",
    VAR_14, VAR_15, FUNC_0(VAR_10));
 }

 VAR_10 = VAR_7;
 VAR_11 = VAR_8;
 VAR_12 = VAR_9;
 VAR_14 = VAR_5;
 VAR_13 = VAR_4;
 VAR_15 = VAR_6;
}
