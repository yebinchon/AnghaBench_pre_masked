
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre2_output_context ;
typedef scalar_t__ PCRE2_UCHAR ;
typedef scalar_t__* PCRE2_SPTR ;


 scalar_t__ VAR_0 ;
 char const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(PCRE2_SPTR *VAR_6, PCRE2_SPTR VAR_7,
  pcre2_output_context *VAR_8)
{
static const char *VAR_9 = "alnum:alpha:ascii:blank:cntrl:digit:"
  "graph:lower:print:punct:space:upper:word:xdigit:";
PCRE2_SPTR VAR_10 = *VAR_6 + 1;
PCRE2_SPTR VAR_11 = VAR_10;
const char *VAR_12;
PCRE2_UCHAR VAR_13;
int VAR_14;

while (VAR_5)
  {
  if (VAR_11 >= VAR_7) return 0;

  VAR_13 = *VAR_11++;

  if (VAR_13 < VAR_3 || VAR_13 > VAR_4) break;
  }

if (VAR_13 != VAR_0 || VAR_11 >= VAR_7 ||
    *VAR_11 != VAR_2)
  return 0;

VAR_12 = VAR_9;
VAR_14 = 1;

while (VAR_5)
  {
  if (*VAR_12 == VAR_1) return 0;

  VAR_11 = VAR_10;

  while (*VAR_11 == (PCRE2_UCHAR) *VAR_12)
    {
    if (*VAR_11 == VAR_0)
      {
      VAR_11 += 2;
      VAR_10 -= 2;

      do FUNC_0(VAR_8, *VAR_10++); while (VAR_10 < VAR_11);

      *VAR_6 = VAR_11;
      return VAR_14;
      }
    VAR_11++;
    VAR_12++;
    }

  while (*VAR_12 != VAR_0) VAR_12++;
  VAR_12++;
  VAR_14++;
  }
}
