
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_3__ {scalar_t__ blkno; int freeSpace; } ;
typedef TYPE_1__ SpGistLastUsedPage ;
typedef int SpGistCache ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,char*) ;
 int * FUNC_21 (int ) ;

Buffer
FUNC_22(Relation VAR_6, int VAR_7, int VAR_8, bool *VAR_9)
{
 SpGistCache *VAR_10 = FUNC_21(VAR_6);
 SpGistLastUsedPage *VAR_11;


 if (VAR_8 > VAR_5)
  FUNC_20(VAR_0, "desired SPGiST tuple size is too big");
 VAR_8 += FUNC_11(VAR_6,
            VAR_2);
 VAR_8 = FUNC_6(VAR_8, VAR_5);


 VAR_11 = FUNC_5(VAR_10, VAR_7);


 if (VAR_11->blkno == VAR_1)
 {
  *VAR_9 = 1;
  return FUNC_19(VAR_6, VAR_7);
 }


 FUNC_0(!FUNC_13(VAR_11->blkno));


 if (VAR_11->freeSpace >= VAR_8)
 {
  Buffer VAR_12;
  Page VAR_13;

  VAR_12 = FUNC_10(VAR_6, VAR_11->blkno);

  if (!FUNC_2(VAR_12))
  {



   FUNC_12(VAR_12);
   *VAR_9 = 1;
   return FUNC_19(VAR_6, VAR_7);
  }

  VAR_13 = FUNC_1(VAR_12);

  if (FUNC_9(VAR_13) || FUNC_15(VAR_13) || FUNC_8(VAR_13))
  {

   uint16 VAR_14 = 0;

   if (FUNC_3(VAR_7))
    VAR_14 |= VAR_3;
   if (FUNC_4(VAR_7))
    VAR_14 |= VAR_4;
   FUNC_14(VAR_12, VAR_14);
   VAR_11->freeSpace = FUNC_7(VAR_13) - VAR_8;
   *VAR_9 = 1;
   return VAR_12;
  }





  if ((FUNC_3(VAR_7) ? FUNC_16(VAR_13) : !FUNC_16(VAR_13)) &&
   (FUNC_4(VAR_7) ? FUNC_17(VAR_13) : !FUNC_17(VAR_13)))
  {
   int VAR_15 = FUNC_7(VAR_13);

   if (VAR_15 >= VAR_8)
   {

    VAR_11->freeSpace = VAR_15 - VAR_8;
    *VAR_9 = 0;
    return VAR_12;
   }
  }




  FUNC_18(VAR_12);
 }


 *VAR_9 = 1;
 return FUNC_19(VAR_6, VAR_7);
}
