
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t FUNC_0 () ;

size_t FUNC_1(size_t VAR_1) {
 size_t VAR_2 = VAR_1 / VAR_0;
 size_t VAR_3;

 size_t VAR_4 = FUNC_0();
 for(VAR_3 = 0; VAR_3 < VAR_2 ;VAR_3++)
  VAR_4 += FUNC_0();

 return VAR_4 % VAR_1;
}
