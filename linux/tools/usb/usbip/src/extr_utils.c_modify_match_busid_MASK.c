
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int match_busid_attr_path ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int VAR_7 ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(char *VAR_8, int VAR_9)
{
 char VAR_10[] = "match_busid";
 char VAR_11[VAR_0 + 4];
 char VAR_12[VAR_5];
 int VAR_13;
 int VAR_14;

 FUNC_1(VAR_12, sizeof(VAR_12),
   "%s/%s/%s/%s/%s/%s", VAR_4, VAR_1,
   VAR_2, VAR_3, VAR_6,
   VAR_10);

 if (VAR_9)
  VAR_14 = FUNC_1(VAR_11, VAR_0 + 4, "add %s",
        VAR_8);
 else
  VAR_14 = FUNC_1(VAR_11, VAR_0 + 4, "del %s",
        VAR_8);

 VAR_13 = FUNC_3(VAR_12, VAR_11,
       VAR_14);
 if (VAR_13 < 0) {
  FUNC_0("failed to write match_busid: %s", FUNC_2(VAR_7));
  return -1;
 }

 return 0;
}
