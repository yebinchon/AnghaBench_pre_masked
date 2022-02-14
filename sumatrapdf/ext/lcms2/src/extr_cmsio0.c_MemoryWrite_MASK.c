
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_io_handler {scalar_t__ UsedSpace; scalar_t__ stream; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_2__ {scalar_t__ Pointer; scalar_t__ Size; scalar_t__ Block; } ;
typedef TYPE_1__ FILEMEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,void const*,scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, struct _cms_io_handler* VAR_3, cmsUInt32Number VAR_4, const void *VAR_5)
{
    FILEMEM* VAR_6 = (FILEMEM*) VAR_3 ->stream;
    FUNC_0(VAR_2);

    if (VAR_6 == ((void*)0)) return VAR_0;


    if (VAR_6->Pointer + VAR_4 > VAR_6->Size) {
        VAR_4 = VAR_6 ->Size - VAR_6->Pointer;
    }

    if (VAR_4 == 0) return VAR_1;

    FUNC_1(VAR_6 ->Block + VAR_6 ->Pointer, VAR_5, VAR_4);
    VAR_6 ->Pointer += VAR_4;

    if (VAR_6 ->Pointer > VAR_3->UsedSpace)
        VAR_3->UsedSpace = VAR_6 ->Pointer;

    return VAR_1;
}
