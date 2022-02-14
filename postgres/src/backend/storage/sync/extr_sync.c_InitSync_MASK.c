
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; } ;
typedef int PendingFsyncEntry ;
typedef TYPE_1__ HASHCTL ;
typedef int FileTag ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,long,TYPE_1__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_6(void)
{





 if (!VAR_4 || FUNC_2() || FUNC_1())
 {
  HASHCTL VAR_10;
  VAR_8 = FUNC_0(VAR_6,
             "Pending ops context",
             VAR_0);
  FUNC_4(VAR_8, 1);

  FUNC_3(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.keysize = sizeof(FileTag);
  VAR_10.entrysize = sizeof(PendingFsyncEntry);
  VAR_10.hcxt = VAR_8;
  VAR_7 = FUNC_5("Pending Ops Table",
         100L,
         &VAR_10,
         VAR_3 | VAR_1 | VAR_2);
  VAR_9 = VAR_5;
 }

}
