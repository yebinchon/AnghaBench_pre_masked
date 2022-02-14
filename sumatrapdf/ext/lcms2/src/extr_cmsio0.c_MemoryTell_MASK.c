
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_io_handler {scalar_t__ stream; } ;
typedef int cmsUInt32Number ;
typedef int cmsContext ;
struct TYPE_2__ {int Pointer; } ;
typedef TYPE_1__ FILEMEM ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
cmsUInt32Number FUNC_1(cmsContext VAR_0, struct _cms_io_handler* VAR_1)
{
    FILEMEM* VAR_2 = (FILEMEM*) VAR_1 ->stream;
    FUNC_0(VAR_0);

    if (VAR_2 == ((void*)0)) return 0;
    return VAR_2 -> Pointer;
}
