
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void
FUNC_2(void) {
 uint64_t VAR_3;




 for (VAR_3 = 2; VAR_3 < 10000000; VAR_3 += 97) {
  uint64_t VAR_4;
  unsigned VAR_5;

  VAR_4 = VAR_3;
  for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
   uint64_t VAR_6 = FUNC_1(&VAR_4, VAR_3);

   FUNC_0(VAR_6, VAR_3, "Out of range");
  }
 }
}
