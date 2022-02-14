
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* usage; char* name; } ;
typedef TYPE_1__* CommandPtr ;


 int FUNC_0 (char*,char*,char*) ;

void
FUNC_1(CommandPtr VAR_0)
{
 if (VAR_0->usage != ((void*)0))
  (void) FUNC_0("Usage: %s %s\n", VAR_0->name, VAR_0->usage);
}
