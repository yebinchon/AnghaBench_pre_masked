
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptr; } ;
struct nk_image {TYPE_1__ handle; } ;
struct nk_color {int dummy; } ;
struct TYPE_6__ {int memory_dc; } ;
struct TYPE_5__ {int bmHeight; int bmWidth; } ;
typedef int LPSTR ;
typedef int HDC ;
typedef int HBITMAP ;
typedef TYPE_2__ BITMAP ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,short,short,unsigned short,unsigned short,int ,int ,int ,int ,int ,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(short VAR_2, short VAR_3, unsigned short VAR_4, unsigned short VAR_5,
    struct nk_image VAR_6, struct nk_color VAR_7)
{
    HBITMAP VAR_8 = (HBITMAP)VAR_6.handle.ptr;
    HDC VAR_9;
    BITMAP VAR_10;

    if (!VAR_1.memory_dc || !VAR_8)
        return;

    VAR_9 = FUNC_0(VAR_1.memory_dc);
    FUNC_2(VAR_8, sizeof(BITMAP), (LPSTR)&VAR_10);
    FUNC_3(VAR_9, VAR_8);
    FUNC_4(VAR_1.memory_dc, VAR_2, VAR_3, VAR_4, VAR_5, VAR_9, 0, 0, VAR_10.bmWidth, VAR_10.bmHeight, VAR_0);
    FUNC_1(VAR_9);
}
