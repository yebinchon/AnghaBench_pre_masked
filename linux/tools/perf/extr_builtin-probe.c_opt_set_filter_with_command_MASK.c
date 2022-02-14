
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int short_name; } ;
struct TYPE_2__ {int command; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_1,
           const char *VAR_2, int VAR_3)
{
 if (!VAR_3)
  VAR_0.command = VAR_1->short_name;

 if (VAR_2)
  return FUNC_0(VAR_2);

 return 0;
}
