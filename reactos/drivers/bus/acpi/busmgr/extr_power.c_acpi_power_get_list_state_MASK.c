
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_handle_list {size_t count; int * handles; } ;
typedef size_t UINT32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (
 struct acpi_handle_list *VAR_2,
 int *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 UINT32 VAR_6 = 0;

 if (!VAR_2 || !VAR_3)
  FUNC_2(-1);



 for (VAR_6=0; VAR_6<VAR_2->count; VAR_6++) {





  VAR_4 = FUNC_1(VAR_2->handles[VAR_6], &VAR_5);
  if (VAR_4)
   return VAR_4;

  *VAR_3 = VAR_5;

  if (*VAR_3 != VAR_1)
   break;
 }

 FUNC_0((VAR_0, "Resource list is %s\n",
  *VAR_3?"on":"off"));

 return VAR_4;
}
