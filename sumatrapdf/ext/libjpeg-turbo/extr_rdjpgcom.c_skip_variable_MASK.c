
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (void)

{
  unsigned int VAR_0;


  VAR_0 = FUNC_2();

  if (VAR_0 < 2)
    FUNC_0("Erroneous JPEG marker length");
  VAR_0 -= 2;

  while (VAR_0 > 0) {
    (void) FUNC_1();
    VAR_0--;
  }
}
