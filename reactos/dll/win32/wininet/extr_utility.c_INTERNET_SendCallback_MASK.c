
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwInternalFlags; int hInternet; int (* lpfnStatusCB ) (int ,int ,int,void*,int) ;} ;
typedef TYPE_1__ object_header_t ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;





 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,int ,int,void*,int) ;

void FUNC_10(object_header_t *VAR_1, DWORD_PTR VAR_2, DWORD VAR_3, void *VAR_4, DWORD VAR_5)
{
    void *VAR_6 = VAR_4;

    if( !VAR_1->lpfnStatusCB )
        return;



    if(!VAR_2)
        return;

    switch(VAR_3) {
    case 130:
    case 131:
    case 132:
        VAR_6 = FUNC_3(VAR_5);
        if(VAR_6)
            FUNC_7(VAR_6, VAR_4, VAR_5);
        break;
    case 128:
    case 129:
        if(VAR_1->dwInternalFlags & VAR_0) {
            VAR_6 = FUNC_5(VAR_4);
            break;
        }else {
            VAR_6 = FUNC_6(VAR_4);
            VAR_5 = FUNC_8(VAR_6)+1;
            break;
        }
    }

    FUNC_0(" callback(%p) (%p (%p), %08lx, %d (%s), %s, %d)\n",
   VAR_1->lpfnStatusCB, VAR_1->hInternet, VAR_1, VAR_2, VAR_3, FUNC_2(VAR_3),
   FUNC_1(VAR_3, VAR_6), VAR_5);

    VAR_1->lpfnStatusCB(VAR_1->hInternet, VAR_2, VAR_3, VAR_6, VAR_5);

    FUNC_0(" end callback().\n");

    if(VAR_6 != VAR_4)
        FUNC_4(VAR_6);
}
