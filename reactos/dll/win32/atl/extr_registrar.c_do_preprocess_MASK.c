
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int str; } ;
typedef TYPE_1__ strbuf ;
struct TYPE_8__ {int key_len; char const* item; int key; struct TYPE_8__* next; } ;
typedef TYPE_2__ rep_list ;
typedef char WCHAR ;
struct TYPE_9__ {TYPE_2__* rep; } ;
typedef TYPE_3__ Registrar ;
typedef char const* LPCOLESTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,TYPE_1__*,int) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static HRESULT FUNC_7(const Registrar *VAR_2, LPCOLESTR VAR_3, strbuf *VAR_4)
{
    LPCOLESTR VAR_5, VAR_6 = VAR_3;
    rep_list *VAR_7;
    static const WCHAR VAR_8[] = {'%',0};

    VAR_5 = FUNC_6(VAR_3, '%');
    while(VAR_5) {
        FUNC_5(VAR_6, VAR_4, VAR_5-VAR_6);

        VAR_6 = ++VAR_5;
        if(!*VAR_6)
            return VAR_0;
        VAR_5 = FUNC_6(VAR_6, '%');
        if(!VAR_5)
            return VAR_0;

        if(VAR_5 == VAR_6) {
            FUNC_5(VAR_8, VAR_4, 1);
        }else {
            for(VAR_7 = VAR_2->rep; VAR_7; VAR_7 = VAR_7->next) {
                if(VAR_7->key_len == VAR_5-VAR_6
                        && !FUNC_2(VAR_6, VAR_7->key, VAR_7->key_len))
                    break;
            }
            if(!VAR_7) {
                FUNC_1("Could not find replacement: %s\n", FUNC_4(VAR_6, VAR_5-VAR_6));
                return VAR_0;
            }

            FUNC_5(VAR_7->item, VAR_4, -1);
        }

        VAR_6 = ++VAR_5;
        VAR_5 = FUNC_6(VAR_5, '%');
    }

    FUNC_5(VAR_6, VAR_4, -1);
    FUNC_0("%s\n", FUNC_3(VAR_4->str));

    return VAR_1;
}
