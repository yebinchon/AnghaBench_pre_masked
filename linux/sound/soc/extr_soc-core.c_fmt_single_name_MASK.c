
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct device*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (char*,char*,int*,...) ;
 int FUNC_4 (char*,char*,int) ;
 size_t FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static char *FUNC_7(struct device *VAR_2, int *VAR_3)
{
 char *VAR_4, VAR_5[VAR_1];
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_2) == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_5, FUNC_0(VAR_2), VAR_1);


 VAR_4 = FUNC_6(VAR_5, VAR_2->driver->name);
 if (VAR_4) {

  if (FUNC_3(&VAR_4[FUNC_5(VAR_2->driver->name)], ".%d", VAR_3) == 1) {


   if (*VAR_3 == -1)
    VAR_4[FUNC_5(VAR_2->driver->name)] = '\0';
  }

 } else {

  if (FUNC_3(VAR_5, "%x-%x", &VAR_6, &VAR_7) == 2) {
   char VAR_8[VAR_1];


   *VAR_3 = ((VAR_6 & 0xffff) << 16) + VAR_7;


   FUNC_2(VAR_8, VAR_1, "%s.%s", VAR_2->driver->name,
     VAR_5);
   FUNC_4(VAR_5, VAR_8, VAR_1);
  } else
   *VAR_3 = 0;
 }

 return FUNC_1(VAR_5, VAR_0);
}
