
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int smp_call_func_t ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ call_single_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*,int ,void*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (int *) ;

int FUNC_10(int VAR_4, smp_call_func_t VAR_5, void *VAR_6,
        int VAR_7)
{
 call_single_data_t *VAR_8;
 call_single_data_t VAR_9 = {
  .flags = VAR_0 | VAR_1,
 };
 int VAR_10;
 int VAR_11;





 VAR_10 = FUNC_5();







 FUNC_0(FUNC_1(VAR_10) && FUNC_7()
       && !VAR_3);







 FUNC_0(!FUNC_6());

 VAR_8 = &VAR_9;
 if (!VAR_7) {
  VAR_8 = FUNC_9(&VAR_2);
  FUNC_2(VAR_8);
 }

 VAR_11 = FUNC_4(VAR_4, VAR_8, VAR_5, VAR_6);

 if (VAR_7)
  FUNC_3(VAR_8);

 FUNC_8();

 return VAR_11;
}
