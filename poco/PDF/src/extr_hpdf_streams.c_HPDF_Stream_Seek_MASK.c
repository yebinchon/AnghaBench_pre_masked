
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* seek_fn ) (TYPE_1__*,int ,int ) ;int error; } ;
typedef int HPDF_WhenceMode ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_INT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_2,
                   HPDF_INT VAR_3,
                   HPDF_WhenceMode VAR_4)
{
    FUNC_1((" HPDF_Stream_Seek\n"));

    if (!(VAR_2->seek_fn))
        return FUNC_2 (VAR_2->error, VAR_0, 0);

    if (FUNC_0(VAR_2->error) != 0)
        return VAR_1;

    return VAR_2->seek_fn(VAR_2, VAR_3, VAR_4);
}
