
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int (* rDestroy ) (TYPE_2__*) ;} ;
struct TYPE_12__ {int strategy; int commandTag; int stmts; int holdContext; int holdStore; } ;
typedef TYPE_1__* Portal ;
typedef TYPE_2__ DestReceiver ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(Portal VAR_5, bool VAR_6)
{
 DestReceiver *VAR_7;
 char VAR_8[VAR_0];

 FUNC_1(VAR_5);
 VAR_7 = FUNC_0(VAR_1);
 FUNC_4(VAR_7,
         VAR_5->holdStore,
         VAR_5->holdContext,
         0);

 VAR_8[0] = '\0';

 switch (VAR_5->strategy)
 {
  case 129:
  case 130:







   FUNC_2(VAR_5, VAR_6, 1,
         VAR_7, VAR_3, VAR_8);
   break;

  case 128:
   FUNC_3(VAR_5, FUNC_6(VAR_4, VAR_5->stmts),
        VAR_6, 1, VAR_7, VAR_8);
   break;

  default:
   FUNC_5(VAR_2, "unsupported portal strategy: %d",
     (int) VAR_5->strategy);
   break;
 }


 if (VAR_8[0] != '\0')
  VAR_5->commandTag = FUNC_7(VAR_8);

 VAR_7->rDestroy(VAR_7);
}
