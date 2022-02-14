
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int info ;
struct TYPE_8__ {int mutex; } ;
struct TYPE_7__ {int keysize; int entrysize; void* num_partitions; int hash; } ;
typedef int PROCLOCKTAG ;
typedef int PROCLOCK ;
typedef int LOCKTAG ;
typedef int LOCK ;
typedef int LOCALLOCKTAG ;
typedef int LOCALLOCK ;
typedef TYPE_1__ HASHCTL ;
typedef int FastPathStrongRelationLockData ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 long FUNC_1 () ;
 void* VAR_8 ;
 void* FUNC_2 (char*,long,long,TYPE_1__*,int) ;
 TYPE_3__* FUNC_3 (char*,int,int*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,int,TYPE_1__*,int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_9 ;

void
FUNC_7(void)
{
 HASHCTL VAR_10;
 long VAR_11,
    VAR_12;
 bool VAR_13;





 VAR_12 = FUNC_1();
 VAR_11 = VAR_12 / 2;





 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.keysize = sizeof(LOCKTAG);
 VAR_10.entrysize = sizeof(LOCK);
 VAR_10.num_partitions = VAR_8;

 VAR_6 = FUNC_2("LOCK hash",
            VAR_11,
            VAR_12,
            &VAR_10,
            VAR_2 | VAR_1 | VAR_4);


 VAR_12 *= 2;
 VAR_11 *= 2;





 VAR_10.keysize = sizeof(PROCLOCKTAG);
 VAR_10.entrysize = sizeof(PROCLOCK);
 VAR_10.hash = VAR_9;
 VAR_10.num_partitions = VAR_8;

 VAR_7 = FUNC_2("PROCLOCK hash",
             VAR_11,
             VAR_12,
             &VAR_10,
             VAR_2 | VAR_3 | VAR_4);




 VAR_0 =
  FUNC_3("Fast Path Strong Relation Lock Data",
      sizeof(FastPathStrongRelationLockData), &VAR_13);
 if (!VAR_13)
  FUNC_4(&VAR_0->mutex);
 if (VAR_5)
  FUNC_6(VAR_5);

 VAR_10.keysize = sizeof(LOCALLOCKTAG);
 VAR_10.entrysize = sizeof(LOCALLOCK);

 VAR_5 = FUNC_5("LOCALLOCK hash",
           16,
           &VAR_10,
           VAR_2 | VAR_1);
}
