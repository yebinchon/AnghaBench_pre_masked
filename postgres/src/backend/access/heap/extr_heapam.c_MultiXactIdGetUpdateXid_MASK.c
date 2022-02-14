
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef scalar_t__ TransactionId ;
struct TYPE_4__ {scalar_t__ xid; int status; } ;
typedef TYPE_1__ MultiXactMember ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__**,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static TransactionId
FUNC_4(TransactionId VAR_3, uint16 VAR_4)
{
 TransactionId VAR_5 = VAR_2;
 MultiXactMember *VAR_6;
 int VAR_7;

 FUNC_0(!(VAR_4 & VAR_1));
 FUNC_0(VAR_4 & VAR_0);





 VAR_7 = FUNC_1(VAR_3, &VAR_6, 0, 0);

 if (VAR_7 > 0)
 {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  {

   if (!FUNC_2(VAR_6[VAR_8].status))
    continue;


   FUNC_0(VAR_5 == VAR_2);
   VAR_5 = VAR_6[VAR_8].xid;






   break;

  }

  FUNC_3(VAR_6);
 }

 return VAR_5;
}
