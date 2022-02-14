
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int nrexceptional; int nrpages; } ;


 scalar_t__ FUNC_0 (struct address_space*) ;

__attribute__((used)) static bool FUNC_1(struct address_space *VAR_0)
{
 if (FUNC_0(VAR_0))
  return VAR_0->nrexceptional;

 return VAR_0->nrpages;
}
