
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int fcns; } ;
typedef int RCore ;
typedef int RBinJavaObj ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int ,int) ;
 char* FUNC_6 (char const*,char,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,char const*) ;
 scalar_t__ FUNC_9 (int *,char const*) ;
 char* FUNC_10 (char const*,char,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12 (RCore *VAR_0, const char *VAR_1) {
 RAnal *VAR_2 = FUNC_2 (VAR_0);
 RBinJavaObj *VAR_3 = VAR_2 ? (RBinJavaObj *) FUNC_7 (VAR_2) : ((void*)0);
 const char *VAR_4 = VAR_1? FUNC_6 (VAR_1, ' ', -1): ((void*)0), *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 ut64 VAR_7 = -1, VAR_8 = -1;
 int VAR_9 = 0;

 if (!VAR_3) {
  return VAR_9;
 } else if (!VAR_2 || !VAR_2->fcns || FUNC_11 (VAR_2->fcns) == 0) {
  FUNC_0 ("Unable to access the current analysis, perform 'af' for function analysis.\n");
  return 1;
 }

 if (!VAR_4) {
  return VAR_9;
 }

 VAR_5 = *VAR_4 ? FUNC_10 (VAR_4, ' ', -1) : ((void*)0);
 VAR_6 = VAR_5 && VAR_4 && VAR_4 != VAR_5 ? FUNC_3 (VAR_5 - VAR_4 + 2) : ((void*)0);

 if (!VAR_6) {
  return VAR_9;
 }

 FUNC_5 (VAR_6, 0, VAR_5-VAR_4);
 FUNC_4 (VAR_6, VAR_4, VAR_5-VAR_4);

 VAR_4 = FUNC_10 (VAR_4, ' ', -1);
 VAR_7 = VAR_4 && *VAR_4 && FUNC_9(VAR_0, VAR_4) ? FUNC_8 (VAR_0, VAR_4) : -1;

 VAR_4 = FUNC_10 (VAR_4, ' ', -1);
 VAR_8 = VAR_4 && *VAR_4 && FUNC_9(VAR_0, VAR_4) ? FUNC_8 (VAR_0, VAR_4) : -1;

 if (VAR_6 && VAR_8 != (ut64) -1 && VAR_7 != (ut64) -1) {
 }
 FUNC_1 (VAR_6);
 return VAR_9;
}
