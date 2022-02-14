
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* to_unicode_fn ) (TYPE_1__*,int ) ;} ;
typedef int HPDF_UNICODE ;
typedef int HPDF_UINT16 ;
typedef TYPE_1__* HPDF_Encoder ;


 int FUNC_0 (TYPE_1__*,int ) ;

HPDF_UNICODE
FUNC_1 (HPDF_Encoder VAR_0,
                         HPDF_UINT16 VAR_1)
{
    return VAR_0->to_unicode_fn (VAR_0, VAR_1);
}
