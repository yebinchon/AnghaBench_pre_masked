
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_port {char const* name; int type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dsa_port *VAR_1, const char *VAR_2)
{
 if (!VAR_2)
  VAR_2 = "eth%d";

 VAR_1->type = VAR_0;
 VAR_1->name = VAR_2;

 return 0;
}
