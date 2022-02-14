
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_data {scalar_t__ tlen; int col; int title; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct bar_data* VAR_1)
{
  int VAR_2;

  FUNC_1();
  FUNC_0();
  if (VAR_1->tlen == 0) return;
  VAR_2 = (VAR_1->col - VAR_1->tlen) / 2;
  FUNC_3(1, VAR_2);
  FUNC_2(VAR_1->title, VAR_1->tlen, 1, VAR_0);
}
