
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {int func; } ;
struct cwt_wait {TYPE_1__ wait; struct work_struct* work; } ;
typedef int DECLARE_WAIT_QUEUE_HEAD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct work_struct*,int) ;
 int FUNC_1 (int *,int ,int,struct work_struct*) ;
 int FUNC_2 (struct work_struct*) ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct work_struct*) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct work_struct*,int,unsigned long*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct work_struct*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_14(struct work_struct *VAR_5, bool VAR_6)
{
 static DECLARE_WAIT_QUEUE_HEAD(VAR_7);
 unsigned long VAR_8;
 int VAR_9;

 do {
  VAR_9 = FUNC_10(VAR_5, VAR_6, &VAR_8);
  if (FUNC_11(VAR_9 == -VAR_0)) {
   struct cwt_wait VAR_10;

   FUNC_4(&VAR_10.wait);
   VAR_10.wait.func = VAR_3;
   VAR_10.work = VAR_5;

   FUNC_7(&VAR_7, &VAR_10.wait,
        VAR_2);
   if (FUNC_13(VAR_5))
    FUNC_8();
   FUNC_3(&VAR_7, &VAR_10.wait);
  }
 } while (FUNC_11(VAR_9 < 0));


 FUNC_6(VAR_5);
 FUNC_5(VAR_8);





 if (VAR_4)
  FUNC_0(VAR_5, 1);

 FUNC_2(VAR_5);






 FUNC_9();
 if (FUNC_12(&VAR_7))
  FUNC_1(&VAR_7, VAR_1, 1, VAR_5);

 return VAR_9;
}
