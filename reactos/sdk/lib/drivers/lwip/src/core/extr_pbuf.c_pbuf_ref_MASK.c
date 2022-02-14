
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int ref; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void
FUNC_3(struct pbuf *VAR_1)
{
  FUNC_0(VAR_0);

  if (VAR_1 != ((void*)0)) {
    FUNC_1(VAR_0);
    ++(VAR_1->ref);
    FUNC_2(VAR_0);
  }
}
