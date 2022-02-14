
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(const char *VAR_7)
{
 int VAR_8 = 0;
 const char *VAR_9;

 for (VAR_9 = VAR_7; ; VAR_9++)
  switch (*VAR_9) {
  case '-':
   break;
  case 'r':
  case 'R':
   VAR_8 |= VAR_4;
   break;
  case 'w':
  case 'W':
   VAR_8 |= VAR_6;
   break;
  case 'x':
  case 'X':
   VAR_8 |= VAR_2;
   break;
  case 'a':
  case 'A':
   VAR_8 |= VAR_0;
   break;
  case 't':
  case 'T':
   VAR_8 |= VAR_5;
   break;
  case 'l':
  case 'L':
   VAR_8 |= VAR_3;
   break;
  case 'b':
  case 'B':
   VAR_8 |= VAR_1;
   break;
  default:
   return VAR_8;
  }
}
