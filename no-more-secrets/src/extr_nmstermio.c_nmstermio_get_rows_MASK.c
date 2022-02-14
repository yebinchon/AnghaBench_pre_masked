
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct winsize*) ;

int FUNC_1(void) {
 struct winsize VAR_2;
 FUNC_0(VAR_0, VAR_1, &VAR_2);

 return VAR_2.ws_row;
}
