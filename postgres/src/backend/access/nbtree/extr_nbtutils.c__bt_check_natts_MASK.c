
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_4__ {int t_info; int t_tid; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__* IndexTuple ;
typedef int BTPageOpaque ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,char*) ;

bool
FUNC_15(Relation VAR_5, bool VAR_6, Page VAR_7, OffsetNumber VAR_8)
{
 int16 VAR_9 = FUNC_3(VAR_5);
 int16 VAR_10 = FUNC_4(VAR_5);
 BTPageOpaque VAR_11 = (BTPageOpaque) FUNC_13(VAR_7);
 IndexTuple VAR_12;
 int VAR_13;





 if (FUNC_7(VAR_11))
  return 1;

 FUNC_0(VAR_8 >= VAR_1 &&
     VAR_8 <= FUNC_12(VAR_7));





 FUNC_14(VAR_0 >= VAR_3,
      "BT_N_KEYS_OFFSET_MASK can't fit INDEX_MAX_KEYS");

 VAR_12 = (IndexTuple) FUNC_10(VAR_7, FUNC_11(VAR_7, VAR_8));
 VAR_13 = FUNC_2(VAR_12, VAR_5);

 if (FUNC_8(VAR_11))
 {
  if (VAR_8 >= FUNC_6(VAR_11))
  {




   if ((VAR_12->t_info & VAR_2) != 0)
    return 0;







   return VAR_13 == VAR_9;
  }
  else
  {




   FUNC_0(!FUNC_9(VAR_11));






   if (!VAR_6)
    return VAR_13 == VAR_10;


  }
 }
 else
 {
  if (VAR_8 == FUNC_6(VAR_11))
  {






   if (VAR_6)
    return VAR_13 == 0;
   return VAR_13 == 0 ||
    ((VAR_12->t_info & VAR_2) == 0 &&
     FUNC_5(&(VAR_12->t_tid)) == VAR_4);
  }
  else
  {






   if (!VAR_6)
    return VAR_13 == VAR_10;


  }

 }


 FUNC_0(VAR_6);






 if ((VAR_12->t_info & VAR_2) == 0)
  return 0;





 if (FUNC_1(VAR_12) != ((void*)0) && VAR_13 != VAR_10)
  return 0;







 return VAR_13 > 0 && VAR_13 <= VAR_10;
}
