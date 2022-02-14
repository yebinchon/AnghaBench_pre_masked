
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {scalar_t__ relkind; int reltype; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int ObjectAddresses ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ,int ,int *,int ) ;
 int FUNC_4 (int ,int ,int,int,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_8 (int ,int ) ;

void
FUNC_9(Relation VAR_6, Oid VAR_7, Oid VAR_8,
       ObjectAddresses *VAR_9)
{
 Relation VAR_10;

 FUNC_5(VAR_9 != ((void*)0));


 VAR_10 = FUNC_8(VAR_4, VAR_5);

 FUNC_2(VAR_10, FUNC_6(VAR_6), VAR_7,
           VAR_8, 1, VAR_9);


 FUNC_4(VAR_6->rd_rel->reltype,
          VAR_8, 0, 0, VAR_9);


 if (VAR_6->rd_rel->relkind == VAR_3 ||
  VAR_6->rd_rel->relkind == VAR_1 ||
  VAR_6->rd_rel->relkind == VAR_2)
 {
  FUNC_1(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_3(VAR_10, VAR_6, VAR_7, VAR_8,
         VAR_9, VAR_0);
  FUNC_0(FUNC_6(VAR_6), VAR_7, VAR_8,
          0, VAR_9);
 }

 FUNC_7(VAR_10, VAR_5);
}
