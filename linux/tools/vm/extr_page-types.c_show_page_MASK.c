
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
        uint64_t VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 if (VAR_3)
  FUNC_1("%lx\t", VAR_4);
 if (VAR_0)
  FUNC_1("%lu\t", VAR_4);
 if (VAR_1)
  FUNC_1("@%llu\t", (unsigned long long)VAR_7);
 if (VAR_2)
  FUNC_1("%lu\t", VAR_8);

 FUNC_1("%lx\t%s\n", VAR_5, FUNC_0(VAR_6));
}
