
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1( int VAR_2, int VAR_3, int VAR_4, int VAR_5 ) {
    if( VAR_3 ) {
 switch( VAR_2 ) {
     FUNC_0(0,VAR_1);
     FUNC_0(1,VAR_1);
     FUNC_0(2,VAR_1);
     FUNC_0(3,VAR_1);
 }
    } else {
 switch( VAR_2 ) {
     FUNC_0(0,VAR_0);
     FUNC_0(1,VAR_0);
     FUNC_0(2,VAR_0);
     FUNC_0(3,VAR_0);
 }
    }
    __asm__("isync\n\tsync");
}
