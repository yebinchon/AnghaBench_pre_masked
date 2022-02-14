
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pi; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline yxml_ret_t FUNC_0(yxml_t *VAR_2, unsigned VAR_3) {
 return (VAR_2->pi[0]|32) == 'x' && (VAR_2->pi[1]|32) == 'm' && (VAR_2->pi[2]|32) == 'l' && !VAR_2->pi[3] ? VAR_0 : VAR_1;
}
