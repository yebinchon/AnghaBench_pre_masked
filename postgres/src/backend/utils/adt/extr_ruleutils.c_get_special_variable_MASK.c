
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ deparse_context ;
typedef int StringInfo ;
typedef int Node ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(Node *VAR_1, deparse_context *VAR_2, void *VAR_3)
{
 StringInfo VAR_4 = VAR_2->buf;





 if (!FUNC_0(VAR_1, VAR_0))
  FUNC_1(VAR_4, '(');
 FUNC_2(VAR_1, VAR_2, 1);
 if (!FUNC_0(VAR_1, VAR_0))
  FUNC_1(VAR_4, ')');
}
