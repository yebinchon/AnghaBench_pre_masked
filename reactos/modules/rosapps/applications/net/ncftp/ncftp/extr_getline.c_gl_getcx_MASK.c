
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = (-2);
 VAR_1 -= 2;
 if (VAR_1 < 1)
  VAR_1 = 1;
 for (VAR_2=0; VAR_2<VAR_1; VAR_2++) {
  if (FUNC_2()) {
   VAR_3 = (int) FUNC_1();
   if ((VAR_3 == 0) || (VAR_3 == 0xE0)) {

    VAR_3 = (int) FUNC_1();
    VAR_3 = FUNC_3(VAR_3);
    break;
   }
  }
  (void) FUNC_0((DWORD) (VAR_1 * 100), VAR_0);
 }
 return (VAR_3);
}
