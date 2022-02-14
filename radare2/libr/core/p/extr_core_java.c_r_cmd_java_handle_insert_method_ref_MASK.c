
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {int fcns; } ;
typedef int RCore ;
typedef int RBinJavaObj ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char const*,char,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (char const*,char,int) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11 (RCore *VAR_0, const char *VAR_1) {
 RAnal *VAR_2 = FUNC_2 (VAR_0);
 RBinJavaObj *VAR_3 = VAR_2 ? (RBinJavaObj *) FUNC_5 (VAR_2) : ((void*)0);
 const char *VAR_4 = VAR_1? FUNC_4 (VAR_1, ' ', -1): ((void*)0), *VAR_5 = ((void*)0);
 char *VAR_6=((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 ut32 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0;

 if (!VAR_3) {
  return VAR_12;
 }
 if (!VAR_2 || !VAR_2->fcns || FUNC_8 (VAR_2->fcns) == 0) {
  FUNC_0 ("Unable to access the current analysis, perform 'af' for function analysis.\n");
  return 1;
 }
 if (!VAR_4) {
  return VAR_12;
 }

 VAR_5 = VAR_4 && *VAR_4 ? FUNC_6 (VAR_4, ' ', -1) : ((void*)0);
 VAR_6 = VAR_5 && VAR_4 && VAR_4 != VAR_5 ? FUNC_3 (VAR_5-VAR_4+1) : ((void*)0);
 VAR_9 = VAR_5 && VAR_4 ? VAR_5-VAR_4 +1 : 0;
 if (!VAR_6) {
  return VAR_12;
 }

 FUNC_9 (VAR_6, VAR_9, "%s", VAR_4);


 VAR_4 = VAR_5+1;
 VAR_5 = VAR_4 && *VAR_4 ? FUNC_6 (VAR_4, ' ', -1) : ((void*)0);
 VAR_7 = VAR_5 && VAR_4 && VAR_4 != VAR_5 ? FUNC_3 (VAR_5-VAR_4+1) : ((void*)0);
 VAR_10 = VAR_5 && VAR_4 ? VAR_5-VAR_4 +1 : 0;
 if (!VAR_7) {
  FUNC_1 (VAR_6);
  return VAR_12;
 }
 FUNC_9 (VAR_7, VAR_10, "%s", VAR_4);



 VAR_4 = VAR_5 + 1;
 VAR_5 = VAR_4 && *VAR_4 ? FUNC_6 (VAR_4, ' ', -1) : ((void*)0);
 if (VAR_5) {
  VAR_8 = VAR_5 && VAR_4 && VAR_4 != VAR_5 ? FUNC_3 (VAR_5-VAR_4+1) : ((void*)0);
  VAR_11 = VAR_5-VAR_4 +1;
 } else if (VAR_4 && *VAR_4) {
  VAR_11 = FUNC_10 (VAR_4) + 1;
  VAR_8 = VAR_11 > 1 ? FUNC_3 (VAR_11) : ((void*)0);
 }

 if (!VAR_8) {
  FUNC_1 (VAR_6);
  FUNC_1 (VAR_7);
  return VAR_12;
 }
 FUNC_9 (VAR_8, VAR_11, "%s", VAR_4);



 FUNC_7 ("Would be adding class name:%s, name: %s, descriptor: %s\n", VAR_6, VAR_7, VAR_8);
 FUNC_1 (VAR_6);
 FUNC_1 (VAR_7);
 FUNC_1 (VAR_8);
 VAR_12 = 1;
 return VAR_12;
}
