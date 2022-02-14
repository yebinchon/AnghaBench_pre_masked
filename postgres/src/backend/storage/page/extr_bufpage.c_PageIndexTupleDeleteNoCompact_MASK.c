
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {unsigned int lp_off; } ;
struct TYPE_13__ {scalar_t__ pd_lower; scalar_t__ pd_upper; scalar_t__ pd_special; } ;
typedef unsigned int Size ;
typedef TYPE_1__* PageHeader ;
typedef TYPE_1__* Page ;
typedef int OffsetNumber ;
typedef int ItemIdData ;
typedef TYPE_3__* ItemId ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 unsigned int FUNC_5 (unsigned int) ;
 TYPE_3__* FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,unsigned int,unsigned int,...) ;
 int FUNC_13 (char*,char*,unsigned int) ;

void
FUNC_14(Page VAR_4, OffsetNumber VAR_5)
{
 PageHeader VAR_6 = (PageHeader) VAR_4;
 char *VAR_7;
 ItemId VAR_8;
 Size VAR_9;
 unsigned VAR_10;
 int VAR_11;




 if (VAR_6->pd_lower < VAR_3 ||
  VAR_6->pd_lower > VAR_6->pd_upper ||
  VAR_6->pd_upper > VAR_6->pd_special ||
  VAR_6->pd_special > VAR_0 ||
  VAR_6->pd_special != FUNC_5(VAR_6->pd_special))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("corrupted page pointers: lower = %u, upper = %u, special = %u",
      VAR_6->pd_lower, VAR_6->pd_upper, VAR_6->pd_special)));

 VAR_11 = FUNC_7(VAR_4);
 if ((int) VAR_5 <= 0 || (int) VAR_5 > VAR_11)
  FUNC_9(VAR_2, "invalid index offnum: %u", VAR_5);

 VAR_8 = FUNC_6(VAR_4, VAR_5);
 FUNC_0(FUNC_3(VAR_8));
 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = FUNC_2(VAR_8);

 if (VAR_10 < VAR_6->pd_upper || (VAR_10 + VAR_9) > VAR_6->pd_special ||
  VAR_10 != FUNC_5(VAR_10))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("corrupted line pointer: offset = %u, size = %u",
      VAR_10, (unsigned int) VAR_9)));


 VAR_9 = FUNC_5(VAR_9);






 if ((int) VAR_5 < VAR_11)
  FUNC_4(VAR_8);
 else
 {
  VAR_6->pd_lower -= sizeof(ItemIdData);
  VAR_11--;
 }
 VAR_7 = (char *) VAR_4 + VAR_6->pd_upper;

 if (VAR_10 > VAR_6->pd_upper)
  FUNC_13(VAR_7 + VAR_9, VAR_7, VAR_10 - VAR_6->pd_upper);


 VAR_6->pd_upper += VAR_9;







 if (!FUNC_8(VAR_4))
 {
  int VAR_12;

  for (VAR_12 = 1; VAR_12 <= VAR_11; VAR_12++)
  {
   ItemId VAR_13 = FUNC_6(VAR_6, VAR_12);

   if (FUNC_3(VAR_13) && FUNC_2(VAR_13) <= VAR_10)
    VAR_13->lp_off += VAR_9;
  }
 }
}
