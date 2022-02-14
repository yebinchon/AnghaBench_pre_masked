
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* read_fn ) (TYPE_1__*,int *,int *) ;int error; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;

HPDF_STATUS
FUNC_2 (HPDF_Stream VAR_1,
                   HPDF_BYTE *VAR_2,
                   HPDF_UINT *VAR_3)
{
    if (!(VAR_1->read_fn))
        return FUNC_0 (VAR_1->error, VAR_0, 0);






    return VAR_1->read_fn(VAR_1, VAR_2, VAR_3);
}
