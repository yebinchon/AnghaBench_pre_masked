
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; } ;
struct TYPE_5__ {TYPE_1__ member_0; } ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int * FUNC_0 (int ,TYPE_2__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static HBITMAP FUNC_3(HDC VAR_2, int VAR_3, UINT32 VAR_4, UINT32 VAR_5)
{
    HBITMAP VAR_6;
    UINT32 *VAR_7 = ((void*)0);
    BITMAPINFO VAR_8 = {{sizeof(BITMAPINFOHEADER), 2, 1, 1, VAR_3, VAR_0,
                                0, 0, 0, 0, 0}};

    VAR_6 = FUNC_0(VAR_2, &VAR_8, VAR_1, (void**)&VAR_7, ((void*)0), 0);
    FUNC_2(VAR_6 != ((void*)0) && VAR_7 != ((void*)0), "CreateDIBSection failed.\n");

    if(!VAR_6 || !VAR_7)
    {
        FUNC_1(VAR_6);
        return ((void*)0);
    }

    VAR_7[0] = VAR_4;
    VAR_7[1] = VAR_5;

    return VAR_6;
}
