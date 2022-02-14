
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
typedef int int32 ;
struct TYPE_5__ {TYPE_1__** tif_fields; scalar_t__ tif_nfields; } ;
struct TYPE_4__ {scalar_t__ field_tag; } ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(TIFF* VAR_1, uint16 VAR_2, uint32* VAR_3)
{
 int32 VAR_4,VAR_5,VAR_6;
 VAR_4=-1;
 VAR_6=(int32)VAR_1->tif_nfields;
 while (1)
 {
  if (VAR_4+1==VAR_6)
  {
   *VAR_3 = VAR_0;
   return;
  }
  VAR_5=(VAR_4+VAR_6)/2;
  if (VAR_1->tif_fields[VAR_5]->field_tag==(uint32)VAR_2)
   break;
  if (VAR_1->tif_fields[VAR_5]->field_tag<(uint32)VAR_2)
   VAR_4=VAR_5;
  else
   VAR_6=VAR_5;
 }
 while (1)
 {
  if (VAR_5==0)
   break;
  if (VAR_1->tif_fields[VAR_5-1]->field_tag!=(uint32)VAR_2)
   break;
  VAR_5--;
 }
 *VAR_3=VAR_5;
}
