
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buff_for_parsing; int amount_of_read_chars; } ;
typedef TYPE_1__ SStateInfo ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_2(SStateInfo *VAR_0)
{
 char *VAR_1 = ((void*)0);
 if (*VAR_0->buff_for_parsing >= '0' && *VAR_0->buff_for_parsing <= '8') {
  VAR_1 = (char *) FUNC_0 (2);
  VAR_1[0] = *VAR_0->buff_for_parsing + 1;
  VAR_1[1] = '\0';
  VAR_0->buff_for_parsing++;
  VAR_0->amount_of_read_chars++;
 } else if (*VAR_0->buff_for_parsing == '9') {
  VAR_1 = (char *) FUNC_0 (3);
  VAR_1[0] = '1';
  VAR_1[1] = '0';
  VAR_1[2] = '\0';
  VAR_0->buff_for_parsing++;
  VAR_0->amount_of_read_chars++;
 } else if (*VAR_0->buff_for_parsing >= 'A' && *VAR_0->buff_for_parsing <= 'P') {
  int VAR_2 = 0;

  while (*VAR_0->buff_for_parsing >= 'A' && *VAR_0->buff_for_parsing <= 'P') {
   VAR_2 *= 16;
   VAR_2 += *VAR_0->buff_for_parsing - 'A';
   VAR_0->buff_for_parsing++;
   VAR_0->amount_of_read_chars++;
  }

  if (*VAR_0->buff_for_parsing != '@') {
   return VAR_1;
  }

  VAR_1 = (char *)FUNC_0 (16);
  FUNC_1 (VAR_1, "%u", VAR_2);
  VAR_0->buff_for_parsing++;
  VAR_0->amount_of_read_chars++;
 }

 return VAR_1;
}
