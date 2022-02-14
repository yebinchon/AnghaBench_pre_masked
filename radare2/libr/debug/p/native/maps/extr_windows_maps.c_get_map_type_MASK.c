
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Type; } ;
typedef TYPE_1__ MEMORY_BASIC_INFORMATION ;






__attribute__((used)) static char *FUNC_0(MEMORY_BASIC_INFORMATION *VAR_0) {
 char *VAR_1;
 switch (VAR_0->Type) {
 case 130:
  VAR_1 = "IMAGE";
  break;
 case 129:
  VAR_1 = "MAPPED";
  break;
 case 128:
  VAR_1 = "PRIVATE";
  break;
 default:
  VAR_1 = "UNKNOWN";
 }
 return VAR_1;
}
