
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int caseset; scalar_t__ other_case; } ;
typedef TYPE_1__ ucd_record ;
struct TYPE_6__ {int poptions; scalar_t__ start_subject; size_t end_subject; scalar_t__ partial; int lcc; } ;
typedef TYPE_2__ match_block ;
typedef int heapframe ;
typedef size_t PCRE2_SPTR ;
typedef size_t PCRE2_SIZE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (scalar_t__,size_t) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (size_t,size_t,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(PCRE2_SIZE VAR_7, BOOL VAR_8, heapframe *VAR_9, match_block *VAR_10,
  PCRE2_SIZE *VAR_11)
{
PCRE2_SPTR VAR_12;
PCRE2_SIZE VAR_13;
PCRE2_SPTR VAR_14;
PCRE2_SPTR VAR_15;




if (VAR_7 >= VAR_1 || VAR_2[VAR_7] == VAR_4)
  {
  if ((VAR_10->poptions & VAR_3) != 0)
    {
    *VAR_11 = 0;
    return 0;
    }
  else return -1;
  }



VAR_14 = VAR_15 = VAR_0;
VAR_12 = VAR_10->start_subject + VAR_2[VAR_7];
VAR_13 = VAR_2[VAR_7+1] - VAR_2[VAR_7];

if (VAR_8)
  {
    {
    for (; VAR_13 > 0; VAR_13--)
      {
      uint32_t VAR_16, VAR_17;
      if (VAR_14 >= VAR_10->end_subject) return 1;
      VAR_16 = FUNC_6(VAR_14);
      VAR_17 = FUNC_6(VAR_12);
      if (FUNC_4(VAR_17, VAR_10->lcc, VAR_17) != FUNC_4(VAR_16, VAR_10->lcc, VAR_16))
        return -1;
      VAR_12++;
      VAR_14++;
      }
    }
  }




else
  {
  if (VAR_10->partial != 0)
    {
    for (; VAR_13 > 0; VAR_13--)
      {
      if (VAR_14 >= VAR_10->end_subject) return 1;
      if (FUNC_5(VAR_12) != FUNC_5(VAR_14)) return -1;
      }
    }



  else
    {
    if ((PCRE2_SIZE)(VAR_10->end_subject - VAR_14) < VAR_13) return 1;
    if (FUNC_7(VAR_12, VAR_14, FUNC_0(VAR_13)) != 0) return -1;
    VAR_14 += VAR_13;
    }
  }

*VAR_11 = VAR_14 - VAR_15;
return 0;
}
