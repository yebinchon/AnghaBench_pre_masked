
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bits8 ;
struct TYPE_9__ {TYPE_1__* bd_tupdesc; } ;
struct TYPE_8__ {int bt_info; int bt_blkno; } ;
struct TYPE_7__ {int natts; } ;
typedef int Size ;
typedef TYPE_2__ BrinTuple ;
typedef TYPE_3__ BrinDesc ;
typedef int BlockNumber ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int) ;

BrinTuple *
FUNC_3(BrinDesc *VAR_4, BlockNumber VAR_5, Size *VAR_6)
{
 Size VAR_7;
 Size VAR_8;
 BrinTuple *VAR_9;
 int VAR_10;
 bits8 *VAR_11;
 int VAR_12;


 VAR_7 = VAR_3;
 VAR_7 += FUNC_0(VAR_4->bd_tupdesc->natts * 2);
 VAR_7 = VAR_8 = FUNC_1(VAR_7);

 VAR_9 = FUNC_2(VAR_7);
 VAR_9->bt_blkno = VAR_5;
 VAR_9->bt_info = VAR_8;
 VAR_9->bt_info |= VAR_0 | VAR_1;

 VAR_11 = ((bits8 *) ((char *) VAR_9 + VAR_3)) - 1;
 VAR_12 = VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_4->bd_tupdesc->natts; VAR_10++)
 {
  if (VAR_12 != VAR_2)
   VAR_12 <<= 1;
  else
  {
   VAR_11 += 1;
   *VAR_11 = 0x0;
   VAR_12 = 1;
  }

  *VAR_11 |= VAR_12;
 }


 *VAR_6 = VAR_7;
 return VAR_9;
}
