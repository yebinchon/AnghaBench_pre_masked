
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* mode; } ;
typedef TYPE_1__ php_stream ;



void FUNC_0(php_stream *VAR_0, char *VAR_1)
{


 const char *VAR_2 = VAR_0->mode;
 int VAR_3 = 0,
          VAR_4 = 0,
    VAR_5,
    VAR_6 = 0;

 if (VAR_2[0] == 'r' || VAR_2[0] == 'w' || VAR_2[0] == 'a') {
  VAR_1[VAR_6++] = VAR_2[0];
 } else {


  VAR_1[VAR_6++] = 'w';



 }


 for (VAR_5 = 1; VAR_5 < 4 && VAR_2[VAR_5] != '\0'; VAR_5++) {
  if (VAR_2[VAR_5] == 'b') {
   VAR_4 = 1;
  } else if (VAR_2[VAR_5] == '+') {
   VAR_3 = 1;
  }

 }

 if (VAR_4) {
  VAR_1[VAR_6++] = 'b';
 }
 if (VAR_3) {
  VAR_1[VAR_6++] = '+';
 }

 VAR_1[VAR_6] = '\0';
}
