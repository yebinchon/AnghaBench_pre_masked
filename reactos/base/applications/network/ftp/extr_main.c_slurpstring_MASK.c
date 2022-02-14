
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static const char *
FUNC_0(void)
{
 int VAR_4 = 0;
 register char *VAR_5 = VAR_3;
 register char *VAR_6 = VAR_1;
 char *VAR_7 = VAR_1;

 if (*VAR_5 == '!' || *VAR_5 == '$') {
  switch (VAR_2) {
   case 0:
    VAR_2++;
    VAR_3++;
    return ((*VAR_5 == '!') ? "!" : "$");

   case 1:
    VAR_2++;
    VAR_0 = VAR_3;
    break;
   default:
    break;
  }
 }

S0:
 switch (*VAR_5) {

 case '\0':
  goto OUT1;

 case ' ':
 case '\t':
  VAR_5++; goto S0;

 default:
  switch (VAR_2) {
   case 0:
    VAR_2++;
    break;
   case 1:
    VAR_2++;
    VAR_0 = VAR_5;
    break;
   default:
    break;
  }
  goto S1;
 }

S1:
 switch (*VAR_5) {

 case ' ':
 case '\t':
 case '\0':
  goto OUT1;

 case '\\':
  VAR_5++; goto S2;

 case '"':
  VAR_5++; goto S3;

 default:
  *VAR_6++ = *VAR_5++;
  VAR_4 = 1;
  goto S1;
 }

S2:
 switch (*VAR_5) {

 case '\0':
  goto OUT1;

 default:
  *VAR_6++ = *VAR_5++;
  VAR_4 = 1;
  goto S1;
 }

S3:
 switch (*VAR_5) {

 case '\0':
  goto OUT1;

 case '"':
  VAR_5++; goto S1;

 default:
  *VAR_6++ = *VAR_5++;
  VAR_4 = 1;
  goto S3;
 }

OUT1:
 if (VAR_4)
  *VAR_6++ = '\0';
 VAR_1 = VAR_6;
 VAR_3 = VAR_5;
 if (VAR_4) {
  return(VAR_7);
 }
 switch (VAR_2) {
  case 0:
   VAR_2++;
   break;
  case 1:
   VAR_2++;
   VAR_0 = (char *) 0;
   break;
  default:
   break;
 }
 return((char *)0);
}
