
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int step; int result; } ;
typedef TYPE_1__ base64_encodestate ;


 void* FUNC_0 (int ) ;




int FUNC_1(char* VAR_0, base64_encodestate* VAR_1)
{
 char* VAR_2 = VAR_0;

 switch (VAR_1->step)
 {
 case 129:
  *VAR_2++ = FUNC_0(VAR_1->result);
  *VAR_2++ = '=';
  *VAR_2++ = '=';
  break;
 case 128:
  *VAR_2++ = FUNC_0(VAR_1->result);
  *VAR_2++ = '=';
  break;
 case 130:
  break;
 }
 *VAR_2++ = '\0';

 return (int)(VAR_2 - VAR_0);
}
