
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aa_ext {scalar_t__ pos; } ;
typedef enum aa_code { ____Placeholder_aa_code } aa_code ;


 int FUNC_0 (struct aa_ext*,int) ;

__attribute__((used)) static bool FUNC_1(struct aa_ext *VAR_0, enum aa_code VAR_1)
{
 if (!FUNC_0(VAR_0, 1))
  return 0;
 if (*(u8 *) VAR_0->pos != VAR_1)
  return 0;
 VAR_0->pos++;
 return 1;
}
