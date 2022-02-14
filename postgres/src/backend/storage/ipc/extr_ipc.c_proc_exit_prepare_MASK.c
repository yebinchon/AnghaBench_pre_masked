
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arg; int (* function ) (int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int ,char*,int,scalar_t__) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_11)
{




 VAR_10 = 1;






 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = 0;
 VAR_2 = 1;
 VAR_0 = 0;
 VAR_7 = ((void*)0);

 VAR_6 = ((void*)0);


 FUNC_1(VAR_11);

 FUNC_0(VAR_1, "proc_exit(%d): %d callbacks to make",
   VAR_11, VAR_8);
 while (--VAR_8 >= 0)
  VAR_9[VAR_8].function(VAR_11,
                VAR_9[VAR_8].arg);

 VAR_8 = 0;
}
