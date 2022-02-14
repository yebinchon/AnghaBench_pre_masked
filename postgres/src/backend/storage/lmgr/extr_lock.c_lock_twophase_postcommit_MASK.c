
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_5__ {size_t locktag_lockmethodid; } ;
struct TYPE_4__ {int lockmode; TYPE_2__ locktag; } ;
typedef TYPE_1__ TwoPhaseLockRecord ;
typedef int TransactionId ;
typedef int PGPROC ;
typedef int LockMethod ;
typedef TYPE_2__ LOCKTAG ;
typedef size_t LOCKMETHODID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *,TYPE_2__*,int ,int) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,size_t) ;
 size_t FUNC_4 (int *) ;

void
FUNC_5(TransactionId VAR_2, uint16 VAR_3,
       void *VAR_4, uint32 VAR_5)
{
 TwoPhaseLockRecord *VAR_6 = (TwoPhaseLockRecord *) VAR_4;
 PGPROC *VAR_7 = FUNC_2(VAR_2, 1);
 LOCKTAG *VAR_8;
 LOCKMETHODID VAR_9;
 LockMethod VAR_10;

 FUNC_0(VAR_5 == sizeof(TwoPhaseLockRecord));
 VAR_8 = &VAR_6->locktag;
 VAR_9 = VAR_8->locktag_lockmethodid;

 if (VAR_9 <= 0 || VAR_9 >= FUNC_4(VAR_1))
  FUNC_3(VAR_0, "unrecognized lock method: %d", VAR_9);
 VAR_10 = VAR_1[VAR_9];

 FUNC_1(VAR_10, VAR_7, VAR_8, VAR_6->lockmode, 1);
}
