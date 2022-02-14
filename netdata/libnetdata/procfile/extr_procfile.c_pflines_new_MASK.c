
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ len; } ;
typedef TYPE_1__ pflines ;
typedef int ffline ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline pflines *FUNC_2(void) {


    size_t VAR_3 = (FUNC_1(VAR_1)) ? VAR_2 : VAR_0;

    pflines *VAR_4 = FUNC_0(sizeof(pflines) + VAR_3 * sizeof(ffline));
    VAR_4->len = 0;
    VAR_4->size = VAR_3;
    return VAR_4;
}
