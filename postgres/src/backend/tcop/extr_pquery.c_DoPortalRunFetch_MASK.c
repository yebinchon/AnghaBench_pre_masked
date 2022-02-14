
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_10__ {scalar_t__ mydest; } ;
struct TYPE_9__ {scalar_t__ strategy; int portalPos; scalar_t__ atEnd; int atStart; } ;
typedef TYPE_1__* Portal ;
typedef int FetchDirection ;
typedef TYPE_2__ DestReceiver ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

 long VAR_2 ;



 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_1__*,int,long,TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static uint64
FUNC_4(Portal VAR_9,
     FetchDirection VAR_10,
     long VAR_11,
     DestReceiver *VAR_12)
{
 bool VAR_13;

 FUNC_0(VAR_9->strategy == VAR_7 ||
     VAR_9->strategy == VAR_6 ||
     VAR_9->strategy == VAR_5 ||
     VAR_9->strategy == VAR_8);

 switch (VAR_10)
 {
  case 129:
   if (VAR_11 < 0)
   {
    VAR_10 = 130;
    VAR_11 = -VAR_11;
   }

   break;
  case 130:
   if (VAR_11 < 0)
   {
    VAR_10 = 129;
    VAR_11 = -VAR_11;
   }

   break;
  case 131:
   if (VAR_11 > 0)
   {
    if ((uint64) (VAR_11 - 1) <= VAR_9->portalPos / 2 ||
     VAR_9->portalPos >= (uint64) VAR_3)
    {
     FUNC_1(VAR_9);
     if (VAR_11 > 1)
      FUNC_2(VAR_9, 1, VAR_11 - 1,
          VAR_4);
    }
    else
    {
     long VAR_14 = (long) VAR_9->portalPos;

     if (VAR_9->atEnd)
      VAR_14++;
     if (VAR_11 <= VAR_14)
      FUNC_2(VAR_9, 0, VAR_14 - VAR_11 + 1,
          VAR_4);
     else if (VAR_11 > VAR_14 + 1)
      FUNC_2(VAR_9, 1, VAR_11 - VAR_14 - 1,
          VAR_4);
    }
    return FUNC_2(VAR_9, 1, 1L, VAR_12);
   }
   else if (VAR_11 < 0)
   {







    FUNC_2(VAR_9, 1, VAR_2, VAR_4);
    if (VAR_11 < -1)
     FUNC_2(VAR_9, 0, -VAR_11 - 1, VAR_4);
    return FUNC_2(VAR_9, 0, 1L, VAR_12);
   }
   else
   {


    FUNC_1(VAR_9);
    return FUNC_2(VAR_9, 1, 0L, VAR_12);
   }
   break;
  case 128:
   if (VAR_11 > 0)
   {



    if (VAR_11 > 1)
     FUNC_2(VAR_9, 1, VAR_11 - 1, VAR_4);
    return FUNC_2(VAR_9, 1, 1L, VAR_12);
   }
   else if (VAR_11 < 0)
   {




    if (VAR_11 < -1)
     FUNC_2(VAR_9, 0, -VAR_11 - 1, VAR_4);
    return FUNC_2(VAR_9, 0, 1L, VAR_12);
   }
   else
   {


    VAR_10 = 129;
   }
   break;
  default:
   FUNC_3(VAR_1, "bogus direction");
   break;
 }





 VAR_13 = (VAR_10 == 129);




 if (VAR_11 == 0)
 {
  bool VAR_15;


  VAR_15 = (!VAR_9->atStart && !VAR_9->atEnd);

  if (VAR_12->mydest == VAR_0)
  {

   return VAR_15 ? 1 : 0;
  }
  else
  {







   if (VAR_15)
   {
    FUNC_2(VAR_9, 0, 1L, VAR_4);

    VAR_11 = 1;
    VAR_13 = 1;
   }
  }
 }




 if (!VAR_13 && VAR_11 == VAR_2 && VAR_12->mydest == VAR_0)
 {
  uint64 VAR_16 = VAR_9->portalPos;

  if (VAR_16 > 0 && !VAR_9->atEnd)
   VAR_16--;
  FUNC_1(VAR_9);
  return VAR_16;
 }

 return FUNC_2(VAR_9, VAR_13, VAR_11, VAR_12);
}
