
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int alloc; char* str; } ;
typedef TYPE_1__ strbuf ;
typedef int WCHAR ;
typedef int OLECHAR ;
typedef int LPCOLESTR ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void FUNC_4(LPCOLESTR VAR_0, strbuf *VAR_1, int VAR_2)
{
    if(VAR_2 == -1)
        VAR_2 = FUNC_2(VAR_0);
    if(VAR_1->len+VAR_2+1 >= VAR_1->alloc) {
        VAR_1->alloc = (VAR_1->len+VAR_2)<<1;
        VAR_1->str = FUNC_1(FUNC_0(), 0, VAR_1->str, VAR_1->alloc*sizeof(WCHAR));
    }
    FUNC_3(VAR_1->str+VAR_1->len, VAR_0, VAR_2*sizeof(OLECHAR));
    VAR_1->len += VAR_2;
    VAR_1->str[VAR_1->len] = '\0';
}
