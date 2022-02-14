
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; } ;


 struct bitmask* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct bitmask*,unsigned int) ;
 int FUNC_2 (int,struct bitmask*) ;

__attribute__((used)) static bool FUNC_3(int VAR_0)
{
 struct bitmask *VAR_1 = FUNC_0();
 unsigned int VAR_2;

 if (VAR_1 && !FUNC_2(VAR_0, VAR_1)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
   if (FUNC_1(VAR_1, VAR_2))
    return 1;
  }
 }

 return 0;
}
