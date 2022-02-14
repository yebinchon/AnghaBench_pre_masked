
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ field_tag; scalar_t__ field_type; } ;
typedef TYPE_1__ TIFFField ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void* VAR_1, const void* VAR_2)
{
 const TIFFField* VAR_3 = *(const TIFFField**) VAR_1;
 const TIFFField* VAR_4 = *(const TIFFField**) VAR_2;

 if (VAR_3->field_tag != VAR_4->field_tag)
  return (int)VAR_3->field_tag - (int)VAR_4->field_tag;
 else
  return (VAR_3->field_type == VAR_0) ?
   0 : ((int)VAR_4->field_type - (int)VAR_3->field_type);
}
