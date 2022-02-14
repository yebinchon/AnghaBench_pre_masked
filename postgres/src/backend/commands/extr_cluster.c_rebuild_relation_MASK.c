
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {char relpersistence; int reltablespace; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int MultiXactId ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int,int*,int *,int *) ;
 int FUNC_4 (int ,int ,int,int,int,int,int ,int ,char) ;
 int FUNC_5 (int ,int ,char,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_8(Relation VAR_2, Oid VAR_3, bool VAR_4)
{
 Oid VAR_5 = FUNC_2(VAR_2);
 Oid VAR_6 = VAR_2->rd_rel->reltablespace;
 Oid VAR_7;
 char VAR_8;
 bool VAR_9;
 bool VAR_10;
 TransactionId VAR_11;
 MultiXactId VAR_12;


 if (FUNC_1(VAR_3))
  FUNC_6(VAR_2, VAR_3, 1);


 VAR_8 = VAR_2->rd_rel->relpersistence;
 VAR_9 = FUNC_0(VAR_2);


 FUNC_7(VAR_2, VAR_1);


 VAR_7 = FUNC_5(VAR_5, VAR_6,
          VAR_8,
          VAR_0);


 FUNC_3(VAR_7, VAR_5, VAR_3, VAR_4,
     &VAR_10, &VAR_11, &VAR_12);





 FUNC_4(VAR_5, VAR_7, VAR_9,
      VAR_10, 0, 1,
      VAR_11, VAR_12,
      VAR_8);
}
