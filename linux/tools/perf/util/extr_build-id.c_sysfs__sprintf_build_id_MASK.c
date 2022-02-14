
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int notes ;
typedef int build_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (char*,int *,int) ;

int FUNC_3(const char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_1];
 u8 VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  VAR_2 = "";

 FUNC_1(VAR_4, sizeof(VAR_4), "%s/sys/kernel/notes", VAR_2);

 VAR_6 = FUNC_2(VAR_4, VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_5, sizeof(VAR_5), VAR_3);
}
