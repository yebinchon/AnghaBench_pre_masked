
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(int VAR_3, char *VAR_4){

  VAR_4[0] = (VAR_3 & VAR_0) ? ']' : '.';



  switch( VAR_3 & (129|130|128) ){
    case 0: VAR_4[1] = '.'; break;
    case 129: VAR_4[1] = '-'; break;
    case 130: VAR_4[1] = '+'; break;
    case 128: VAR_4[1] = '^'; break;
    default: VAR_4[1] = '?'; break;
  }

  VAR_4[2] = (VAR_3 & VAR_2) ? '*' : '.';
  VAR_4[3] = (VAR_3 & VAR_1) ? '[' : '.';
  VAR_4[4] = '\0';
}
