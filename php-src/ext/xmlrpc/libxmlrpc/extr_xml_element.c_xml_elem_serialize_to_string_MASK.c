
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xml_element ;
struct TYPE_3__ {int len; char* str; } ;
typedef TYPE_1__ simplestring ;
typedef int XML_ELEM_OUTPUT_OPTIONS ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void*,int ,int ) ;

char* FUNC_2(xml_element *VAR_1, XML_ELEM_OUTPUT_OPTIONS VAR_2, int *VAR_3)
{
   simplestring VAR_4;
   FUNC_0(&VAR_4);

   FUNC_1(VAR_1, VAR_0, (void *)&VAR_4, VAR_2, 0);

   if(VAR_3) {
      *VAR_3 = VAR_4.len;
   }

   return VAR_4.str;
}
