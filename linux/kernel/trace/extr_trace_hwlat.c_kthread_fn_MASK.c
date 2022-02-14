
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sample_window; int sample_width; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_2)
{
 u64 VAR_3;

 while (!FUNC_2()) {

  FUNC_5();

  FUNC_3();
  FUNC_1();
  FUNC_4();

  FUNC_7(&VAR_1.lock);
  VAR_3 = VAR_1.sample_window - VAR_1.sample_width;
  FUNC_8(&VAR_1.lock);

  FUNC_0(VAR_3, VAR_0);


  if (VAR_3 < 1)
   VAR_3 = 1;

  if (FUNC_6(VAR_3))
   break;
 }

 return 0;
}
