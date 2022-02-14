
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsstr_tag_t ;
struct TYPE_3__ {int length_flags; } ;
typedef TYPE_1__ jsstr_t ;


 int VAR_0 ;

__attribute__((used)) static inline jsstr_tag_t FUNC_0(jsstr_t *VAR_1)
{
    return VAR_1->length_flags & VAR_0;
}
