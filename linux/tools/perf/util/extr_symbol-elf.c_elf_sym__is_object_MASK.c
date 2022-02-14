
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ st_name; scalar_t__ st_shndx; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static inline bool FUNC_1(const GElf_Sym *VAR_2)
{
 return FUNC_0(VAR_2) == VAR_1 &&
  VAR_2->st_name != 0 &&
  VAR_2->st_shndx != VAR_0;
}
