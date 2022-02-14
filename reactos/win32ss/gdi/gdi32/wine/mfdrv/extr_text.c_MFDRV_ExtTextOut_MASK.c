
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int ciACP; } ;
struct TYPE_12__ {int hdc; } ;
struct TYPE_11__ {int bottom; int right; int top; int left; } ;
struct TYPE_10__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT16 ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PHYSDEV ;
typedef scalar_t__* LPSTR ;
typedef scalar_t__* LPINT16 ;
typedef int LPCWSTR ;
typedef int INT16 ;
typedef scalar_t__ INT ;
typedef int DWORD ;
typedef TYPE_4__ CHARSETINFO ;
typedef int BOOL ;



 int VAR_0 ;

 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;



 scalar_t__ FUNC_7 (int ,scalar_t__) ;

 int FUNC_8 (TYPE_3__*,scalar_t__,scalar_t__,int ,TYPE_1__*,scalar_t__*,int,scalar_t__*) ;

 int VAR_1 ;

 int FUNC_9 (char*,int ,...) ;
 scalar_t__ FUNC_10 (int ,TYPE_4__*,int ) ;
 int FUNC_11 (int) ;

 int FUNC_12 (int ,int ,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_13 (scalar_t__*,int) ;
 int FUNC_14 (int ,int ) ;

BOOL FUNC_15( PHYSDEV VAR_2, INT VAR_3, INT VAR_4, UINT VAR_5,
                       const RECT *VAR_6, LPCWSTR VAR_7, UINT VAR_8, const INT *VAR_9 )
{
    RECT16 VAR_10;
    LPINT16 VAR_11 = ((void*)0);
    BOOL VAR_12;
    unsigned int VAR_13, VAR_14;
    LPSTR VAR_15;
    DWORD VAR_16;
    CHARSETINFO VAR_17;
    int VAR_18 = FUNC_4( VAR_2->hdc );
    UINT VAR_19 = VAR_0;

    if(FUNC_10(FUNC_11(VAR_18), &VAR_17, VAR_1))
        VAR_19 = VAR_17.ciACP;
    else {
        switch(VAR_18) {
 case 130:
     VAR_19 = FUNC_2();
     break;
 case 135:
     VAR_19 = FUNC_1();
     break;

 case 128:
 case 129:
 case 131:
 case 133:
 case 132:
 case 134:
 case 136:







     VAR_19 = VAR_0;
     break;


 default:
     FUNC_0("Can't find codepage for charset %d\n", VAR_18);
     break;
 }
    }


    FUNC_9("cp == %d\n", VAR_19);
    VAR_16 = FUNC_12(VAR_19, 0, VAR_7, VAR_8, ((void*)0), 0, ((void*)0), ((void*)0));
    VAR_15 = FUNC_5(FUNC_3(), 0, VAR_16);
    FUNC_12(VAR_19, 0, VAR_7, VAR_8, VAR_15, VAR_16, ((void*)0), ((void*)0));
    FUNC_9("mapped %s -> %s\n", FUNC_14(VAR_7, VAR_8), FUNC_13(VAR_15, VAR_16));


    if (VAR_6)
    {
        VAR_10 = VAR_6->left;
        VAR_10 = VAR_6->top;
        VAR_10 = VAR_6->right;
        VAR_10 = VAR_6->bottom;
    }

    if(VAR_9) {
        VAR_11 = FUNC_5( FUNC_3(), 0, sizeof(INT16)*VAR_16 );
 for(VAR_13 = VAR_14 = 0; VAR_13 < VAR_16; )
     if(FUNC_7(VAR_19, VAR_15[VAR_13])) {
         VAR_11[VAR_13++] = VAR_9[VAR_14++];
  VAR_11[VAR_13++] = 0;
     } else
         VAR_11[VAR_13++] = VAR_9[VAR_14++];
    }

    VAR_12 = FUNC_8(VAR_2,VAR_3,VAR_4,VAR_5,VAR_6?&VAR_10:((void*)0),VAR_15,VAR_16,VAR_11);
    FUNC_6( FUNC_3(), 0, VAR_15 );
    FUNC_6( FUNC_3(), 0, VAR_11 );
    return VAR_12;
}
