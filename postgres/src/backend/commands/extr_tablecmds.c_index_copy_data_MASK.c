
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* rd_rel; int rd_smgr; int rd_backend; } ;
struct TYPE_7__ {int relpersistence; } ;
typedef int SMgrRelation ;
typedef TYPE_2__* Relation ;
typedef int RelFileNode ;
typedef scalar_t__ ForkNumber ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(Relation VAR_5, RelFileNode VAR_6)
{
 SMgrRelation VAR_7;

 VAR_7 = FUNC_9(VAR_6, VAR_5->rd_backend);
 FUNC_4(VAR_5);







 FUNC_0(VAR_5);
 FUNC_2(VAR_6, VAR_5->rd_rel->relpersistence);


 FUNC_1(VAR_5->rd_smgr, VAR_7, VAR_1,
      VAR_5->rd_rel->relpersistence);


 for (ForkNumber VAR_8 = VAR_1 + 1;
   VAR_8 <= VAR_2; VAR_8++)
 {
  if (FUNC_8(VAR_5->rd_smgr, VAR_8))
  {
   FUNC_7(VAR_7, VAR_8, 0);





   if (VAR_5->rd_rel->relpersistence == VAR_3 ||
    (VAR_5->rd_rel->relpersistence == VAR_4 &&
     VAR_8 == VAR_0))
    FUNC_5(&VAR_6, VAR_8);
   FUNC_1(VAR_5->rd_smgr, VAR_7, VAR_8,
        VAR_5->rd_rel->relpersistence);
  }
 }


 FUNC_3(VAR_5);
 FUNC_6(VAR_7);
}
