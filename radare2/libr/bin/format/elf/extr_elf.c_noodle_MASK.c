
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int b; } ;
typedef TYPE_1__ ELFOBJ ;


 int FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int,int const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static inline int FUNC_4(ELFOBJ *VAR_0, const char *VAR_1) {
 if (FUNC_1 (VAR_0->b) <= 64) {
  return 0;
 }
 ut8 VAR_2[64];
 FUNC_0 (VAR_0->b, FUNC_1 (VAR_0->b) - 64, VAR_2, 64);
 return FUNC_2 (VAR_2, 64, (const ut8 *)VAR_1, FUNC_3 (VAR_1)) != ((void*)0);
}
