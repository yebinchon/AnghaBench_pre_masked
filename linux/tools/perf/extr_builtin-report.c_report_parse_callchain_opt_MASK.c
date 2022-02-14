
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct callchain_param* value; } ;
struct callchain_param {int enabled; int mode; } ;
struct TYPE_2__ {int use_callchain; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(const struct option *VAR_2, const char *VAR_3, int VAR_4)
{
 struct callchain_param *VAR_5 = VAR_2->value;

 VAR_5->enabled = !VAR_4;



 if (VAR_4) {
  VAR_1.use_callchain = 0;
  VAR_5->mode = VAR_0;
  return 0;
 }

 return FUNC_0(VAR_3);
}
