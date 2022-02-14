
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef int (* WalSndSendDataCallback ) () ;
struct TYPE_2__ {scalar_t__ flush; scalar_t__ write; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(WalSndSendDataCallback VAR_5)
{
 XLogRecPtr VAR_6;


 VAR_5();






 VAR_6 = FUNC_2(VAR_1->flush) ?
  VAR_1->write : VAR_1->flush;

 if (VAR_2 && VAR_3 == VAR_6 &&
  !FUNC_4())
 {

  FUNC_0("COPY 0", VAR_0);
  FUNC_3();

  FUNC_5(0);
 }
 if (!VAR_4)
 {
  FUNC_1(1);
  VAR_4 = 1;
 }
}
