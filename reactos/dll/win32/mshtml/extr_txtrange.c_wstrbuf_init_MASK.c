
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__* buf; scalar_t__ len; } ;
typedef TYPE_1__ wstrbuf_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (int) ;

__attribute__((used)) static inline BOOL FUNC_1(wstrbuf_t *VAR_2)
{
    VAR_2->len = 0;
    VAR_2->size = 16;
    VAR_2->buf = FUNC_0(VAR_2->size * sizeof(WCHAR));
    if (!VAR_2->buf) return VAR_0;
    *VAR_2->buf = 0;
    return VAR_1;
}
