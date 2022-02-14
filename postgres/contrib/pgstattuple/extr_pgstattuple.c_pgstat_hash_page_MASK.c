
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int free_space; } ;
typedef TYPE_1__ pgstattuple_type ;
struct TYPE_6__ {int hasho_flag; } ;
typedef int Relation ;
typedef int Page ;
typedef int HashPageOpaqueData ;
typedef TYPE_2__* HashPageOpaque ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;

 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(pgstattuple_type *VAR_4, Relation VAR_5, BlockNumber VAR_6,
     BufferAccessStrategy VAR_7)
{
 Buffer VAR_8;
 Page VAR_9;

 VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_2, 0, VAR_7);
 VAR_9 = FUNC_0(VAR_8);

 if (FUNC_4(VAR_9) == FUNC_1(sizeof(HashPageOpaqueData)))
 {
  HashPageOpaque VAR_10;

  VAR_10 = (HashPageOpaque) FUNC_3(VAR_9);
  switch (VAR_10->hasho_flag & VAR_3)
  {
   case 128:
    VAR_4->free_space += VAR_0;
    break;
   case 131:
   case 129:
    FUNC_7(VAR_4, VAR_9, VAR_1,
          FUNC_2(VAR_9));
    break;
   case 132:
   case 130:
   default:
    break;
  }
 }
 else
 {

 }

 FUNC_6(VAR_5, VAR_8);
}
