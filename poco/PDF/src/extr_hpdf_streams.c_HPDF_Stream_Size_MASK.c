
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* size_fn ) (TYPE_1__*) ;int error; int size; scalar_t__ write_fn; } ;
typedef int HPDF_UINT32 ;
typedef TYPE_1__* HPDF_Stream ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

HPDF_UINT32
FUNC_4 (HPDF_Stream VAR_1)
{
    FUNC_1((" HPDF_Stream_Tell\n"));

    if (VAR_1->write_fn)
        return VAR_1->size;

    if (!(VAR_1->size_fn)) {
        FUNC_2 (VAR_1->error, VAR_0, 0);
        return 0;
    }

    if (FUNC_0(VAR_1->error) != 0)
        return 0;

    return VAR_1->size_fn(VAR_1);
}
