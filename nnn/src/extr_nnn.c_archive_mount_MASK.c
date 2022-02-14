
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int * VAR_7 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,int*) ;
 scalar_t__ FUNC_6 (char*,char*,char*,char*,int ) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (char*) ;

__attribute__((used)) static bool FUNC_10(char *VAR_8, char *VAR_9, char *VAR_10, int *VAR_11)
{
 char *VAR_12, *VAR_13 = "archivemount";
 size_t VAR_14;

 if (!FUNC_3(VAR_13)) {
  FUNC_5(VAR_7[VAR_4], VAR_11);
  return VAR_0;
 }

 VAR_12 = FUNC_7(VAR_8);
 if (!VAR_12)
  return VAR_0;

 VAR_14 = FUNC_9(VAR_12);

 while (VAR_14 > 1)
  if (VAR_12[--VAR_14] == '.') {
   VAR_12[VAR_14] = '\0';
   break;
  }

 FUNC_0(VAR_12);


 FUNC_4(VAR_5, VAR_12, VAR_10);
 FUNC_2(VAR_12);

 if (!FUNC_1(VAR_10)) {
  FUNC_5(FUNC_8(VAR_6), VAR_11);
  return VAR_0;
 }


 FUNC_0(VAR_8);
 FUNC_0(VAR_10);
 if (FUNC_6(VAR_13, VAR_8, VAR_10, VAR_9, VAR_1)) {
  FUNC_5(VAR_7[VAR_2], VAR_11);
  return VAR_0;
 }

 return VAR_3;
}
