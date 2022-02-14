
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct db_export {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {char* name; int branch_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct db_export*,int,char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;

int FUNC_2(struct db_export *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_3[VAR_5].name ; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_3[VAR_5].branch_type,
          VAR_3[VAR_5].name);
  if (VAR_6)
   break;
 }


 for (VAR_5 = 0; VAR_3[VAR_5].name ; VAR_5++) {
  const char *VAR_7 = VAR_3[VAR_5].name;
  u32 VAR_8 = VAR_3[VAR_5].branch_type;
  char VAR_9[64];

  if (VAR_8 == VAR_0 ||
      (VAR_8 & (VAR_1 | VAR_2)))
   continue;

  FUNC_1(VAR_9, sizeof(VAR_9), "trace begin / %s", VAR_7);
  VAR_6 = FUNC_0(VAR_4, VAR_8 | VAR_1, VAR_9);
  if (VAR_6)
   break;

  FUNC_1(VAR_9, sizeof(VAR_9), "%s / trace end", VAR_7);
  VAR_6 = FUNC_0(VAR_4, VAR_8 | VAR_2, VAR_9);
  if (VAR_6)
   break;
 }

 return VAR_6;
}
