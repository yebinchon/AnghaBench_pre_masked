
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numrefs; int * refs; } ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddresses ;
typedef int ObjectAddress ;
typedef int DropBehavior ;


 int FUNC_0 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int const*,int ,int,int *,TYPE_1__*,TYPE_1__ const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ,int,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8(const ObjectAddresses *VAR_3,
       DropBehavior VAR_4, int VAR_5)
{
 Relation VAR_6;
 ObjectAddresses *VAR_7;
 int VAR_8;


 if (VAR_3->numrefs <= 0)
  return;





 VAR_6 = FUNC_7(VAR_1, VAR_2);
 VAR_7 = FUNC_4();

 for (VAR_8 = 0; VAR_8 < VAR_3->numrefs; VAR_8++)
 {
  const ObjectAddress *VAR_9 = VAR_3->refs + VAR_8;





  FUNC_0(VAR_9, VAR_5);

  FUNC_2(VAR_9,
        VAR_0,
        VAR_5,
        ((void*)0),
        VAR_7,
        VAR_3,
        &VAR_6);
 }







 FUNC_5(VAR_7,
         VAR_4,
         VAR_5,
         (VAR_3->numrefs == 1 ? VAR_3->refs : ((void*)0)));


 FUNC_1(VAR_7, &VAR_6, VAR_5);


 FUNC_3(VAR_7);

 FUNC_6(VAR_6, VAR_2);
}
