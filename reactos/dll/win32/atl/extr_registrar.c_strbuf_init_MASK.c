
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; scalar_t__ len; int str; } ;
typedef TYPE_1__ strbuf ;
typedef int WCHAR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(strbuf *VAR_0)
{
    VAR_0->str = FUNC_1(FUNC_0(), 0, 128*sizeof(WCHAR));
    VAR_0->alloc = 128;
    VAR_0->len = 0;
}
