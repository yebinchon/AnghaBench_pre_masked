
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct strref {int dummy; } ;
struct cf_parser {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cf_parser*,char*) ;
 scalar_t__ FUNC_1 (struct strref*,char*) ;

__attribute__((used)) static bool FUNC_2(struct cf_parser *VAR_2, struct strref *VAR_3,
    uint32_t *VAR_4)
{
 if (FUNC_1(VAR_3, "in") == 0) {
  if (*VAR_4 & VAR_0)
   FUNC_0(VAR_2, "in");

  *VAR_4 |= VAR_0;

 } else if (FUNC_1(VAR_3, "out") == 0) {
  if (*VAR_4 & VAR_1)
   FUNC_0(VAR_2, "out");

  *VAR_4 |= VAR_1;

 } else {
  return 0;
 }

 return 1;
}
