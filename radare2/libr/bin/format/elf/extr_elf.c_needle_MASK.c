
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int shstrtab_size; scalar_t__ shstrtab; } ;
typedef TYPE_1__ ELFOBJ ;


 int * FUNC_0 (int const*,int,int const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline int FUNC_2(ELFOBJ *VAR_0, const char *VAR_1) {
 if (VAR_0->shstrtab) {
  ut32 VAR_2 = VAR_0->shstrtab_size;
  if (VAR_2 > 4096) {
   VAR_2 = 4096;
  }
  return FUNC_0 ((const ut8*)VAR_0->shstrtab, VAR_2,
    (const ut8*)VAR_1, FUNC_1 (VAR_1)) != ((void*)0);
 }
 return 0;
}
