
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
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int **,int) ;
 int FUNC_5 (struct nsinfo*,struct nscookie*) ;
 int FUNC_6 (struct nscookie*) ;
 int FUNC_7 (char*,char const*,...) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, struct nsinfo *VAR_3)
{
 u8 VAR_4[VAR_0];
 char VAR_5[VAR_1];
 struct nscookie VAR_6;

 int VAR_7;

 FUNC_5(VAR_3, &VAR_6);
 VAR_7 = FUNC_4(VAR_2, &VAR_4, sizeof(VAR_4));
 FUNC_6(&VAR_6);
 if (VAR_7 < 0) {
  FUNC_7("Couldn't read a build-id in %s\n", VAR_2);
  return -1;
 }
 VAR_7 = 0;

 FUNC_0(VAR_4, sizeof(VAR_4), VAR_5);
 if (FUNC_2(VAR_5))
  VAR_7 = FUNC_3(VAR_5);

 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_3, 0,
         0);

 FUNC_7("Updating %s %s: %s\n", VAR_5, VAR_2,
   VAR_7 ? "FAIL" : "Ok");

 return VAR_7;
}
