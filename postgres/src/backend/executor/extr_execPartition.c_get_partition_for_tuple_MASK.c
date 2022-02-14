
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_13__ {int* indexes; int null_index; int default_index; } ;
struct TYPE_12__ {TYPE_4__* boundinfo; } ;
struct TYPE_11__ {TYPE_3__* partdesc; TYPE_1__* key; } ;
struct TYPE_10__ {int strategy; int partnatts; int partcollation; int partsupfunc; } ;
typedef TYPE_1__* PartitionKey ;
typedef TYPE_2__* PartitionDispatch ;
typedef TYPE_3__* PartitionDesc ;
typedef TYPE_4__* PartitionBoundInfo ;
typedef int Datum ;


 int VAR_0 ;



 int FUNC_0 (int,int ,int ,int *,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,TYPE_4__*,int ,int*) ;
 int FUNC_5 (int ,int ,TYPE_4__*,int,int *,int*) ;

__attribute__((used)) static int
FUNC_6(PartitionDispatch VAR_1, Datum *VAR_2, bool *VAR_3)
{
 int VAR_4;
 int VAR_5 = -1;
 PartitionKey VAR_6 = VAR_1->key;
 PartitionDesc VAR_7 = VAR_1->partdesc;
 PartitionBoundInfo VAR_8 = VAR_7->boundinfo;


 switch (VAR_6->strategy)
 {
  case 130:
   {
    int VAR_9;
    uint64 VAR_10;

    VAR_9 = FUNC_2(VAR_8);
    VAR_10 = FUNC_0(VAR_6->partnatts,
                VAR_6->partsupfunc,
                VAR_6->partcollation,
                VAR_2, VAR_3);

    VAR_5 = VAR_8->indexes[VAR_10 % VAR_9];
   }
   break;

  case 129:
   if (VAR_3[0])
   {
    if (FUNC_3(VAR_8))
     VAR_5 = VAR_8->null_index;
   }
   else
   {
    bool VAR_11 = 0;

    VAR_4 = FUNC_4(VAR_6->partsupfunc,
               VAR_6->partcollation,
               VAR_8,
               VAR_2[0], &VAR_11);
    if (VAR_4 >= 0 && VAR_11)
     VAR_5 = VAR_8->indexes[VAR_4];
   }
   break;

  case 128:
   {
    bool VAR_12 = 0,
       VAR_13 = 0;
    int VAR_14;





    for (VAR_14 = 0; VAR_14 < VAR_6->partnatts; VAR_14++)
    {
     if (VAR_3[VAR_14])
     {
      VAR_13 = 1;
      break;
     }
    }

    if (!VAR_13)
    {
     VAR_4 = FUNC_5(VAR_6->partsupfunc,
                 VAR_6->partcollation,
                 VAR_8,
                 VAR_6->partnatts,
                 VAR_2,
                 &VAR_12);







     VAR_5 = VAR_8->indexes[VAR_4 + 1];
    }
   }
   break;

  default:
   FUNC_1(VAR_0, "unexpected partition strategy: %d",
     (int) VAR_6->strategy);
 }





 if (VAR_5 < 0)
  VAR_5 = VAR_8->default_index;

 return VAR_5;
}
