
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {scalar_t__ locktag_lockmethodid; scalar_t__ locktag_type; int locktag_field2; int locktag_field1; } ;
struct TYPE_3__ {scalar_t__ lockmode; TYPE_2__ locktag; } ;
typedef TYPE_1__ TwoPhaseLockRecord ;
typedef int TransactionId ;
typedef TYPE_2__ LOCKTAG ;
typedef scalar_t__ LOCKMODE ;
typedef scalar_t__ LOCKMETHODID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(TransactionId VAR_4, uint16 VAR_5,
         void *VAR_6, uint32 VAR_7)
{
 TwoPhaseLockRecord *VAR_8 = (TwoPhaseLockRecord *) VAR_6;
 LOCKTAG *VAR_9;
 LOCKMODE VAR_10;
 LOCKMETHODID VAR_11;

 FUNC_0(VAR_7 == sizeof(TwoPhaseLockRecord));
 VAR_9 = &VAR_8->locktag;
 VAR_10 = VAR_8->lockmode;
 VAR_11 = VAR_9->locktag_lockmethodid;

 if (VAR_11 <= 0 || VAR_11 >= FUNC_3(VAR_3))
  FUNC_2(VAR_1, "unrecognized lock method: %d", VAR_11);

 if (VAR_10 == VAR_0 &&
  VAR_9->locktag_type == VAR_2)
 {
  FUNC_1(VAR_4,
            VAR_9->locktag_field1 ,
            VAR_9->locktag_field2 );
 }
}
