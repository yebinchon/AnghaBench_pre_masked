
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bom; scalar_t__ readed; } ;
typedef int IStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_1__ BSCallback ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,void*,int,int*) ;
 int FUNC_1 (int*,int*,int) ;

HRESULT FUNC_2(BSCallback *VAR_3, IStream *VAR_4, void *VAR_5, DWORD VAR_6, DWORD *VAR_7)
{
    DWORD VAR_8 = 0, VAR_9=0;
    BYTE *VAR_10 = VAR_5;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_8);

    if(!VAR_3->readed && VAR_3->bom == VAR_0) {
        if(VAR_8 >= 2 && VAR_10[0] == 0xff && VAR_10[1] == 0xfe) {
            VAR_3->bom = VAR_1;
            VAR_9 = 2;
        }else if(VAR_8 >= 3 && VAR_10[0] == 0xef && VAR_10[1] == 0xbb && VAR_10[2] == 0xbf) {
            VAR_3->bom = VAR_2;
            VAR_9 = 3;
        }
        if(VAR_9) {
            VAR_8 -= VAR_9;
            if(VAR_8)
                FUNC_1(VAR_10, VAR_10+VAR_9, VAR_8);
        }
    }

    VAR_3->readed += VAR_8;
    *VAR_7 = VAR_8;
    return VAR_11;
}
