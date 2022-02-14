
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_state {char const* p_end; } ;



 int FUNC_0 (struct match_state*,char*) ;

__attribute__((used)) static const char *
FUNC_1(struct match_state *VAR_0, const char *VAR_1)
{
 switch (*VAR_1++) {
 case 128:
  if (VAR_1 == VAR_0->p_end)
   FUNC_0(VAR_0,
       "malformed pattern (ends with '%')");
  return VAR_1 + 1;
 case '[':
  if (*VAR_1 == '^')
   VAR_1++;
  do {

   if (VAR_1 == VAR_0->p_end) {
    FUNC_0(VAR_0,
        "malformed pattern (missing ']')");
    break;
   }
   if (*(VAR_1++) == 128 && VAR_1 < VAR_0->p_end) {

    VAR_1++;
   }
  } while (*VAR_1 != ']');
  return VAR_1 + 1;
 default:
  return VAR_1;
 }
}
