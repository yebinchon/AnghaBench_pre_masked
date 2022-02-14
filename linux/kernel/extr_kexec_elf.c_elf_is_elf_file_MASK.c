
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct elfhdr *VAR_2)
{
 return FUNC_0(VAR_2->e_ident, VAR_0, VAR_1) == 0;
}
