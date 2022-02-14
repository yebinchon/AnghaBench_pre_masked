
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int va_list ;
typedef int uint32 ;
struct TYPE_9__ {int (* vgetfield ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_11__ {TYPE_1__ tif_tagmethods; } ;
struct TYPE_10__ {int field_bit; } ;
typedef TYPE_2__ TIFFField ;
typedef TYPE_3__ TIFF ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

int
FUNC_4(TIFF* VAR_1, uint32 VAR_2, va_list VAR_3)
{
 const TIFFField* VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0);
 return (VAR_4 && (FUNC_2(VAR_2) || FUNC_0(VAR_1, VAR_4->field_bit)) ?
     (*VAR_1->tif_tagmethods.vgetfield)(VAR_1, VAR_2, VAR_3) : 0);
}
