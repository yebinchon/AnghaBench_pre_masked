
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;

int FUNC_12(void)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8)
  return VAR_8;


 VAR_4->flags |= VAR_1;

 if (!VAR_6)
  FUNC_3(&VAR_7);

 FUNC_7(1);
 FUNC_9("Freezing user space processes ... ");
 VAR_6 = 1;
 VAR_8 = FUNC_11(1);
 if (!VAR_8) {
  FUNC_2(VAR_2);
  FUNC_8("done.");
 }
 FUNC_8("\n");
 FUNC_0(FUNC_4());







 if (!VAR_8 && !FUNC_6(FUNC_5(VAR_5)))
  VAR_8 = -VAR_0;

 if (VAR_8)
  FUNC_10();
 return VAR_8;
}
