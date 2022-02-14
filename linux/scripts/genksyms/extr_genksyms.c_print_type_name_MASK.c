
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int ,char*,char const*,...) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(enum symbol_type VAR_2, const char *VAR_3)
{
 if (VAR_1[VAR_2].name)
  FUNC_0(VAR_0, "%s %s", VAR_1[VAR_2].name, VAR_3);
 else
  FUNC_0(VAR_0, "%s", VAR_3);
}
