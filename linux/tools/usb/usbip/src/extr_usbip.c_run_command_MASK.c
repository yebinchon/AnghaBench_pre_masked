
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int (* fn ) (int,char**) ;int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char**) ;

__attribute__((used)) static int FUNC_2(const struct command *VAR_0, int VAR_1, char *VAR_2[])
{
 FUNC_0("running command: `%s'", VAR_0->name);
 return VAR_0->fn(VAR_1, VAR_2);
}
