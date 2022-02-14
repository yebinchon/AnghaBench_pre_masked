
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_9__ {int strategy; int status; int holdStore; int portalContext; scalar_t__ resowner; int run_once; } ;
typedef scalar_t__ ResourceOwner ;
typedef TYPE_1__* Portal ;
typedef int MemoryContext ;
typedef int FetchDirection ;
typedef int DestReceiver ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,long,int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;



 int VAR_3 ;

 int VAR_4 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,char*) ;

uint64
FUNC_13(Portal VAR_5,
      FetchDirection VAR_6,
      long VAR_7,
      DestReceiver *VAR_8)
{
 uint64 VAR_9;
 Portal VAR_10;
 ResourceOwner VAR_11;
 MemoryContext VAR_12;
 MemoryContext VAR_13;

 FUNC_1(FUNC_11(VAR_5));




 FUNC_4(VAR_5);


 FUNC_0(!VAR_5->run_once);




 VAR_10 = VAR_0;
 VAR_11 = VAR_1;
 VAR_12 = VAR_4;
 FUNC_10();
 {
  VAR_0 = VAR_5;
  if (VAR_5->resowner)
   VAR_1 = VAR_5->resowner;
  VAR_4 = VAR_5->portalContext;

  VAR_13 = FUNC_6(VAR_4);

  switch (VAR_5->strategy)
  {
   case 129:
    VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
    break;

   case 130:
   case 131:
   case 128:





    if (!VAR_5->holdStore)
     FUNC_3(VAR_5, 0 );




    VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
    break;

   default:
    FUNC_12(VAR_2, "unsupported portal strategy");
    VAR_9 = 0;
    break;
  }
 }
 FUNC_7();
 {

  FUNC_5(VAR_5);


  VAR_0 = VAR_10;
  VAR_1 = VAR_11;
  VAR_4 = VAR_12;

  FUNC_9();
 }
 FUNC_8();

 FUNC_6(VAR_13);


 VAR_5->status = VAR_3;

 VAR_0 = VAR_10;
 VAR_1 = VAR_11;
 VAR_4 = VAR_12;

 return VAR_9;
}
