
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ class_oid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ObjectPropertyType ;


 int VAR_0 ;
 TYPE_1__ const* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static const ObjectPropertyType *
FUNC_3(Oid VAR_2)
{
 static const ObjectPropertyType *VAR_3 = ((void*)0);
 int VAR_4;





 if (VAR_3 && VAR_3->class_oid == VAR_2)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_1); VAR_4++)
 {
  if (VAR_1[VAR_4].class_oid == VAR_2)
  {
   VAR_3 = &VAR_1[VAR_4];
   return &VAR_1[VAR_4];
  }
 }

 FUNC_0(VAR_0,
   (FUNC_1("unrecognized class ID: %u", VAR_2)));

 return ((void*)0);
}
