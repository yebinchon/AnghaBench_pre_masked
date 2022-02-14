
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_2__ {void* tailXid; scalar_t__ headPage; void* headXid; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (void*,void*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*,void*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_7(TransactionId VAR_4)
{
 FUNC_1(VAR_2, VAR_1);







 if (!FUNC_5(VAR_4))
 {
  VAR_3->tailXid = VAR_0;
  VAR_3->headXid = VAR_0;
  FUNC_2(VAR_2);
  return;
 }







 if (FUNC_3())
 {
  FUNC_0(VAR_3->headPage < 0);
  if (!FUNC_5(VAR_3->tailXid)
   || FUNC_6(VAR_4, VAR_3->tailXid))
  {
   VAR_3->tailXid = VAR_4;
  }
  FUNC_2(VAR_2);
  return;
 }

 FUNC_0(!FUNC_5(VAR_3->tailXid)
     || FUNC_4(VAR_4, VAR_3->tailXid));

 VAR_3->tailXid = VAR_4;

 FUNC_2(VAR_2);
}
