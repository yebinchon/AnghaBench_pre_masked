
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_io_handler {scalar_t__ stream; } ;
typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsContext ;
struct TYPE_2__ {scalar_t__ Pointer; scalar_t__ Size; int * Block; } ;
typedef TYPE_1__ FILEMEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (void*,int *,scalar_t__) ;

__attribute__((used)) static
cmsUInt32Number FUNC_2(cmsContext VAR_1, struct _cms_io_handler* VAR_2, void *VAR_3, cmsUInt32Number VAR_4, cmsUInt32Number VAR_5)
{
    FILEMEM* VAR_6 = (FILEMEM*) VAR_2 ->stream;
    cmsUInt8Number* VAR_7;
    cmsUInt32Number VAR_8 = VAR_4 * VAR_5;

    if (VAR_6 -> Pointer + VAR_8 > VAR_6 -> Size){

        VAR_8 = (VAR_6 -> Size - VAR_6 -> Pointer);
        FUNC_0(VAR_1, VAR_0, "Read from memory error. Got %d bytes, block should be of %d bytes", VAR_8, VAR_5 * VAR_4);
        return 0;
    }

    VAR_7 = VAR_6 -> Block;
    VAR_7 += VAR_6 -> Pointer;
    FUNC_1(VAR_3, VAR_7, VAR_8);
    VAR_6 -> Pointer += VAR_8;

    return VAR_5;
}
