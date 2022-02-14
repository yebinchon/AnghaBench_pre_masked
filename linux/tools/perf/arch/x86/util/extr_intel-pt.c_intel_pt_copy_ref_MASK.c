
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void*,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2,
         void *VAR_3, size_t VAR_4)
{
 if (VAR_4 >= VAR_1) {
  FUNC_0(VAR_0, VAR_3 + VAR_4 - VAR_1, VAR_1);
 } else {
  FUNC_0(VAR_0, VAR_3, VAR_4);
  VAR_1 -= VAR_4;
  FUNC_0(VAR_0 + VAR_4, VAR_3 + VAR_2 - VAR_1, VAR_1);
 }
}
