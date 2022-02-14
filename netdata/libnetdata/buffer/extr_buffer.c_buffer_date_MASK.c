
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* buffer; size_t len; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BUFFER *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{




    FUNC_0(VAR_0, 36);

    char *VAR_7 = &VAR_0->buffer[VAR_0->len];
  char *VAR_8 = VAR_7;

  *VAR_8++ = '0' + VAR_1 / 1000; VAR_1 %= 1000;
  *VAR_8++ = '0' + VAR_1 / 100; VAR_1 %= 100;
  *VAR_8++ = '0' + VAR_1 / 10;
  *VAR_8++ = '0' + VAR_1 % 10;
  *VAR_8++ = '-';
  *VAR_8++ = '0' + VAR_2 / 10;
  *VAR_8++ = '0' + VAR_2 % 10;
  *VAR_8++ = '-';
  *VAR_8++ = '0' + VAR_3 / 10;
  *VAR_8++ = '0' + VAR_3 % 10;
  *VAR_8++ = ' ';
  *VAR_8++ = '0' + VAR_4 / 10;
  *VAR_8++ = '0' + VAR_4 % 10;
  *VAR_8++ = ':';
  *VAR_8++ = '0' + VAR_5 / 10;
  *VAR_8++ = '0' + VAR_5 % 10;
  *VAR_8++ = ':';
  *VAR_8++ = '0' + VAR_6 / 10;
  *VAR_8++ = '0' + VAR_6 % 10;
  *VAR_8 = '\0';

    VAR_0->len += (size_t)(VAR_8 - VAR_7);


    VAR_0->buffer[VAR_0->len] = '\0';
    FUNC_1(VAR_0);
}
