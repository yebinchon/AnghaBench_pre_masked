
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
struct TYPE_6__ {scalar_t__ ctxactive; } ;
struct TYPE_8__ {char* c_path; char* c_last; char* c_name; TYPE_1__ c_cfg; } ;
struct TYPE_7__ {int curctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int) ;
 size_t VAR_9 ;
 TYPE_4__* VAR_10 ;
 char* VAR_11 ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char const*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int VAR_15 ;
 size_t FUNC_4 (int,char*,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int) ;
 int FUNC_6 (char*,char*,char*,char*,int ) ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static bool FUNC_8(char **VAR_16, const char *VAR_17, char *VAR_18, char *VAR_19, char **VAR_20, char **VAR_21)
{
 int VAR_22;
 size_t VAR_23;

 if (!VAR_14) {
  FUNC_3();
  VAR_14 = VAR_7;
 }

 VAR_22 = FUNC_2(VAR_13, VAR_5 | VAR_4);
 if (VAR_22 == -1)
  return VAR_1;


 FUNC_1(VAR_15, VAR_17, VAR_18);

 if (VAR_19 && VAR_19[0]) {
  FUNC_7(*VAR_20, VAR_19, VAR_3);
  FUNC_6(VAR_18, *VAR_20, *VAR_16, *VAR_16, VAR_2);
 } else
  FUNC_6(VAR_18, ((void*)0), *VAR_16, *VAR_16, VAR_2);

 VAR_23 = FUNC_4(VAR_22, VAR_11, VAR_6);
 VAR_11[VAR_23] = '\0';

 FUNC_0(VAR_22);

 if (VAR_23 > 1) {
  int VAR_24 = VAR_11[0] - '0';

  if (VAR_24 == 0 || VAR_24 == VAR_8.curctx + 1) {
   FUNC_7(*VAR_21, *VAR_16, VAR_6);
   FUNC_7(*VAR_16, VAR_11 + 1, VAR_6);
  } else if (VAR_24 >= 1 && VAR_24 <= VAR_0) {
   int VAR_25 = VAR_24 - 1;

   VAR_12[VAR_25].c_cfg.ctxactive = 0;
   FUNC_5(&VAR_8, VAR_11 + 1, VAR_10[VAR_9].name, VAR_25);
   *VAR_16 = VAR_12[VAR_25].c_path;
   *VAR_21 = VAR_12[VAR_25].c_last;
   *VAR_20 = VAR_12[VAR_25].c_name;
  }
 }

 return VAR_7;
}
