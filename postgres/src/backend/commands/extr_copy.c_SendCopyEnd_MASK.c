
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ copy_dest; TYPE_1__* fe_msgbuf; } ;
struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_2__* CopyState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char) ;

__attribute__((used)) static void
FUNC_5(CopyState VAR_1)
{
 if (VAR_1->copy_dest == VAR_0)
 {

  FUNC_0(VAR_1->fe_msgbuf->len == 0);

  FUNC_4('c');
 }
 else
 {
  FUNC_1(VAR_1, "\\.", 2);

  FUNC_2(VAR_1);
  FUNC_3(0);
 }
}
