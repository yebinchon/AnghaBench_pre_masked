
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct elfhdr {scalar_t__* e_ident; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint64_t FUNC_2(const struct elfhdr *VAR_3, uint64_t VAR_4)
{
 if (VAR_3->e_ident[VAR_0] == VAR_1)
  VAR_4 = FUNC_1(VAR_4);
 else if (VAR_3->e_ident[VAR_0] == VAR_2)
  VAR_4 = FUNC_0(VAR_4);

 return VAR_4;
}
