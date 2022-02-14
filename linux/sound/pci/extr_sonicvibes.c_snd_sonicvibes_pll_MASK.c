
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,...) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_4,
          unsigned int *VAR_5,
          unsigned int *VAR_6,
          unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = ~0U;

 if (VAR_4 < 625000 / VAR_0)
  VAR_4 = 625000 / VAR_0;
 if (VAR_4 > 150000000 / VAR_0)
  VAR_4 = 150000000 / VAR_0;

 for (VAR_8 = 0; VAR_4 < 75000000 / VAR_0; VAR_8 += 0x20, VAR_4 <<= 1);
 for (VAR_12 = 3; VAR_12 < 33; VAR_12++)
  for (VAR_11 = 3; VAR_11 < 257; VAR_11++) {
   VAR_13 = ((VAR_1 / VAR_0) * VAR_11) / VAR_12;
   if (VAR_13 >= VAR_4)
    VAR_14 = VAR_13 - VAR_4;
   else
    VAR_14 = VAR_4 - VAR_13;
   if (VAR_14 < VAR_15) {
    VAR_15 = VAR_14;
    VAR_9 = VAR_11 - 2;
    VAR_10 = VAR_12 - 2;
   }
  }
 *VAR_5 = VAR_8;
 *VAR_6 = VAR_9;
 *VAR_7 = VAR_10;






}
