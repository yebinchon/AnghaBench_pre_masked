
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rerr {scalar_t__ code; int name; } ;
struct TYPE_3__ {int re_endp; } ;
typedef TYPE_1__ RRegex ;


 struct rerr* VAR_0 ;
 int FUNC_0 (char*,int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static char *
FUNC_2(const RRegex *VAR_1, char *VAR_2, int VAR_3)
{
 struct rerr *VAR_4;

 for (VAR_4 = VAR_0; VAR_4->code != 0; VAR_4++) {
  if (FUNC_1 (VAR_4->name, VAR_1->re_endp) == 0) {
   break;
  }
 }
 if (VAR_4->code == 0) {
  return ("0");
 }

 (void)FUNC_0(VAR_2, VAR_3, "%d", VAR_4->code);
 return(VAR_2);
}
