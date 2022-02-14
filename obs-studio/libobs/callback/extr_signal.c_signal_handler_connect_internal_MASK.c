
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct signal_info {int mutex; int callbacks; } ;
struct signal_callback {void* member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_4__ {int refs; int mutex; } ;
typedef TYPE_1__ signal_handler_t ;
typedef int signal_callback_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,struct signal_callback*) ;
 struct signal_info* FUNC_2 (TYPE_1__*,char const*,struct signal_info**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct signal_info*,int ,void*) ;

__attribute__((used)) static void FUNC_7(signal_handler_t *VAR_2,
         const char *VAR_3,
         signal_callback_t VAR_4,
         void *VAR_5, bool VAR_6)
{
 struct signal_info *VAR_7, *VAR_8;
 struct signal_callback VAR_9 = {VAR_4, VAR_5, 0, VAR_6};
 size_t VAR_10;

 if (!VAR_2)
  return;

 FUNC_4(&VAR_2->mutex);
 VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_8);
 FUNC_5(&VAR_2->mutex);

 if (!VAR_7) {
  FUNC_0(VAR_1,
       "signal_handler_connect: "
       "signal '%s' not found",
       VAR_3);
  return;
 }



 FUNC_4(&VAR_7->mutex);

 if (VAR_6)
  FUNC_3(&VAR_2->refs);

 VAR_10 = FUNC_6(VAR_7, VAR_4, VAR_5);
 if (VAR_6 || VAR_10 == VAR_0)
  FUNC_1(VAR_7->callbacks, &VAR_9);

 FUNC_5(&VAR_7->mutex);
}
