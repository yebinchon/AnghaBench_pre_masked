
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 char* FUNC_2 (void*) ;
 void* FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int *) ;

__attribute__((used)) static acpi_status FUNC_7(char *VAR_4)
{
 void *VAR_5;
 u32 VAR_6;
 char VAR_7[VAR_0];
 char *VAR_8;
 acpi_status VAR_9 = VAR_2;



 VAR_5 = FUNC_3(VAR_4, "*", VAR_3);
 if (!VAR_5) {
  return (FUNC_5(VAR_1));
 }



 while ((VAR_8 = FUNC_2(VAR_5))) {



  VAR_9 =
      FUNC_6(VAR_8, VAR_7, &VAR_6);



  if (FUNC_0(VAR_9)) {
   continue;
  }



  VAR_9 = FUNC_4(VAR_7, VAR_6);
  if (FUNC_0(VAR_9)) {
   break;
  }
 }

 FUNC_1(VAR_5);
 return (VAR_9);
}
