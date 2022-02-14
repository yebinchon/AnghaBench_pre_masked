
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__* out_str; } ;
typedef TYPE_1__ pcre2_output_context ;
typedef scalar_t__ PCRE2_UCHAR ;
typedef scalar_t__* PCRE2_SPTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__**,scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_6(PCRE2_SPTR *VAR_15, PCRE2_SPTR VAR_16,
  pcre2_output_context *VAR_17, BOOL VAR_18, PCRE2_UCHAR VAR_19,
  BOOL VAR_20, PCRE2_UCHAR VAR_21, BOOL VAR_22)
{
BOOL VAR_23 = VAR_11;
BOOL VAR_24 = VAR_11;
BOOL VAR_25;
PCRE2_SPTR VAR_26 = *VAR_15;
PCRE2_SPTR VAR_27 = ((void*)0);
uint32_t VAR_28, VAR_29;
int VAR_30, VAR_31;

(void)VAR_18;

if (VAR_26 >= VAR_16)
  {
  *VAR_15 = VAR_26;
  return VAR_13;
  }

if (*VAR_26 == VAR_3
    || *VAR_26 == VAR_1)
  {
  VAR_26++;

  if (VAR_26 >= VAR_16)
    {
    *VAR_15 = VAR_26;
    return VAR_13;
    }

  VAR_23 = VAR_14;

  VAR_17->out_str[0] = VAR_5;
  VAR_17->out_str[1] = VAR_1;
  VAR_30 = 2;

  if (!VAR_22)
    {
    if (VAR_20)
      {
      VAR_17->out_str[VAR_30] = VAR_0;
      VAR_30++;
      }
    VAR_17->out_str[VAR_30] = (uint8_t) VAR_19;
    }

  FUNC_5(VAR_17, VAR_30 + 1);
  }
else
  FUNC_4(VAR_17, VAR_5);

VAR_25 = VAR_11;
VAR_29 = 0;

if (*VAR_26 == VAR_10)
  {
  VAR_17->out_str[0] = VAR_0;
  VAR_17->out_str[1] = VAR_10;
  FUNC_5(VAR_17, 2);
  VAR_25 = VAR_14;
  VAR_29 = VAR_10;
  VAR_26++;
  }

while (VAR_26 < VAR_16)
  {
  VAR_27 = VAR_26;
  FUNC_0(VAR_28, VAR_26);

  if (VAR_28 == VAR_10)
    {
    FUNC_4(VAR_17, VAR_28);

    if (!VAR_23 && !VAR_22 && VAR_24)
      {
      VAR_17->out_str[0] = VAR_4;
      VAR_17->out_str[1] = VAR_8;
      VAR_17->out_str[2] = VAR_6;
      VAR_17->out_str[3] = VAR_3;
      FUNC_5(VAR_17, 4);

      FUNC_3(VAR_17, VAR_19, VAR_20);
      FUNC_4(VAR_17, VAR_9);
      }

    *VAR_15 = VAR_26;
    return 0;
    }

  if (VAR_26 >= VAR_16) break;

  if (VAR_28 == VAR_5 && *VAR_26 == VAR_2)
    {
    *VAR_15 = VAR_26;
    VAR_31 = FUNC_2(VAR_15, VAR_16, VAR_17);

    if (VAR_31 != 0)
      {
      VAR_26 = *VAR_15;

      VAR_25 = VAR_11;
      VAR_29 = 0;

      if (!VAR_23 &&
          FUNC_1 (VAR_31, VAR_19))
        VAR_24 = VAR_14;
      continue;
      }
    }
  else if (VAR_28 == VAR_7 && VAR_25 &&
           *VAR_26 != VAR_10)
    {
    FUNC_4(VAR_17, VAR_7);

    VAR_27 = VAR_26;
    FUNC_0(VAR_28, VAR_26);

    if (VAR_26 >= VAR_16) break;

    if (VAR_21 != 0 && VAR_28 == VAR_21)
      {
      VAR_27 = VAR_26;
      FUNC_0(VAR_28, VAR_26);
      }
    else if (VAR_28 == VAR_5 && *VAR_26 == VAR_2)
      {
      *VAR_15 = VAR_26;
      return VAR_12;
      }

    if (VAR_29 > VAR_28)
      {
      *VAR_15 = VAR_26;
      return VAR_12;
      }

    if (VAR_29 < VAR_19 && VAR_19 < VAR_28) VAR_24 = VAR_14;

    VAR_25 = VAR_11;
    VAR_29 = 0;
    }
  else
    {
    if (VAR_21 != 0 && VAR_28 == VAR_21)
      {
      VAR_27 = VAR_26;
      FUNC_0(VAR_28, VAR_26);

      if (VAR_26 >= VAR_16) break;
      }

    VAR_25 = VAR_14;
    VAR_29 = VAR_28;
    }

  if (VAR_28 == VAR_5 || VAR_28 == VAR_10 ||
      VAR_28 == VAR_0 || VAR_28 == VAR_7)
    FUNC_4(VAR_17, VAR_0);

  if (VAR_28 == VAR_19) VAR_24 = VAR_14;

  do FUNC_4(VAR_17, *VAR_27++); while (VAR_27 < VAR_26);
  }

*VAR_15 = VAR_26;
return VAR_13;
}
