
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* write_fn ) (TYPE_1__*,int const*,scalar_t__) ;int size; int error; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int const*,scalar_t__) ;

HPDF_STATUS
FUNC_3 (HPDF_Stream VAR_2,
                    const HPDF_BYTE *VAR_3,
                    HPDF_UINT VAR_4)
{
    HPDF_STATUS VAR_5;

    FUNC_0((" HPDF_Stream_Write\n"));

    if (!(VAR_2->write_fn))
        return FUNC_1(VAR_2->error, VAR_0, 0);






    VAR_5 = VAR_2->write_fn(VAR_2, VAR_3, VAR_4);

    if (VAR_5 != VAR_1)
        return VAR_5;

    VAR_2->size += VAR_4;

    return VAR_1;
}
