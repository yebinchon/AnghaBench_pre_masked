
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dstr {char* array; int member_0; } ;
struct TYPE_3__ {int unnamed_index; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct dstr*,char*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline char *FUNC_2(const char *VAR_1, bool VAR_2)
{
 if (VAR_2 && !VAR_1)
  return ((void*)0);

 if (!VAR_1 || !*VAR_1) {
  struct dstr VAR_3 = {0};
  FUNC_1(&VAR_3, "__unnamed%04lld",
       VAR_0->data.unnamed_index++);

  return VAR_3.array;
 } else {
  return FUNC_0(VAR_1);
 }
}
