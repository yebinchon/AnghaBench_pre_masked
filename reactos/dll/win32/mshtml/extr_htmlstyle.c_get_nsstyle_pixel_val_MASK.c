
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int styleid_t ;
typedef int nsAString ;
typedef char WCHAR ;
struct TYPE_3__ {int nsstyle; } ;
typedef int PRUnichar ;
typedef int LONG ;
typedef TYPE_1__ HTMLStyle ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const**) ;
 int FUNC_6 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (int const*,char**,int) ;

__attribute__((used)) static HRESULT FUNC_9(HTMLStyle *VAR_4, styleid_t VAR_5, LONG *VAR_6)
{
    nsAString VAR_7;
    HRESULT VAR_8;

    if(!VAR_6)
        return VAR_1;

    FUNC_6(&VAR_7, ((void*)0));

    VAR_8 = FUNC_2(VAR_4->nsstyle, VAR_5, &VAR_7);
    if(VAR_8 == VAR_2) {
        WCHAR *VAR_9;
        const PRUnichar *VAR_10;

        FUNC_5(&VAR_7, &VAR_10);
        if(VAR_10) {
            *VAR_6 = FUNC_8(VAR_10, &VAR_9, 10);

            if(*VAR_9 == '.') {

                while(FUNC_3(*++VAR_9));
            }

            if(*VAR_9 && FUNC_7(VAR_9, VAR_3)) {
                FUNC_4(&VAR_7);
                FUNC_0("%s: only px values are currently supported\n", FUNC_1(VAR_10));
                VAR_8 = VAR_0;
            }
        }else {
            *VAR_6 = 0;
        }
    }

    FUNC_4(&VAR_7);
    return VAR_8;
}
