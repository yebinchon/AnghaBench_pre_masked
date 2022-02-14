
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_1 (int,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,...) ;
 char* FUNC_3 (int,char*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, char *VAR_6, size_t VAR_7)
{
 char VAR_8[VAR_0];
 const char *VAR_9;

 if (!VAR_6 || !VAR_7)
  return -1;

 VAR_5 = VAR_5 > 0 ? VAR_5 : -VAR_5;

 if (VAR_5 >= VAR_3)
  return FUNC_1(VAR_5, VAR_6, VAR_7);

 if (VAR_5 >= VAR_2 && VAR_5 < VAR_1) {
  VAR_9 = VAR_4[FUNC_0(VAR_5)];
  FUNC_2(VAR_6, VAR_7, "%s", VAR_9);
  VAR_6[VAR_7 - 1] = '\0';
  return 0;
 }

 if (VAR_5 >= VAR_1)
  FUNC_2(VAR_6, VAR_7, "Unknown bpf loader error %d", VAR_5);
 else
  FUNC_2(VAR_6, VAR_7, "%s",
    FUNC_3(VAR_5, VAR_8, sizeof(VAR_8)));

 VAR_6[VAR_7 - 1] = '\0';
 return -1;
}
