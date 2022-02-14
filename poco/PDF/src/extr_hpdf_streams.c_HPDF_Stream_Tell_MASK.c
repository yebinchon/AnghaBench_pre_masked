
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* tell_fn ) (TYPE_1__*) ;int error; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_INT32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

HPDF_INT32
FUNC_4 (HPDF_Stream VAR_2)
{
    FUNC_1((" HPDF_Stream_Tell\n"));

    if (!(VAR_2->tell_fn))
        return FUNC_2 (VAR_2->error, VAR_0, 0);

    if (FUNC_0(VAR_2->error) != 0)
        return VAR_1;

    return VAR_2->tell_fn(VAR_2);
}
