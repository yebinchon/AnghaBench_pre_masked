
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_4__ {scalar_t__ status; void* xid; } ;
typedef scalar_t__ MultiXactStatus ;
typedef TYPE_1__ MultiXactMember ;
typedef int MultiXactId ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int,TYPE_1__*) ;

MultiXactId
FUNC_8(TransactionId VAR_3, MultiXactStatus VAR_4,
      TransactionId VAR_5, MultiXactStatus VAR_6)
{
 MultiXactId VAR_7;
 MultiXactMember VAR_8[2];

 FUNC_1(FUNC_5(VAR_3));
 FUNC_1(FUNC_5(VAR_5));

 FUNC_0(!FUNC_4(VAR_3, VAR_5) || (VAR_4 != VAR_6));


 FUNC_0(FUNC_3(VAR_2[VAR_1]));







 VAR_8[0].xid = VAR_3;
 VAR_8[0].status = VAR_4;
 VAR_8[1].xid = VAR_5;
 VAR_8[1].status = VAR_6;

 VAR_7 = FUNC_2(2, VAR_8);

 FUNC_6(VAR_0, "Create: %s",
    FUNC_7(VAR_7, 2, VAR_8));

 return VAR_7;
}
