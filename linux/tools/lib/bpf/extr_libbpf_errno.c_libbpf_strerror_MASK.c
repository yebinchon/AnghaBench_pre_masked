
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (int,char*,size_t) ;

int FUNC_3(int VAR_3, char *VAR_4, size_t VAR_5)
{
 if (!VAR_4 || !VAR_5)
  return -1;

 VAR_3 = VAR_3 > 0 ? VAR_3 : -VAR_3;

 if (VAR_3 < VAR_1) {
  int VAR_6;

  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
  VAR_4[VAR_5 - 1] = '\0';
  return VAR_6;
 }

 if (VAR_3 < VAR_0) {
  const char *VAR_7;

  VAR_7 = VAR_2[FUNC_0(VAR_3)];
  FUNC_1(VAR_4, VAR_5, "%s", VAR_7);
  VAR_4[VAR_5 - 1] = '\0';
  return 0;
 }

 FUNC_1(VAR_4, VAR_5, "Unknown libbpf error %d", VAR_3);
 VAR_4[VAR_5 - 1] = '\0';
 return -1;
}
