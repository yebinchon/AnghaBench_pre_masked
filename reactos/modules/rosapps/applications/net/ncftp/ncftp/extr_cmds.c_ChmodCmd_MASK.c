
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* noglobargv; } ;
typedef int CommandPtr ;
typedef TYPE_1__* ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,char const*,int ) ;
 int FUNC_2 (int *,int,int ,char*,char const*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(const int VAR_5, const char **const VAR_6, const CommandPtr VAR_7, const ArgvInfoPtr VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_0(VAR_1);
 for (VAR_9=2; VAR_9<VAR_5; VAR_9++) {
  VAR_10 = FUNC_1(
    &VAR_0, VAR_6[VAR_9], VAR_6[1],
    (VAR_8->noglobargv[VAR_9] != 0) ? VAR_3: VAR_4
   );
  if (VAR_10 < 0) {
   FUNC_2(&VAR_0, VAR_10, VAR_2, "chmod", VAR_6[VAR_9]);

  }
 }


 FUNC_3();
}
