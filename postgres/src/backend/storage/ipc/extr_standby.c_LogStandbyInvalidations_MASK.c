
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_3__ {int relcacheInitFileInval; int nmsgs; int tsId; int dbId; } ;
typedef TYPE_1__ xl_invalidations ;
typedef int SharedInvalidationMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(int VAR_5, SharedInvalidationMessage *VAR_6,
      bool VAR_7)
{
 xl_invalidations VAR_8;


 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.dbId = VAR_1;
 VAR_8.tsId = VAR_2;
 VAR_8.relcacheInitFileInval = VAR_7;
 VAR_8.nmsgs = VAR_5;


 FUNC_0();
 FUNC_2((char *) (&VAR_8), VAR_0);
 FUNC_2((char *) VAR_6,
      VAR_5 * sizeof(SharedInvalidationMessage));
 FUNC_1(VAR_3, VAR_4);
}
