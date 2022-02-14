
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmp_func_t ;
struct TYPE_3__ {int dwExtStyle; } ;
typedef TYPE_1__ COMBOEX_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline cmp_func_t FUNC_0(COMBOEX_INFO const *VAR_3)
{
    return VAR_3->dwExtStyle & VAR_0 ? VAR_1 : VAR_2;
}
