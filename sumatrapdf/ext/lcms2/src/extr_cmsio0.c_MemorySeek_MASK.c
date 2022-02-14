
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_io_handler {scalar_t__ stream; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_2__ {scalar_t__ Size; scalar_t__ Pointer; } ;
typedef TYPE_1__ FILEMEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_3, struct _cms_io_handler* VAR_4, cmsUInt32Number VAR_5)
{
    FILEMEM* VAR_6 = (FILEMEM*) VAR_4 ->stream;

    if (VAR_5 > VAR_6 ->Size) {
        FUNC_0(VAR_3, VAR_2, "Too few data; probably corrupted profile");
        return VAR_0;
    }

    VAR_6 ->Pointer = VAR_5;
    return VAR_1;
}
