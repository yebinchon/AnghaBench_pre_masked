
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char const*,int*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_2];
 int VAR_7, VAR_8;
 FILE *VAR_9;

 VAR_9 = FUNC_1(VAR_4, "r");
 if (!VAR_9) {
  VAR_7 = -VAR_3;
  FUNC_4("failed to open '%s': %s\n", VAR_4,
    FUNC_3(VAR_7, VAR_6, sizeof(VAR_6)));
  return VAR_7;
 }
 VAR_7 = FUNC_2(VAR_9, VAR_5, &VAR_8);
 if (VAR_7 != 1) {
  VAR_7 = VAR_7 == VAR_1 ? -VAR_0 : -VAR_3;
  FUNC_4("failed to parse '%s': %s\n", VAR_4,
   FUNC_3(VAR_7, VAR_6, sizeof(VAR_6)));
  FUNC_0(VAR_9);
  return VAR_7;
 }
 FUNC_0(VAR_9);
 return VAR_8;
}
