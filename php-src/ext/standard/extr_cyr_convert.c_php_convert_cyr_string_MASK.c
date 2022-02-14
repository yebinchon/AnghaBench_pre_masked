
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 int FUNC_0 (int *,int ,char*,char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static char * FUNC_2(unsigned char *VAR_5, size_t VAR_6, char VAR_7, char VAR_8)
{
 const unsigned char *VAR_9, *VAR_10;
 unsigned char VAR_11;
 size_t VAR_12;

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);

 switch (FUNC_1((int)(unsigned char)VAR_7))
 {
  case 'W':
   VAR_9 = VAR_4;
   break;
  case 'A':
  case 'D':
   VAR_9 = VAR_1;
   break;
  case 'I':
   VAR_9 = VAR_2;
   break;
  case 'M':
   VAR_9 = VAR_3;
   break;
  case 'K':
   break;
  default:
   FUNC_0(((void*)0), VAR_0, "Unknown source charset: %c", VAR_7);
   break;
 }

 switch (FUNC_1((int)(unsigned char)VAR_8))
 {
  case 'W':
   VAR_10 = VAR_4;
   break;
  case 'A':
  case 'D':
   VAR_10 = VAR_1;
   break;
  case 'I':
   VAR_10 = VAR_2;
   break;
  case 'M':
   VAR_10 = VAR_3;
   break;
  case 'K':
   break;
  default:
   FUNC_0(((void*)0), VAR_0, "Unknown destination charset: %c", VAR_8);
   break;
 }


 if (!VAR_5)
  return (char *)VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_11 = (VAR_9 == ((void*)0))? VAR_5[VAR_12] : VAR_9[ VAR_5[VAR_12] ];
  VAR_5[VAR_12] = (VAR_10 == ((void*)0)) ? VAR_11 : VAR_10[VAR_11 + 256];
 }
 return (char *)VAR_5;
}
