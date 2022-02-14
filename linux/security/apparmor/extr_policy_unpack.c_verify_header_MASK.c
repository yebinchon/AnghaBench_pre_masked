
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ext {int version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int *,char*,struct aa_ext*,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (struct aa_ext*,char const**,char*) ;
 int FUNC_5 (struct aa_ext*,int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct aa_ext *VAR_3, int VAR_4, const char **VAR_5)
{
 int VAR_6 = -VAR_0;
 const char *VAR_7 = ((void*)0);
 *VAR_5 = ((void*)0);


 if (!FUNC_5(VAR_3, &VAR_3->version, "version")) {
  if (VAR_4) {
   FUNC_2(((void*)0), ((void*)0), ((void*)0), "invalid profile format",
        VAR_3, VAR_6);
   return VAR_6;
  }
 }





 if (FUNC_1(VAR_3->version, VAR_1) || FUNC_0(VAR_3->version, VAR_2)) {
  FUNC_2(((void*)0), ((void*)0), ((void*)0), "unsupported interface version",
       VAR_3, VAR_6);
  return VAR_6;
 }


 if (FUNC_4(VAR_3, &VAR_7, "namespace")) {
  if (*VAR_7 == '\0') {
   FUNC_2(((void*)0), ((void*)0), ((void*)0), "invalid namespace name",
        VAR_3, VAR_6);
   return VAR_6;
  }
  if (*VAR_5 && FUNC_3(*VAR_5, VAR_7))
   FUNC_2(((void*)0), ((void*)0), ((void*)0), "invalid ns change", VAR_3,
        VAR_6);
  else if (!*VAR_5)
   *VAR_5 = VAR_7;
 }

 return 0;
}
