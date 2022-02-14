
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int lp_off; } ;
struct TYPE_14__ {scalar_t__ pd_lower; scalar_t__ pd_upper; unsigned int pd_special; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__* PageHeader ;
typedef TYPE_1__* Page ;
typedef int OffsetNumber ;
typedef TYPE_3__* ItemId ;
typedef int Item ;


 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,unsigned int,scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,unsigned int,unsigned int,...) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 int FUNC_14 (char*,char*,int) ;

bool
FUNC_15(Page VAR_5, OffsetNumber VAR_6,
      Item VAR_7, Size VAR_8)
{
 PageHeader VAR_9 = (PageHeader) VAR_5;
 ItemId VAR_10;
 int VAR_11;
 unsigned VAR_12;
 Size VAR_13;
 int VAR_14;
 int VAR_15;




 if (VAR_9->pd_lower < VAR_4 ||
  VAR_9->pd_lower > VAR_9->pd_upper ||
  VAR_9->pd_upper > VAR_9->pd_special ||
  VAR_9->pd_special > VAR_0 ||
  VAR_9->pd_special != FUNC_5(VAR_9->pd_special))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("corrupted page pointers: lower = %u, upper = %u, special = %u",
      VAR_9->pd_lower, VAR_9->pd_upper, VAR_9->pd_special)));

 VAR_15 = FUNC_8(VAR_5);
 if ((int) VAR_6 <= 0 || (int) VAR_6 > VAR_15)
  FUNC_9(VAR_2, "invalid index offnum: %u", VAR_6);

 VAR_10 = FUNC_7(VAR_5, VAR_6);
 FUNC_0(FUNC_3(VAR_10));
 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = FUNC_2(VAR_10);

 if (VAR_12 < VAR_9->pd_upper || (VAR_12 + VAR_11) > VAR_9->pd_special ||
  VAR_12 != FUNC_5(VAR_12))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("corrupted line pointer: offset = %u, size = %u",
      VAR_12, (unsigned int) VAR_11)));




 VAR_11 = FUNC_5(VAR_11);
 VAR_13 = FUNC_5(VAR_8);
 if (VAR_13 > VAR_11 + (VAR_9->pd_upper - VAR_9->pd_lower))
  return 0;
 VAR_14 = VAR_11 - (int) VAR_13;
 if (VAR_14 != 0)
 {
  char *VAR_16 = (char *) VAR_5 + VAR_9->pd_upper;
  int VAR_17;


  FUNC_14(VAR_16 + VAR_14, VAR_16, VAR_12 - VAR_9->pd_upper);


  VAR_9->pd_upper += VAR_14;


  for (VAR_17 = VAR_3; VAR_17 <= VAR_15; VAR_17++)
  {
   ItemId VAR_18 = FUNC_7(VAR_9, VAR_17);


   if (FUNC_3(VAR_18) && FUNC_2(VAR_18) <= VAR_12)
    VAR_18->lp_off += VAR_14;
  }
 }


 FUNC_4(VAR_10, VAR_12 + VAR_14, VAR_8);


 FUNC_13(FUNC_6(VAR_5, VAR_10), VAR_7, VAR_8);

 return 1;
}
