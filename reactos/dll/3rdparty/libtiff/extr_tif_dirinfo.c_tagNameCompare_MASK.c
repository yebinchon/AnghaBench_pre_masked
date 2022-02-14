
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ field_type; int field_name; } ;
typedef TYPE_1__ TIFFField ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void* VAR_1, const void* VAR_2)
{
 const TIFFField* VAR_3 = *(const TIFFField**) VAR_1;
 const TIFFField* VAR_4 = *(const TIFFField**) VAR_2;
 int VAR_5 = FUNC_0(VAR_3->field_name, VAR_4->field_name);

 if (VAR_5)
  return VAR_5;
 else
  return (VAR_3->field_type == VAR_0) ?
   0 : ((int)VAR_4->field_type - (int)VAR_3->field_type);
}
