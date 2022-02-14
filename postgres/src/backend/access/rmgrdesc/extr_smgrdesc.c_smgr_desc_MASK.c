
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int blkno; int rnode; } ;
typedef TYPE_1__ xl_smgr_truncate ;
struct TYPE_4__ {int forkNum; int rnode; } ;
typedef TYPE_2__ xl_smgr_create ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;

void
FUNC_6(StringInfo VAR_4, XLogReaderState *VAR_5)
{
 char *VAR_6 = FUNC_0(VAR_5);
 uint8 VAR_7 = FUNC_1(VAR_5) & ~VAR_3;

 if (VAR_7 == VAR_1)
 {
  xl_smgr_create *VAR_8 = (xl_smgr_create *) VAR_6;
  char *VAR_9 = FUNC_5(VAR_8->rnode, VAR_8->forkNum);

  FUNC_3(VAR_4, VAR_9);
  FUNC_4(VAR_9);
 }
 else if (VAR_7 == VAR_2)
 {
  xl_smgr_truncate *VAR_10 = (xl_smgr_truncate *) VAR_6;
  char *VAR_11 = FUNC_5(VAR_10->rnode, VAR_0);

  FUNC_2(VAR_4, "%s to %u blocks flags %d", VAR_11,
       VAR_10->blkno, VAR_10->flags);
  FUNC_4(VAR_11);
 }
}
