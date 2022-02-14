
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_zu_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (size_t,size_t,char*) ;
 int FUNC_1 (int *,size_t,int ) ;
 size_t FUNC_2 (int *,size_t,int) ;

__attribute__((used)) static void
FUNC_3(bool VAR_4) {
 size_t VAR_5;




 for (VAR_5 = 2; VAR_5 < 10000000; VAR_5 += 97) {
  atomic_zu_t VAR_6;
  unsigned VAR_7;

  FUNC_1(&VAR_6, VAR_5, VAR_0);
  for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
   size_t VAR_8 = FUNC_2(&VAR_6, VAR_5, VAR_4);

   FUNC_0(VAR_8, VAR_5, "Out of range");
  }
 }
}
