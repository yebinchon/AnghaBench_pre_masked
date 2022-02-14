
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timestamp ;
struct tm {int tm_mon; int tm_year; scalar_t__ tm_mday; } ;
struct TYPE_3__ {scalar_t__ month; scalar_t__ time; } ;
typedef TYPE_1__ interval ;
typedef int fsec_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__** VAR_1 ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *,struct tm*,int *,int *) ;
 scalar_t__ FUNC_3 (struct tm*,int ,int *,int *) ;

int
FUNC_4(timestamp * VAR_2, interval * VAR_3, timestamp * VAR_4)
{
 if (FUNC_0(*VAR_2))
  *VAR_4 = *VAR_2;


 else
 {
  if (VAR_3->month != 0)
  {
   struct tm VAR_5,
        *VAR_6 = &VAR_5;
   fsec_t VAR_7;


   if (FUNC_2(*VAR_2, ((void*)0), VAR_6, &VAR_7, ((void*)0)) != 0)
    return -1;
   VAR_6->tm_mon += VAR_3->month;
   if (VAR_6->tm_mon > VAR_0)
   {
    VAR_6->tm_year += (VAR_6->tm_mon - 1) / VAR_0;
    VAR_6->tm_mon = (VAR_6->tm_mon - 1) % VAR_0 + 1;
   }
   else if (VAR_6->tm_mon < 1)
   {
    VAR_6->tm_year += VAR_6->tm_mon / VAR_0 - 1;
    VAR_6->tm_mon = VAR_6->tm_mon % VAR_0 + VAR_0;
   }



   if (VAR_6->tm_mday > VAR_1[FUNC_1(VAR_6->tm_year)][VAR_6->tm_mon - 1])
    VAR_6->tm_mday = (VAR_1[FUNC_1(VAR_6->tm_year)][VAR_6->tm_mon - 1]);


   if (FUNC_3(VAR_6, VAR_7, ((void*)0), VAR_2) != 0)
    return -1;
  }


  *VAR_2 += VAR_3->time;
  *VAR_4 = *VAR_2;
 }
 return 0;

}
