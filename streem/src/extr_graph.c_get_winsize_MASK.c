
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; int ws_row; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,struct winsize*) ;

__attribute__((used)) static int
FUNC_1(int* VAR_3, int* VAR_4)
{
  struct winsize VAR_5;
  int VAR_6;

  VAR_6 = FUNC_0(1, VAR_2, &VAR_5);
  if (VAR_6 < 0 || VAR_5.ws_col == 0) {
    return VAR_0;
  }
  *VAR_3 = VAR_5.ws_row;
  *VAR_4 = VAR_5.ws_col;
  return VAR_1;
}
