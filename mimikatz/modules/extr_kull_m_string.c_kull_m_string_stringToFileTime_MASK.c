
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int data ;
typedef scalar_t__ WORD ;
struct TYPE_8__ {int minFields; int idxYear; int idxMonth; int idxDay; int idxHour; int idxMinute; int idxSecond; int format; } ;
struct TYPE_7__ {scalar_t__ wSecond; scalar_t__ wMinute; scalar_t__ wHour; scalar_t__ wDay; scalar_t__ wMonth; scalar_t__ wYear; scalar_t__ wMilliseconds; scalar_t__ wDayOfWeek; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef scalar_t__* PULONGLONG ;
typedef scalar_t__* PFILETIME ;
typedef int LPCWSTR ;
typedef scalar_t__ LONGLONG ;
typedef TYPE_2__ KIWI_DATETIME_FORMATS ;
typedef scalar_t__ FILETIME ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (TYPE_1__*,scalar_t__*) ;
 int FUNC_6 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

BOOL FUNC_7(LPCWSTR VAR_2, PFILETIME VAR_3)
{
 BOOL VAR_4 = VAR_0;
 const KIWI_DATETIME_FORMATS * VAR_5;
 SYSTEMTIME VAR_6;
 FILETIME VAR_7, VAR_8;
 LONGLONG VAR_9;
 WORD VAR_10, VAR_11[6] = {0};
 int VAR_12;

 for(VAR_10 = 0; (VAR_10 < FUNC_0(VAR_1)) && !VAR_4; VAR_10++)
 {
  VAR_5 = VAR_1 + VAR_10;
  FUNC_4(VAR_11, sizeof(VAR_11));
  VAR_12 = FUNC_6(VAR_2, VAR_5->format, VAR_11 + 0, VAR_11 + 1, VAR_11 + 2, VAR_11 + 3, VAR_11 + 4, VAR_11 + 5);

  if(VAR_12 >=VAR_5->minFields)
  {
   if(VAR_5->idxYear && (VAR_5->idxYear <= VAR_12))
   {
    VAR_4 = VAR_11[VAR_5->idxYear - 1] >= 1900;
    if(!VAR_4)
     continue;
   }

   if(VAR_5->idxMonth && (VAR_5->idxMonth <= VAR_12))
   {
    VAR_4 = VAR_11[VAR_5->idxMonth - 1] <= 12;
    if(!VAR_4)
     continue;
   }

   if(VAR_5->idxDay && (VAR_5->idxDay <= VAR_12))
   {
    VAR_4 = VAR_11[VAR_5->idxDay - 1] <= 31;
    if(!VAR_4)
     continue;
   }

   if(VAR_5->idxHour && (VAR_5->idxHour <= VAR_12))
   {
    VAR_4 = VAR_11[VAR_5->idxHour - 1] <= 23;
    if(!VAR_4)
     continue;
   }

   if(VAR_5->idxMinute && (VAR_5->idxMinute <= VAR_12))
   {
    VAR_4 = VAR_11[VAR_5->idxMinute - 1] <= 59;
    if(!VAR_4)
     continue;
   }

   if(VAR_5->idxSecond && (VAR_5->idxSecond <= VAR_12))
   {
    VAR_4 = VAR_11[VAR_5->idxSecond - 1] <= 59;
    if(!VAR_4)
     continue;
   }
  }
 }

 if(VAR_4)
 {
  VAR_4 = VAR_0;
  VAR_10--;
  FUNC_3(&VAR_7);
  if(FUNC_1(&VAR_7, &VAR_8))
  {
   VAR_9 = *((PULONGLONG) &VAR_8) - *((PULONGLONG) &VAR_7);
   if(FUNC_2(&VAR_8, &VAR_6))
   {
    VAR_6.wDayOfWeek = 0;
    VAR_6.wMilliseconds = 0;

    if(VAR_5->idxYear && (VAR_5->idxYear <= VAR_12))
     VAR_6.wYear = VAR_11[VAR_5->idxYear - 1];
    if(VAR_5->idxMonth && (VAR_5->idxMonth <= VAR_12))
     VAR_6.wMonth = VAR_11[VAR_5->idxMonth - 1];
    if(VAR_5->idxDay && (VAR_5->idxDay <= VAR_12))
     VAR_6.wDay = VAR_11[VAR_5->idxDay - 1];
    if(VAR_5->idxHour && (VAR_5->idxHour <= VAR_12))
     VAR_6.wHour = VAR_11[VAR_5->idxHour - 1];
    if(VAR_5->idxMinute && (VAR_5->idxMinute <= VAR_12))
     VAR_6.wMinute = VAR_11[VAR_5->idxMinute - 1];
    if(VAR_5->idxSecond && (VAR_5->idxSecond <= VAR_12))
     VAR_6.wSecond = VAR_11[VAR_5->idxSecond - 1];

    if((VAR_4 = FUNC_5(&VAR_6, &VAR_7)))
    {
     *((PULONGLONG) &VAR_7) -= VAR_9;
     *VAR_3 = VAR_7;
    }
   }
  }

 }
 return VAR_4;
}
