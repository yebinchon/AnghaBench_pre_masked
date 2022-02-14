
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rtfClass; scalar_t__ rtfMajor; int rtfMinor; } ;
typedef TYPE_1__ RTF_Info ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(RTF_Info *VAR_8)
{
  for (;;)
  {
    FUNC_3 (VAR_8);
    if (VAR_8->rtfClass == VAR_3)
      return;
    if (FUNC_1(VAR_8, VAR_5, VAR_4))
      break;
    if (FUNC_1(VAR_8, VAR_5, VAR_0))
    {
      FUNC_3 (VAR_8);
      if (VAR_8->rtfClass == VAR_3)
        return;
      if (FUNC_2(VAR_8, VAR_1, VAR_2, VAR_7))
      {
 int VAR_9 = 1;

 while (FUNC_3 (VAR_8) != VAR_3)
 {
          if (VAR_8->rtfClass == VAR_5)
          {
            if (VAR_8->rtfMajor == VAR_0) VAR_9++;
            else if (VAR_8->rtfMajor == VAR_4 && --VAR_9 < 0) break;
          }
          FUNC_4(VAR_8);
 }
      }
      else FUNC_5(VAR_8);
      continue;
    }
    if (!FUNC_1 (VAR_8, VAR_1, VAR_6))
    {
      FUNC_0("Non supported attribute: %d %d %d\n", VAR_8->rtfClass, VAR_8->rtfMajor, VAR_8->rtfMinor);
      return;
    }
  }
  FUNC_4(VAR_8);
}
