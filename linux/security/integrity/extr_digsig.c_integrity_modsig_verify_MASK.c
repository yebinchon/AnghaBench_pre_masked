
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modsig {int dummy; } ;
struct key {int dummy; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*,struct modsig const*) ;
 struct key* FUNC_3 (unsigned int const) ;

int FUNC_4(const unsigned int VAR_0, const struct modsig *VAR_1)
{
 struct key *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 return FUNC_2(VAR_2, VAR_1);
}
