
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct class {int dummy; } ;
struct TYPE_4__ {int revision; int minor; int major; } ;
struct TYPE_3__ {int * function; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 struct class* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct class*,int *,int ,int *,char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_8 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 int VAR_8 = 0;
 static struct class *VAR_9;

 FUNC_8("IFX MEI Version %ld.%02ld.%02ld\n", VAR_5.major, VAR_5.minor, VAR_5.revision);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (FUNC_4 (VAR_8) != 0) {
   FUNC_2("Init device fail!\n");
   return -VAR_2;
  }
  FUNC_3 (VAR_8);
 }
  for (VAR_8 = 0; VAR_8 <= VAR_1 ; VAR_8++)
  VAR_6[VAR_8].function = ((void*)0);





 VAR_9 = FUNC_6(VAR_4, "ifx_mei");
 FUNC_7(VAR_9, ((void*)0), FUNC_5(VAR_3, 0), ((void*)0), "ifx_mei");
 return 0;
}
