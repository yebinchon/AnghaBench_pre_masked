
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ len; } ;
typedef TYPE_1__ pfwords ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline pfwords *FUNC_1(void) {


    size_t VAR_3 = (VAR_1) ? VAR_2 : VAR_0;

    pfwords *VAR_4 = FUNC_0(sizeof(pfwords) + VAR_3 * sizeof(char *));
    VAR_4->len = 0;
    VAR_4->size = VAR_3;
    return VAR_4;
}
