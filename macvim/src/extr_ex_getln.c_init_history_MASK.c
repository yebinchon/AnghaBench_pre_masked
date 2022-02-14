
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int long_u ;
struct TYPE_5__ {struct TYPE_5__* hisstr; } ;
typedef TYPE_1__ histentry_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int* VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3()
{
    int VAR_6;
    histentry_T *VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;




    VAR_6 = (int)VAR_5;
    if (VAR_6 != VAR_3)
    {
 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
 {
     if (VAR_6)
     {
  VAR_7 = (histentry_T *)FUNC_1(
    (long_u)(VAR_6 * sizeof(histentry_T)), VAR_1);
  if (VAR_7 == ((void*)0))
  {
      if (VAR_10 == 0)
      {
   VAR_6 = VAR_3;
   break;
      }


      VAR_6 = 0;
      VAR_10 = -1;
      continue;
  }
     }
     else
  VAR_7 = ((void*)0);
     if (VAR_6 == 0 || VAR_7 != ((void*)0))
     {
  if (VAR_2[VAR_10] < 0)
  {
      for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
   FUNC_0(&VAR_7[VAR_8]);
  }
  else if (VAR_6 > VAR_3)
  {
      for (VAR_8 = 0; VAR_8 <= VAR_2[VAR_10]; ++VAR_8)
   VAR_7[VAR_8] = VAR_4[VAR_10][VAR_8];
      VAR_9 = VAR_8;
      for ( ; VAR_8 <= VAR_6 - (VAR_3 - VAR_2[VAR_10]); ++VAR_8)
   FUNC_0(&VAR_7[VAR_8]);
      for ( ; VAR_9 < VAR_3; ++VAR_8, ++VAR_9)
   VAR_7[VAR_8] = VAR_4[VAR_10][VAR_9];
  }
  else
  {
      VAR_9 = VAR_2[VAR_10];
      for (VAR_8 = VAR_6 - 1; ; --VAR_8)
      {
   if (VAR_8 >= 0)
       VAR_7[VAR_8] = VAR_4[VAR_10][VAR_9];
   else
       FUNC_2(VAR_4[VAR_10][VAR_9].hisstr);
   if (--VAR_9 < 0)
       VAR_9 = VAR_3 - 1;
   if (VAR_9 == VAR_2[VAR_10])
       break;
      }
      VAR_2[VAR_10] = VAR_6 - 1;
  }
  FUNC_2(VAR_4[VAR_10]);
  VAR_4[VAR_10] = VAR_7;
     }
 }
 VAR_3 = VAR_6;
    }
}
