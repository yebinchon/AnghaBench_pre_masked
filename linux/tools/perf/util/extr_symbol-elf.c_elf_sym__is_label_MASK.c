
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ st_name; scalar_t__ st_shndx; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static inline int FUNC_2(const GElf_Sym *VAR_5)
{
 return FUNC_0(VAR_5) == VAR_2 &&
  VAR_5->st_name != 0 &&
  VAR_5->st_shndx != VAR_1 &&
  VAR_5->st_shndx != VAR_0 &&
  FUNC_1(VAR_5) != VAR_3 &&
  FUNC_1(VAR_5) != VAR_4;
}
