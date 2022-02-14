
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_field {int offset; int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct tp_field *VAR_7, int VAR_8, int VAR_9, bool VAR_10)
{
 VAR_7->offset = VAR_9;

 switch (VAR_8) {
 case 1:
  VAR_7->integer = VAR_6;
  break;
 case 2:
  VAR_7->integer = VAR_10 ? VAR_0 : VAR_3;
  break;
 case 4:
  VAR_7->integer = VAR_10 ? VAR_1 : VAR_4;
  break;
 case 8:
  VAR_7->integer = VAR_10 ? VAR_2 : VAR_5;
  break;
 default:
  return -1;
 }

 return 0;
}
