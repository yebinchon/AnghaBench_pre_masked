
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Display ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int (*) ()) ;
 int * VAR_0 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

Display *FUNC_4(void)
{

 if (VAR_1) {
  FUNC_0();
  VAR_1 = 0;
 }

 if (VAR_2 == ((void*)0)) {

  VAR_2 = FUNC_1(VAR_0);


  if (VAR_2 == ((void*)0)) {
   VAR_2 = FUNC_1(((void*)0));
  }

  if (VAR_2 == ((void*)0)) {
   FUNC_3("Could not open main display\n", VAR_4);
  } else if (!VAR_3) {
   FUNC_2(&FUNC_0);
   VAR_3 = 1;
  }
 }

 return VAR_2;
}
