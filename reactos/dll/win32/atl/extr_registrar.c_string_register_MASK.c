
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int str; } ;
typedef TYPE_1__ strbuf ;
typedef int Registrar ;
typedef int LPCOLESTR ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int *,int ,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_9(Registrar *VAR_1, LPCOLESTR VAR_2, BOOL VAR_3)
{
    strbuf VAR_4;
    HRESULT VAR_5;

    FUNC_3("(%p %s %x)\n", VAR_1, FUNC_5(VAR_2), VAR_3);

    FUNC_8(&VAR_4);
    VAR_5 = FUNC_6(VAR_1, VAR_2, &VAR_4);
    if(FUNC_0(VAR_5)) {
        FUNC_4("preprocessing failed!\n");
        FUNC_2(FUNC_1(), 0, VAR_4.str);
        return VAR_5;
    }

    VAR_5 = FUNC_7(VAR_4.str, VAR_3);
    if(FUNC_0(VAR_5) && VAR_3)
        FUNC_7(VAR_4.str, VAR_0);

    FUNC_2(FUNC_1(), 0, VAR_4.str);
    return VAR_5;
}
