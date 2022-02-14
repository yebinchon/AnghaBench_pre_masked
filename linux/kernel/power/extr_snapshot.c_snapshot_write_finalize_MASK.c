
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {int cur; int buffer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(struct snapshot_handle *VAR_3)
{
 FUNC_0();

 FUNC_5(VAR_3->buffer);
 FUNC_4();
 FUNC_2(VAR_3->buffer);

 if (VAR_3->cur > 1 && VAR_3->cur > VAR_1 + VAR_0) {
  FUNC_3(&VAR_2);
  FUNC_1();
 }
}
