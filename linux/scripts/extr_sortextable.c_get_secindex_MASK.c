
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf32_Word ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int const*) ;

__attribute__((used)) static inline unsigned int FUNC_3(unsigned int VAR_1,
     unsigned int VAR_2,
     const Elf32_Word *VAR_3)
{
 if (FUNC_1(VAR_1))
  return FUNC_0(VAR_1);
 if (VAR_1 != VAR_0)
  return VAR_1;
 return FUNC_2(&VAR_3[VAR_2]);
}
