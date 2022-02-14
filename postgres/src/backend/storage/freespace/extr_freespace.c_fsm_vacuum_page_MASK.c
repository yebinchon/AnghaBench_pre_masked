
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_11__ {scalar_t__ level; scalar_t__ logpageno; } ;
struct TYPE_10__ {scalar_t__ fp_next_slot; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* FSMPage ;
typedef TYPE_2__ FSMAddress ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int) ;
 TYPE_2__ FUNC_9 (TYPE_2__,int) ;
 TYPE_2__ FUNC_10 (int ,int*) ;
 int FUNC_11 (int ) ;
 TYPE_2__ FUNC_12 (TYPE_2__,int*) ;
 int FUNC_13 (int ,TYPE_2__,int) ;
 int FUNC_14 (int ,int,int) ;

__attribute__((used)) static uint8
FUNC_15(Relation VAR_4, FSMAddress VAR_5,
    BlockNumber VAR_6, BlockNumber VAR_7,
    bool *VAR_8)
{
 Buffer VAR_9;
 Page VAR_10;
 uint8 VAR_11;


 VAR_9 = FUNC_13(VAR_4, VAR_5, 0);
 if (!FUNC_2(VAR_9))
 {
  *VAR_8 = 1;
  return 0;
 }
 else
  *VAR_8 = 0;

 VAR_10 = FUNC_1(VAR_9);





 if (VAR_5.level > VAR_2)
 {
  FSMAddress VAR_12,
     VAR_13;
  uint16 VAR_14,
     VAR_15;
  int VAR_16,
     VAR_17,
     VAR_18;
  bool VAR_19 = 0;
  VAR_12 = FUNC_10(VAR_6, &VAR_14);
  VAR_13 = FUNC_10(VAR_7 - 1, &VAR_15);

  while (VAR_12.level < VAR_5.level)
  {
   VAR_12 = FUNC_12(VAR_12, &VAR_14);
   VAR_13 = FUNC_12(VAR_13, &VAR_15);
  }
  FUNC_0(VAR_12.level == VAR_5.level);

  if (VAR_12.logpageno == VAR_5.logpageno)
   VAR_17 = VAR_14;
  else if (VAR_12.logpageno > VAR_5.logpageno)
   VAR_17 = VAR_3;
  else
   VAR_17 = 0;

  if (VAR_13.logpageno == VAR_5.logpageno)
   VAR_18 = VAR_15;
  else if (VAR_13.logpageno > VAR_5.logpageno)
   VAR_18 = VAR_3 - 1;
  else
   VAR_18 = -1;

  for (VAR_16 = VAR_17; VAR_16 <= VAR_18; VAR_16++)
  {
   int VAR_20;

   FUNC_3();


   if (!VAR_19)
    VAR_20 = FUNC_15(VAR_4, FUNC_9(VAR_5, VAR_16),
             VAR_6, VAR_7,
             &VAR_19);
   else
    VAR_20 = 0;


   if (FUNC_8(VAR_10, VAR_16) != VAR_20)
   {
    FUNC_4(VAR_9, VAR_0);
    FUNC_14(VAR_10, VAR_16, VAR_20);
    FUNC_5(VAR_9, 0);
    FUNC_4(VAR_9, VAR_1);
   }
  }
 }


 VAR_11 = FUNC_11(VAR_10);







 ((FSMPage) FUNC_6(VAR_10))->fp_next_slot = 0;

 FUNC_7(VAR_9);

 return VAR_11;
}
