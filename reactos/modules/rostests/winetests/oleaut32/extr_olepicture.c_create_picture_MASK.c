
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int desc ;
struct TYPE_10__ {int hemf; } ;
struct TYPE_9__ {int xExt; int yExt; int hmeta; } ;
struct TYPE_8__ {int hicon; } ;
struct TYPE_7__ {int hpal; int hbitmap; } ;
struct TYPE_11__ {int cbSizeofstruct; short picType; TYPE_4__ emf; TYPE_3__ wmf; TYPE_2__ icon; TYPE_1__ bmp; } ;
typedef TYPE_5__ PICTDESC ;
typedef int LPCSTR ;
typedef int IPicture ;
typedef int HRESULT ;
typedef int HPALETTE ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int,int,int *) ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_5__*,int *,int ,void**) ;






 int VAR_3 ;
 int FUNC_7 (int ,char*,short) ;

__attribute__((used)) static HRESULT FUNC_8(short VAR_4, IPicture **VAR_5)
{
    PICTDESC VAR_6;

    VAR_6.cbSizeofstruct = sizeof(VAR_6);
    VAR_6.picType = VAR_4;

    switch (VAR_4)
    {
    case 128:
        return FUNC_6(((void*)0), &VAR_2, VAR_3, (void **)VAR_5);

    case 129:
        break;

    case 133:
        VAR_6.bmp.hbitmap = FUNC_2(1, 1, 1, 1, ((void*)0));
        VAR_6.bmp.hpal = (HPALETTE)0xbeefdead;
        break;

    case 131:
        VAR_6.icon.hicon = FUNC_5(((void*)0), (LPCSTR)VAR_1);
        break;

    case 130:
    {
        HDC VAR_7 = FUNC_4(((void*)0));
        VAR_6.wmf.hmeta = FUNC_1(VAR_7);
        VAR_6.wmf.xExt = 1;
        VAR_6.wmf.yExt = 1;
        break;
    }

    case 132:
    {
        HDC VAR_8 = FUNC_3(0, ((void*)0), ((void*)0), ((void*)0));
        VAR_6.emf.hemf = FUNC_0(VAR_8);
        break;
    }

    default:
        FUNC_7(0, "picture type %d is not supported\n", VAR_4);
        return VAR_0;
    }

    return FUNC_6(&VAR_6, &VAR_2, VAR_3, (void **)VAR_5);
}
