
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int RI_QueryKey ;
typedef int RI_QueryHashEntry ;
typedef int RI_ConstraintInfo ;
typedef int RI_CompareKey ;
typedef int RI_CompareHashEntry ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (char*,int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static void
FUNC_3(void)
{
 HASHCTL VAR_9;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(Oid);
 VAR_9.entrysize = sizeof(RI_ConstraintInfo);
 VAR_7 = FUNC_1("RI constraint cache",
           VAR_4,
           &VAR_9, VAR_2 | VAR_1);


 FUNC_0(VAR_0,
          VAR_3,
          (Datum) 0);

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(RI_QueryKey);
 VAR_9.entrysize = sizeof(RI_QueryHashEntry);
 VAR_8 = FUNC_1("RI query cache",
         VAR_5,
         &VAR_9, VAR_2 | VAR_1);

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(RI_CompareKey);
 VAR_9.entrysize = sizeof(RI_CompareHashEntry);
 VAR_6 = FUNC_1("RI compare cache",
           VAR_5,
           &VAR_9, VAR_2 | VAR_1);
}
