
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int arg; int (* function ) (int,int ) ;} ;
struct TYPE_3__ {int arg; int (* function ) (int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

void
FUNC_4(int VAR_6)
{
 VAR_5 = 1;
 FUNC_1(VAR_0, "shmem_exit(%d): %d before_shmem_exit callbacks to make",
   VAR_6, VAR_1);
 while (--VAR_1 >= 0)
  VAR_2[VAR_1].function(VAR_6,
                 VAR_2[VAR_1].arg);
 VAR_1 = 0;
 FUNC_0();
 FUNC_1(VAR_0, "shmem_exit(%d): %d on_shmem_exit callbacks to make",
   VAR_6, VAR_3);
 while (--VAR_3 >= 0)
  VAR_4[VAR_3].function(VAR_6,
               VAR_4[VAR_3].arg);
 VAR_3 = 0;

 VAR_5 = 0;
}
