
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ Protocol ;
typedef int HttpProtocol ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(Protocol *VAR_4, DWORD VAR_5)
{
    HttpProtocol *VAR_6 = FUNC_3(VAR_4);
    HRESULT VAR_7;

    FUNC_1("(%p) %d\n", VAR_4, VAR_5);

    if(VAR_4->flags & VAR_2) {
        FUNC_0("Not handling error %d\n", VAR_5);
        return;
    }

    while((VAR_7 = FUNC_2(VAR_6, VAR_5)) == VAR_3) {
        VAR_5 = FUNC_6(VAR_6);

        if(VAR_5 == VAR_0 || VAR_5 == VAR_1)
            return;
    }

    FUNC_4(VAR_4, VAR_7);
    FUNC_5(VAR_4);
    return;
}
