
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {int status; } ;
typedef TYPE_1__ MultiXactMember ;
typedef int MultiXactId ;
typedef scalar_t__ LockTupleMode ;


 int FUNC_0 (int ,TYPE_1__**,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;






 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(MultiXactId VAR_10, uint16 *VAR_11,
        uint16 *VAR_12)
{
 int VAR_13;
 MultiXactMember *VAR_14;
 int VAR_15;
 uint16 VAR_16 = VAR_2;
 uint16 VAR_17 = 0;
 bool VAR_18 = 0;
 LockTupleMode VAR_19 = VAR_7;





 VAR_13 = FUNC_0(VAR_10, &VAR_14, 0, 0);

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
 {
  LockTupleMode VAR_20;





  VAR_20 = FUNC_1(VAR_14[VAR_15].status);
  if (VAR_20 > VAR_19)
   VAR_19 = VAR_20;


  switch (VAR_14[VAR_15].status)
  {
   case 133:
   case 131:
   case 132:
    break;

   case 130:
    VAR_17 |= VAR_0;
    break;

   case 129:
    VAR_18 = 1;
    break;

   case 128:
    VAR_17 |= VAR_0;
    VAR_18 = 1;
    break;
  }
 }

 if (VAR_19 == VAR_6 ||
  VAR_19 == VAR_8)
  VAR_16 |= VAR_1;
 else if (VAR_19 == VAR_9)
  VAR_16 |= VAR_5;
 else if (VAR_19 == VAR_7)
  VAR_16 |= VAR_3;

 if (!VAR_18)
  VAR_16 |= VAR_4;

 if (VAR_13 > 0)
  FUNC_2(VAR_14);

 *VAR_11 = VAR_16;
 *VAR_12 = VAR_17;
}
