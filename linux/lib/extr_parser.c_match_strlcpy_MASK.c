
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t to; size_t from; } ;
typedef TYPE_1__ substring_t ;


 int FUNC_0 (char*,size_t,size_t) ;

size_t FUNC_1(char *VAR_0, const substring_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_1->to - VAR_1->from;

 if (VAR_2) {
  size_t VAR_4 = VAR_3 >= VAR_2 ? VAR_2 - 1 : VAR_3;
  FUNC_0(VAR_0, VAR_1->from, VAR_4);
  VAR_0[VAR_4] = '\0';
 }
 return VAR_3;
}
