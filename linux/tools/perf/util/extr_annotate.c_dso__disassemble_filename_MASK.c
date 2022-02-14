
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {scalar_t__ symtab_type; char* long_name; scalar_t__ has_build_id; } ;
typedef int linkname ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,size_t,char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct dso*,int *,int ,int) ;
 scalar_t__ FUNC_4 (struct dso*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,int ) ;

__attribute__((used)) static int FUNC_11(struct dso *VAR_7, char *VAR_8, size_t VAR_9)
{
 char VAR_10[VAR_3];
 char *VAR_11;
 char *VAR_12 = ((void*)0);
 char *VAR_13;

 if (VAR_7->symtab_type == VAR_0 &&
     !FUNC_4(VAR_7))
  return VAR_6;

 VAR_11 = FUNC_3(VAR_7, ((void*)0), 0, 0);
 if (VAR_11) {
  FUNC_0(VAR_8, VAR_9, VAR_11);
  FUNC_5(VAR_11);
 } else {
  if (VAR_7->has_build_id)
   return VAR_2;
  goto fallback;
 }

 VAR_12 = FUNC_7(VAR_8);
 if (!VAR_12)
  return VAR_2;






 VAR_13 = FUNC_9(VAR_12, '/');
 if (VAR_13 && FUNC_8(VAR_13) < VAR_5 - 2)
  FUNC_2(VAR_12);

 if (FUNC_4(VAR_7) ||
     FUNC_6(VAR_12, VAR_10, sizeof(VAR_10)) < 0 ||
     FUNC_10(VAR_10, VAR_1) ||
     FUNC_1(VAR_8, VAR_4)) {
fallback:





  FUNC_0(VAR_8, VAR_9, VAR_7->long_name);
 }

 FUNC_5(VAR_12);
 return 0;
}
