
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; size_t len; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(BUFFER *VAR_0, size_t VAR_1) {
    if(FUNC_1(VAR_0->size - VAR_0->len < VAR_1))
        FUNC_0(VAR_0, VAR_1);
}
