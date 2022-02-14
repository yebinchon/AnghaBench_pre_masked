
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nsinfo {int dummy; } ;
struct nscookie {int dummy; } ;
typedef int build_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (char*,char const*,struct nsinfo*,int,int) ;
 int FUNC_2 (char const*,int **,int) ;
 int FUNC_3 (struct nsinfo*,struct nscookie*) ;
 int FUNC_4 (struct nscookie*) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, struct nsinfo *VAR_3)
{
 char VAR_4[VAR_1];
 u8 VAR_5[VAR_0];
 int VAR_6;
 struct nscookie VAR_7;

 FUNC_3(VAR_3, &VAR_7);
 VAR_6 = FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5));
 FUNC_4(&VAR_7);
 if (VAR_6 < 0) {
  FUNC_5("Couldn't read a build-id in %s\n", VAR_2);
  return -1;
 }

 FUNC_0(VAR_5, sizeof(VAR_5), VAR_4);
 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_3,
        0, 0);
 FUNC_5("Adding %s %s: %s\n", VAR_4, VAR_2,
   VAR_6 ? "FAIL" : "Ok");
 return VAR_6;
}
