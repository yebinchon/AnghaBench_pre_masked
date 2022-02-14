
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; int * name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *,size_t) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1) {
 int VAR_2;
 if (FUNC_0 (VAR_1)) {
  for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++) {
   if (!FUNC_1 (VAR_1, VAR_0[VAR_2].name, VAR_0[VAR_2].len) && VAR_1[VAR_0[VAR_2].len]) {
    return 1;
   }
  }
 }
 return 0;
}
