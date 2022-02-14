
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dstr {char* array; int member_0; } ;
struct TYPE_4__ {size_t num; TYPE_1__* array; } ;
struct TYPE_3__ {int array; } ;


 scalar_t__ FUNC_0 (char const*,int ,struct dstr*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct dstr*) ;
 char* FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_1)
{
 struct dstr VAR_2 = {0};

 char *VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 for (size_t VAR_4 = 0; VAR_4 < VAR_0.num; ++VAR_4) {
  if (FUNC_0(VAR_1, VAR_0.array[VAR_4].array, &VAR_2))
   return VAR_2.array;
 }

 FUNC_1(&VAR_2);
 return ((void*)0);
}
