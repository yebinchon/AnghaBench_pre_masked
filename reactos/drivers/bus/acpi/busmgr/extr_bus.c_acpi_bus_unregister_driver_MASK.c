
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_driver {int node; scalar_t__ references; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,struct acpi_driver*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (
 struct acpi_driver *VAR_4)
{
 if (!VAR_4)
  return;

 FUNC_0(VAR_3, VAR_2, VAR_0, VAR_4);

 if (VAR_4->references)
  return;

 FUNC_1(&VAR_1);
 FUNC_2(&VAR_4->node);
 FUNC_3(&VAR_1);

 return;
}
