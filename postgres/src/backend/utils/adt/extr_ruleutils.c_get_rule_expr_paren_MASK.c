
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; int prettyFlags; } ;
typedef TYPE_1__ deparse_context ;
typedef int Node ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(Node *VAR_0, deparse_context *VAR_1,
     bool VAR_2, Node *VAR_3)
{
 bool VAR_4;

 VAR_4 = FUNC_0(VAR_1) &&
  !FUNC_3(VAR_0, VAR_3, VAR_1->prettyFlags);

 if (VAR_4)
  FUNC_1(VAR_1->buf, '(');

 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_4)
  FUNC_1(VAR_1->buf, ')');
}
