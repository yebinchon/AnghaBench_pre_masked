
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int needle; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;
 scalar_t__ FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 FILE *VAR_3;
 char VAR_4[VAR_0];
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = VAR_1;

 VAR_3 = FUNC_3("/proc/cpuinfo", "r");
 if (!VAR_3)
  goto end;


 VAR_6 = "system type";
 while(FUNC_2(VAR_4, VAR_0, VAR_3)) {
  if (!FUNC_6(VAR_4, VAR_6, FUNC_5(VAR_6))) {
   VAR_8 = 1;
   break;
  }
 }

 FUNC_1(VAR_3);


 if (!VAR_8)
  goto end;


 VAR_5 = FUNC_4(VAR_4, ':');


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if ((FUNC_7(VAR_5, VAR_2[VAR_7].needle))) {
   VAR_9 = VAR_2[VAR_7].type;
   break;
  }
 }

end:
 return VAR_9;
}
