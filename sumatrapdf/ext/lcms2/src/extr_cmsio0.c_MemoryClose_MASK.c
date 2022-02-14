
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_io_handler {struct _cms_io_handler* Block; scalar_t__ FreeBlockOnClose; scalar_t__ stream; } ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef struct _cms_io_handler FILEMEM ;


 int VAR_0 ;
 int FUNC_0 (int ,struct _cms_io_handler*) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_1, struct _cms_io_handler* VAR_2)
{
    FILEMEM* VAR_3 = (FILEMEM*) VAR_2 ->stream;

    if (VAR_3 ->FreeBlockOnClose) {

        if (VAR_3 ->Block) FUNC_0(VAR_1, VAR_3 ->Block);
    }

    FUNC_0(VAR_1, VAR_3);
    FUNC_0(VAR_1, VAR_2);

    return VAR_0;
}
