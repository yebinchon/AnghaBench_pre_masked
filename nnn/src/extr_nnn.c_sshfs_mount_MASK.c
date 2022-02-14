
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int * VAR_8 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int*) ;
 scalar_t__ FUNC_5 (char*,char*,char*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int *,char*) ;

__attribute__((used)) static bool FUNC_9(char *VAR_9, int *VAR_10)
{
 uchar VAR_11 = VAR_2;
 int VAR_12;
 char *VAR_13, *VAR_14, *VAR_15 = "sshfs";

 if (!FUNC_2(VAR_15)) {
  FUNC_4(VAR_8[VAR_5], VAR_10);
  return VAR_0;
 }

 VAR_13 = FUNC_8(((void*)0), "host: ");
 if (!VAR_13[0])
  return VAR_0;


 FUNC_3(VAR_6, VAR_13, VAR_9);
 if (!FUNC_0(VAR_9)) {
  FUNC_4(FUNC_6(VAR_7), VAR_10);
  return VAR_0;
 }


 VAR_12 = FUNC_7(VAR_13);
 VAR_13[VAR_12] = ':';
 VAR_13[VAR_12 + 1] = '\0';

 VAR_14 = FUNC_1("NNN_SSHFS_OPTS");
 if (VAR_14)
  VAR_11 |= VAR_1;
 else
  VAR_14 = VAR_15;


 if (FUNC_5(VAR_14, VAR_13, VAR_9, ((void*)0), VAR_11)) {
  FUNC_4(VAR_8[VAR_3], VAR_10);
  return VAR_0;
 }

 return VAR_4;
}
