
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_7__ {int rd_smgr; TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

BlockNumber
FUNC_4(Relation VAR_1, ForkNumber VAR_2)
{
 switch (VAR_1->rd_rel->relkind)
 {
  case 130:
  case 135:
  case 133:

   FUNC_1(VAR_1);

   return FUNC_2(VAR_1->rd_smgr, VAR_2);

  case 131:
  case 129:
  case 134:
   {






    uint64 VAR_3;

    VAR_3 = FUNC_3(VAR_1, VAR_2);

    return (VAR_3 + (VAR_0 - 1)) / VAR_0;
   }
  case 128:
  case 137:
  case 136:
  case 132:
  default:
   FUNC_0(0);
   break;
 }

 return 0;
}
