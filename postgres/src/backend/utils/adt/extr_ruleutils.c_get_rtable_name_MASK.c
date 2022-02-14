
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rtable_names; } ;
typedef TYPE_1__ deparse_namespace ;
struct TYPE_5__ {int namespaces; } ;
typedef TYPE_2__ deparse_context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static char *
FUNC_4(int VAR_0, deparse_context *VAR_1)
{
 deparse_namespace *VAR_2 = (deparse_namespace *) FUNC_1(VAR_1->namespaces);

 FUNC_0(VAR_0 > 0 && VAR_0 <= FUNC_2(VAR_2->rtable_names));
 return (char *) FUNC_3(VAR_2->rtable_names, VAR_0 - 1);
}
