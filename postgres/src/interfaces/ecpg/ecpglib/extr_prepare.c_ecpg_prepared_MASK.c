
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prepared_statement {TYPE_1__* stmt; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {char* command; } ;


 struct prepared_statement* FUNC_0 (char const*,struct connection*,int *) ;

char *
FUNC_1(const char *VAR_0, struct connection *VAR_1)
{
 struct prepared_statement *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0));
 return VAR_2 ? VAR_2->stmt->command : ((void*)0);
}
