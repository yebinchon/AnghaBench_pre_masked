
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {char* shrstr; int memstr; } ;
struct TYPE_4__ {TYPE_1__ u; int type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,char const*,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;

void FUNC_3(js_State *VAR_6, const char *VAR_7, int VAR_8)
{
 FUNC_0(1);
 if (VAR_8 <= FUNC_2(VAR_4, VAR_5)) {
  char *VAR_9 = VAR_2[VAR_3].u.shrstr;
  while (VAR_8--) *VAR_9++ = *VAR_7++;
  *VAR_9 = 0;
  VAR_2[VAR_3].type = VAR_1;
 } else {
  VAR_2[VAR_3].type = VAR_0;
  VAR_2[VAR_3].u.memstr = FUNC_1(VAR_6, VAR_7, VAR_8);
 }
 ++VAR_3;
}
