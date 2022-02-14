
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cnt; int string_len; TYPE_1__** cookies; } ;
typedef TYPE_2__ cookie_set_t ;
typedef int WCHAR ;
struct TYPE_4__ {scalar_t__* data; scalar_t__* name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__*,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void FUNC_5(const cookie_set_t *VAR_0, WCHAR *VAR_1)
{
    WCHAR *VAR_2 = VAR_1;
    unsigned VAR_3, VAR_4;

    for(VAR_3=0; VAR_3<VAR_0->cnt; VAR_3++) {
        if(VAR_3) {
            *VAR_2++ = ';';
            *VAR_2++ = ' ';
        }

        VAR_4 = FUNC_4(VAR_0->cookies[VAR_3]->name);
        FUNC_3(VAR_2, VAR_0->cookies[VAR_3]->name, VAR_4*sizeof(WCHAR));
        VAR_2 += VAR_4;

        if(*VAR_0->cookies[VAR_3]->data) {
            *VAR_2++ = '=';
            VAR_4 = FUNC_4(VAR_0->cookies[VAR_3]->data);
            FUNC_3(VAR_2, VAR_0->cookies[VAR_3]->data, VAR_4*sizeof(WCHAR));
            VAR_2 += VAR_4;
        }
    }

    FUNC_1(VAR_2-VAR_1 == VAR_0->string_len);
    FUNC_0("%s\n", FUNC_2(VAR_1, VAR_2-VAR_1));
}
