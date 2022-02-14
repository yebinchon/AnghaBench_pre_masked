
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t align; } ;
typedef TYPE_1__ Header ;



__attribute__((used)) static int FUNC_0 (size_t VAR_0, Header *VAR_1, int VAR_2, size_t VAR_3) {
  if (VAR_3 == 0 || VAR_2 == 'c') return 0;
  if (VAR_3 > (size_t)VAR_1->align)
    VAR_3 = VAR_1->align;
  return (VAR_3 - (VAR_0 & (VAR_3 - 1))) & (VAR_3 - 1);
}
