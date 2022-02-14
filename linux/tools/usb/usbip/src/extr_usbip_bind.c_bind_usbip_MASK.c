
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bind_attr_path ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_6 ;
 int FUNC_1 (char*,int,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_7)
{
 char VAR_8[] = "bind";
 char VAR_9[VAR_4];
 int VAR_10 = -1;

 FUNC_1(VAR_9, sizeof(VAR_9), "%s/%s/%s/%s/%s/%s",
   VAR_3, VAR_0, VAR_1,
   VAR_2, VAR_5, VAR_8);

 VAR_10 = FUNC_4(VAR_9, VAR_7, FUNC_3(VAR_7));
 if (VAR_10 < 0) {
  FUNC_0("error binding device %s to driver: %s", VAR_7,
      FUNC_2(VAR_6));
  return -1;
 }

 return 0;
}
