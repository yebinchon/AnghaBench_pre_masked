
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_driver {int references; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,struct acpi_driver*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5 (
 struct acpi_driver *VAR_6)
{
 if (!VAR_6)
  FUNC_3(VAR_0);




 FUNC_1(&VAR_4);
 FUNC_2(&VAR_6->node, &VAR_3);
 FUNC_4(&VAR_4);

 FUNC_0(VAR_5, VAR_2,
  VAR_1, VAR_6);

 FUNC_3(VAR_6->references);
}
