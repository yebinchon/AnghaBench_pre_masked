
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct callchain_param* value; } ;
struct callchain_param {int enabled; int record_mode; } ;
struct TYPE_2__ {int use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 struct callchain_param *VAR_6 = VAR_3->value;

 VAR_6->enabled = !VAR_5;
 VAR_6->record_mode = VAR_0;




 if (VAR_5) {
  VAR_2.use_callchain = 0;
  VAR_6->record_mode = VAR_1;
  return 0;
 }

 return FUNC_0(VAR_4);
}
