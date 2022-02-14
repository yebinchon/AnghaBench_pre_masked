
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const inet ;
struct TYPE_3__ {int sk_strategy; int sk_argument; } ;
typedef int StrategyNumber ;
typedef TYPE_1__* ScanKey ;


 int const* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static int
FUNC_7(const inet *VAR_0, int VAR_1, ScanKey VAR_2,
         bool VAR_3)
{
 int VAR_4;
 int VAR_5,
    VAR_6;


 if (VAR_3)
  VAR_4 = 1;
 else
  VAR_4 = 1 | (1 << 1) | (1 << 2) | (1 << 3);

 VAR_5 = FUNC_4(VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
 {
  inet *VAR_7 = FUNC_0(VAR_2[VAR_6].sk_argument);
  StrategyNumber VAR_8 = VAR_2[VAR_6].sk_strategy;
  int VAR_9;






  if (FUNC_5(VAR_7) != FUNC_5(VAR_0))
  {
   switch (VAR_8)
   {
    case 133:
    case 134:
     if (FUNC_5(VAR_7) < FUNC_5(VAR_0))
      VAR_4 = 0;
     break;

    case 136:
    case 135:
     if (FUNC_5(VAR_7) > FUNC_5(VAR_0))
      VAR_4 = 0;
     break;

    case 132:
     break;

    default:

     VAR_4 = 0;
     break;
   }

   if (!VAR_4)
    break;


   continue;
  }
  switch (VAR_8)
  {
   case 130:
    if (VAR_5 <= FUNC_4(VAR_7))
     VAR_4 &= (1 << 2) | (1 << 3);
    break;

   case 131:
    if (VAR_5 < FUNC_4(VAR_7))
     VAR_4 &= (1 << 2) | (1 << 3);
    break;

   case 128:
    if (VAR_5 == FUNC_4(VAR_7) - 1)
     VAR_4 &= 1 | (1 << 1);
    else if (VAR_5 >= FUNC_4(VAR_7))
     VAR_4 = 0;
    break;

   case 129:
    if (VAR_5 == FUNC_4(VAR_7))
     VAR_4 &= 1 | (1 << 1);
    else if (VAR_5 > FUNC_4(VAR_7))
     VAR_4 = 0;
    break;

   case 137:
    if (VAR_5 < FUNC_4(VAR_7))
     VAR_4 &= (1 << 2) | (1 << 3);
    else if (VAR_5 == FUNC_4(VAR_7))
     VAR_4 &= 1 | (1 << 1);
    else
     VAR_4 = 0;
    break;
  }

  if (!VAR_4)
   break;
  VAR_9 = FUNC_2(FUNC_3(VAR_0), FUNC_3(VAR_7),
      FUNC_1(VAR_5, FUNC_4(VAR_7)));

  if (VAR_9 != 0)
  {
   switch (VAR_8)
   {
    case 133:
    case 134:
     if (VAR_9 > 0)
      VAR_4 = 0;
     break;

    case 136:
    case 135:
     if (VAR_9 < 0)
      VAR_4 = 0;
     break;

    case 132:
     break;

    default:

     VAR_4 = 0;
     break;
   }

   if (!VAR_4)
    break;




   continue;
  }
  if (VAR_4 & ((1 << 2) | (1 << 3)) &&
   VAR_5 < FUNC_4(VAR_7))
  {
   int VAR_10;

   VAR_10 = FUNC_3(VAR_7)[VAR_5 / 8] &
    (1 << (7 - VAR_5 % 8));

   switch (VAR_8)
   {
    case 133:
    case 134:
     if (!VAR_10)
      VAR_4 &= 1 | (1 << 1) | (1 << 2);
     break;

    case 136:
    case 135:
     if (VAR_10)
      VAR_4 &= 1 | (1 << 1) | (1 << 3);
     break;

    case 132:
     break;

    default:
     if (!VAR_10)
      VAR_4 &= 1 | (1 << 1) | (1 << 2);
     else
      VAR_4 &= 1 | (1 << 1) | (1 << 3);
     break;
   }

   if (!VAR_4)
    break;
  }





  if (VAR_8 < 137 ||
   VAR_8 > 136)
   continue;
  switch (VAR_8)
  {
   case 133:
   case 134:
    if (VAR_5 == FUNC_4(VAR_7))
     VAR_4 &= 1 | (1 << 1);
    else if (VAR_5 > FUNC_4(VAR_7))
     VAR_4 = 0;
    break;

   case 136:
   case 135:
    if (VAR_5 < FUNC_4(VAR_7))
     VAR_4 &= (1 << 2) | (1 << 3);
    break;
  }

  if (!VAR_4)
   break;


  if (VAR_5 != FUNC_4(VAR_7))
   continue;
  if (!VAR_3 && VAR_4 & (1 | (1 << 1)) &&
   VAR_5 < FUNC_6(VAR_7))
  {
   int VAR_11;

   VAR_11 = FUNC_3(VAR_7)[VAR_5 / 8] &
    (1 << (7 - VAR_5 % 8));

   switch (VAR_8)
   {
    case 133:
    case 134:
     if (!VAR_11)
      VAR_4 &= 1 | (1 << 2) | (1 << 3);
     break;

    case 136:
    case 135:
     if (VAR_11)
      VAR_4 &= (1 << 1) | (1 << 2) | (1 << 3);
     break;

    case 132:
     break;

    default:
     if (!VAR_11)
      VAR_4 &= 1 | (1 << 2) | (1 << 3);
     else
      VAR_4 &= (1 << 1) | (1 << 2) | (1 << 3);
     break;
   }

   if (!VAR_4)
    break;
  }







  if (VAR_3)
  {

   VAR_9 = FUNC_2(FUNC_3(VAR_0), FUNC_3(VAR_7),
       FUNC_6(VAR_0));

   switch (VAR_8)
   {
    case 133:
     if (VAR_9 >= 0)
      VAR_4 = 0;
     break;

    case 134:
     if (VAR_9 > 0)
      VAR_4 = 0;
     break;

    case 137:
     if (VAR_9 != 0)
      VAR_4 = 0;
     break;

    case 136:
     if (VAR_9 < 0)
      VAR_4 = 0;
     break;

    case 135:
     if (VAR_9 <= 0)
      VAR_4 = 0;
     break;

    case 132:
     if (VAR_9 == 0)
      VAR_4 = 0;
     break;
   }

   if (!VAR_4)
    break;
  }
 }

 return VAR_4;
}
