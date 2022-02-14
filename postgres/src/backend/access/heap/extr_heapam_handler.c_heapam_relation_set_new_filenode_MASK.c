
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {TYPE_1__* rd_rel; } ;
struct TYPE_4__ {scalar_t__ relkind; } ;
typedef int SMgrRelation ;
typedef TYPE_2__* Relation ;
typedef int RelFileNode ;
typedef int MultiXactId ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int const,char) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(Relation VAR_6,
         const RelFileNode *VAR_7,
         char VAR_8,
         TransactionId *VAR_9,
         MultiXactId *VAR_10)
{
 SMgrRelation VAR_11;






 *VAR_9 = VAR_5;
 *VAR_10 = FUNC_1();

 VAR_11 = FUNC_2(*VAR_7, VAR_8);
 if (VAR_8 == VAR_4)
 {
  FUNC_0(VAR_6->rd_rel->relkind == VAR_2 ||
      VAR_6->rd_rel->relkind == VAR_1 ||
      VAR_6->rd_rel->relkind == VAR_3);
  FUNC_5(VAR_11, VAR_0, 0);
  FUNC_3(VAR_7, VAR_0);
  FUNC_6(VAR_11, VAR_0);
 }

 FUNC_4(VAR_11);
}
