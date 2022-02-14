
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ax25_call; } ;
typedef TYPE_1__ ax25_address ;



char *FUNC_0(char *VAR_0, const ax25_address *VAR_1)
{
 char VAR_2, *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_0; VAR_4 < 6; VAR_4++) {
  VAR_2 = (VAR_1->ax25_call[VAR_4] >> 1) & 0x7F;

  if (VAR_2 != ' ') *VAR_3++ = VAR_2;
 }

 *VAR_3++ = '-';

 if ((VAR_4 = ((VAR_1->ax25_call[6] >> 1) & 0x0F)) > 9) {
  *VAR_3++ = '1';
  VAR_4 -= 10;
 }

 *VAR_3++ = VAR_4 + '0';
 *VAR_3++ = '\0';

 if (*VAR_0 == '\0' || *VAR_0 == '-')
    return "*";

 return VAR_0;

}
