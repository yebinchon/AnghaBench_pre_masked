
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_scs1x {int error; int transaction_running; int work; scalar_t__ transaction_bytes; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1, int VAR_2,
          void *VAR_3, size_t VAR_4, void *VAR_5)
{
 struct fw_scs1x *VAR_6 = VAR_5;

 if (!FUNC_0(VAR_2)) {

  if (VAR_2 == VAR_0)
   VAR_6->transaction_bytes = 0;
 } else {
  VAR_6->error = 1;
 }

 VAR_6->transaction_running = 0;
 FUNC_1(&VAR_6->work);
}
