
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int TransactionId ;
struct TYPE_13__ {size_t pgprocno; int procArrayGroupMember; int sem; int procArrayGroupNext; int procArrayGroupMemberXid; } ;
struct TYPE_12__ {int xid; } ;
struct TYPE_11__ {int procArrayGroupFirst; } ;
typedef TYPE_1__ PROC_HDR ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_7 (int *,size_t*,size_t) ;
 size_t FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(PGPROC *VAR_8, TransactionId VAR_9)
{
 PROC_HDR *VAR_10 = VAR_4;
 uint32 VAR_11;
 uint32 VAR_12;


 FUNC_0(FUNC_6(VAR_6[VAR_8->pgprocno].xid));


 VAR_8->procArrayGroupMember = 1;
 VAR_8->procArrayGroupMemberXid = VAR_9;
 VAR_11 = FUNC_9(&VAR_10->procArrayGroupFirst);
 while (1)
 {
  FUNC_10(&VAR_8->procArrayGroupNext, VAR_11);

  if (FUNC_7(&VAR_10->procArrayGroupFirst,
             &VAR_11,
             (uint32) VAR_8->pgprocno))
   break;
 }







 if (VAR_11 != VAR_0)
 {
  int VAR_13 = 0;


  FUNC_13(VAR_5);
  for (;;)
  {

   FUNC_3(VAR_8->sem);
   if (!VAR_8->procArrayGroupMember)
    break;
   VAR_13++;
  }
  FUNC_12();

  FUNC_0(FUNC_9(&VAR_8->procArrayGroupNext) == VAR_0);


  while (VAR_13-- > 0)
   FUNC_4(VAR_8->sem);
  return;
 }


 FUNC_1(VAR_3, VAR_1);






 VAR_11 = FUNC_8(&VAR_10->procArrayGroupFirst,
          VAR_0);


 VAR_12 = VAR_11;


 while (VAR_11 != VAR_0)
 {
  PGPROC *VAR_14 = &VAR_7[VAR_11];
  PGXACT *VAR_15 = &VAR_6[VAR_11];

  FUNC_5(VAR_14, VAR_15, VAR_14->procArrayGroupMemberXid);


  VAR_11 = FUNC_9(&VAR_14->procArrayGroupNext);
 }


 FUNC_2(VAR_3);
 while (VAR_12 != VAR_0)
 {
  PGPROC *VAR_16 = &VAR_7[VAR_12];

  VAR_12 = FUNC_9(&VAR_16->procArrayGroupNext);
  FUNC_10(&VAR_16->procArrayGroupNext, VAR_0);


  FUNC_11();

  VAR_16->procArrayGroupMember = 0;

  if (VAR_16 != VAR_2)
   FUNC_4(VAR_16->sem);
 }
}
