
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int start; } ;
typedef TYPE_1__ bstr ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,size_t) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, bstr *VAR_2, size_t VAR_3)
{
    size_t VAR_4 = FUNC_2(VAR_2->start);
    FUNC_1(VAR_2->len <= VAR_4);
    if (VAR_3 > VAR_4 - VAR_2->len) {
        if (VAR_3 < VAR_4)
            VAR_3 = VAR_4;
        if (VAR_4 >= VAR_0 / 2 || VAR_3 >= VAR_0 / 2)
            FUNC_0();
        VAR_2->start = FUNC_3(VAR_1, VAR_2->start, VAR_4 + VAR_3);
    }
}
