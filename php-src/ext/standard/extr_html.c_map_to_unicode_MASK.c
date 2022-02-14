
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** inner; } ;
typedef TYPE_2__ enc_to_uni ;
struct TYPE_4__ {unsigned int* uni_cp; } ;


 size_t FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int) ;

__attribute__((used)) static inline void FUNC_2(unsigned VAR_0, const enc_to_uni *VAR_1, unsigned *VAR_2)
{

 *VAR_2 = VAR_1->inner[FUNC_0(VAR_0)]->uni_cp[FUNC_1(VAR_0)];
}
