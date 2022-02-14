
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
typedef int uint32 ;
struct TYPE_6__ {int (* vsetfield ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ tif_tagmethods; } ;
typedef TYPE_2__ TIFF ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

int
FUNC_2(TIFF* VAR_0, uint32 VAR_1, va_list VAR_2)
{
 return FUNC_0(VAR_0, VAR_1) ?
     (*VAR_0->tif_tagmethods.vsetfield)(VAR_0, VAR_1, VAR_2) : 0;
}
