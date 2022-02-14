
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* attr; } ;
typedef TYPE_2__ VacAttrStats ;
struct TYPE_4__ {int attstattarget; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1, int VAR_2, VacAttrStats **VAR_3)
{
 int VAR_4;





 if (VAR_1 >= 0)
  return VAR_1;






 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {

  if (VAR_3[VAR_4]->attr->attstattarget > VAR_1)
   VAR_1 = VAR_3[VAR_4]->attr->attstattarget;
 }






 if (VAR_1 < 0)
  VAR_1 = VAR_0;


 FUNC_0((VAR_1 >= 0) && (VAR_1 <= 10000));

 return VAR_1;
}
