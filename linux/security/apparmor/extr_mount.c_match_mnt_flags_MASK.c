
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_dfa {int dummy; } ;


 unsigned int FUNC_0 (struct aa_dfa*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct aa_dfa *VAR_0, unsigned int VAR_1,
        unsigned long VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 <= 31 ; ++VAR_3) {
  if ((1 << VAR_3) & VAR_2)
   VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_3 + 1);
 }

 return VAR_1;
}
