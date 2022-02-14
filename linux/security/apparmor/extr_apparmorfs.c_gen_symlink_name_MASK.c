
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(int VAR_3, const char *VAR_4, const char *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9 = VAR_3 * 6 + FUNC_5(VAR_4) + FUNC_5(VAR_5) + 11;

 VAR_7 = VAR_6 = FUNC_2(VAR_9, VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 for (; VAR_3 > 0; VAR_3--) {
  FUNC_4(VAR_7, "../../");
  VAR_7 += 6;
  VAR_9 -= 6;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_9, "raw_data/%s/%s", VAR_4, VAR_5);
 if (VAR_8 >= VAR_9 || VAR_8 < 0) {
  FUNC_1(VAR_6);
  return FUNC_0(-VAR_0);
 }

 return VAR_6;
}
