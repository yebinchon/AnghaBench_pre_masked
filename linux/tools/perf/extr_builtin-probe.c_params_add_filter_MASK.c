
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,char const**) ;
 int FUNC_3 (scalar_t__,char const*,char const**) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3)
{
 const char *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 FUNC_0("Add filter: %s\n", VAR_3);
 if (!VAR_2.filter) {
  VAR_2.filter = FUNC_2(VAR_3, &VAR_4);
  if (!VAR_2.filter)
   VAR_5 = VAR_4 ? -VAR_0 : -VAR_1;
 } else
  VAR_5 = FUNC_3(VAR_2.filter, VAR_3, &VAR_4);

 if (VAR_5 == -VAR_0) {
  FUNC_1("Filter parse error at %td.\n", VAR_4 - VAR_3 + 1);
  FUNC_1("Source: \"%s\"\n", VAR_3);
  FUNC_1("         %*c\n", (int)(VAR_4 - VAR_3 + 1), '^');
 }

 return VAR_5;
}
