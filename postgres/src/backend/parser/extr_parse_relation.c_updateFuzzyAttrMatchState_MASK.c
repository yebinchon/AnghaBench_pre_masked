
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int distance; int first; int second; int * rfirst; int * rsecond; } ;
typedef int RangeTblEntry ;
typedef TYPE_1__ FuzzyAttrMatchState ;


 scalar_t__ FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int,char const*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_2,
        FuzzyAttrMatchState *VAR_3, RangeTblEntry *VAR_4,
        const char *VAR_5, const char *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;


 if (VAR_2 > VAR_3->distance)
  return;





 if (VAR_5[0] == '\0')
  return;


 VAR_9 = FUNC_1(VAR_6);
 VAR_8 =
  FUNC_2(VAR_5, FUNC_1(VAR_5), VAR_6, VAR_9,
           1, 1, 1,
           VAR_3->distance + 1
           - VAR_2,
           1);





 if (VAR_8 > VAR_9 / 2)
  return;





 VAR_8 += VAR_2;





 if (VAR_8 < VAR_3->distance)
 {

  VAR_3->distance = VAR_8;
  VAR_3->rfirst = VAR_4;
  VAR_3->first = VAR_7;
  VAR_3->rsecond = ((void*)0);
  VAR_3->second = VAR_0;
 }
 else if (VAR_8 == VAR_3->distance)
 {







  if (FUNC_0(VAR_3->second))
  {

   VAR_3->rfirst = ((void*)0);
   VAR_3->first = VAR_0;
   VAR_3->rsecond = ((void*)0);
   VAR_3->second = VAR_0;

   VAR_3->distance = VAR_8 - 1;
  }
  else if (FUNC_0(VAR_3->first))
  {

   VAR_3->rsecond = VAR_4;
   VAR_3->second = VAR_7;
  }
  else if (VAR_3->distance <= VAR_1)
  {





   VAR_3->rfirst = VAR_4;
   VAR_3->first = VAR_7;
  }
 }
}
