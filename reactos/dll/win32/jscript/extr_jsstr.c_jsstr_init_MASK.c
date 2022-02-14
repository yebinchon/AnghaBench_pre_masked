
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int jsstr_tag_t ;
struct TYPE_3__ {unsigned int length_flags; int ref; } ;
typedef TYPE_1__ jsstr_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(jsstr_t *VAR_1, unsigned VAR_2, jsstr_tag_t VAR_3)
{
    VAR_1->length_flags = VAR_2 << VAR_0 | VAR_3;
    VAR_1->ref = 1;
}
