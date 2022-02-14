
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pg_on_exit_callback ;
struct TYPE_2__ {int arg; int function; } ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4(pg_on_exit_callback VAR_7, Datum VAR_8)
{
 if (VAR_5 >= VAR_2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("out of before_shmem_exit slots")));

 VAR_6[VAR_5].function = VAR_7;
 VAR_6[VAR_5].arg = VAR_8;

 ++VAR_5;

 if (!VAR_4)
 {
  FUNC_0(VAR_3);
  VAR_4 = 1;
 }
}
