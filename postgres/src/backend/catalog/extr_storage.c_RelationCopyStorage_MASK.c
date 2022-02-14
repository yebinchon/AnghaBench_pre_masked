
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_10__ {int node; int backend; } ;
struct TYPE_11__ {TYPE_1__ smgr_rnode; } ;
typedef TYPE_2__* SMgrRelation ;
typedef scalar_t__ Page ;
typedef TYPE_3__ PGAlignedBlock ;
typedef scalar_t__ ForkNumber ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 char VAR_3 ;
 char VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__,int ) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_13(SMgrRelation VAR_5, SMgrRelation VAR_6,
     ForkNumber VAR_7, char VAR_8)
{
 PGAlignedBlock VAR_9;
 Page VAR_10;
 bool VAR_11;
 bool VAR_12;
 BlockNumber VAR_13;
 BlockNumber VAR_14;

 VAR_10 = (Page) VAR_9.data;






 VAR_12 = VAR_8 == VAR_4 &&
  VAR_7 == VAR_2;





 VAR_11 = FUNC_3() &&
  (VAR_8 == VAR_3 || VAR_12);

 VAR_13 = FUNC_11(VAR_5, VAR_7);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
 {

  FUNC_0();

  FUNC_12(VAR_5, VAR_7, VAR_14, VAR_9.data);

  if (!FUNC_1(VAR_10, VAR_14))
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("invalid page in block %u of relation %s",
       VAR_14,
       FUNC_8(VAR_5->smgr_rnode.node,
             VAR_5->smgr_rnode.backend,
             VAR_7))));






  if (VAR_11)
   FUNC_7(&VAR_6->smgr_rnode.node, VAR_7, VAR_14, VAR_10, 0);

  FUNC_2(VAR_10, VAR_14);






  FUNC_9(VAR_6, VAR_7, VAR_14, VAR_9.data, 1);
 }
 if (VAR_8 == VAR_3 || VAR_12)
  FUNC_10(VAR_6, VAR_7);
}
