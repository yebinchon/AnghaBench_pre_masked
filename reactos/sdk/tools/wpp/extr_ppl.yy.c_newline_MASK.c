
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int char_number; int line_number; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
 VAR_1.line_number++;
 VAR_1.char_number = 1;

 if(VAR_2 == -1)
  return;

 VAR_0++;
 if(VAR_2)
 {
  for(;VAR_0; VAR_0--)
   FUNC_0("\n", 1);
 }
}
