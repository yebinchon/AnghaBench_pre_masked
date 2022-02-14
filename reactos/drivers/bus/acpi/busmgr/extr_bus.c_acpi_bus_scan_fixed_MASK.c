
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_2__ {int Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct acpi_device**,int ,int *,int ) ;
 int VAR_10 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (
 struct acpi_device *VAR_11)
{
 int VAR_12 = 0;
 struct acpi_device *VAR_13 = ((void*)0);

 if (!VAR_11)
  FUNC_2(VAR_8);





 if (VAR_9.Flags & VAR_6)
  VAR_12 = FUNC_1(&VAR_13, VAR_10,
   ((void*)0), VAR_2);
 else
 {

  FUNC_0(VAR_0, 1);

  VAR_12 = FUNC_1(&VAR_13, VAR_10,
   ((void*)0), VAR_3);
 }
 if (VAR_9.Flags & VAR_7)
  VAR_12 = FUNC_1(&VAR_13, VAR_10,
   ((void*)0), VAR_4);
 else
 {

  FUNC_0(VAR_1, 1);

  VAR_12 = FUNC_1(&VAR_13, VAR_10,
   ((void*)0), VAR_5);
 }

 FUNC_2(VAR_12);
}
