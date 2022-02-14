
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modules {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 void* FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*,int ,int) ;
 int VAR_2 ;
 char* FUNC_6 (char const*,char) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int) ;

__attribute__((used)) static void *
FUNC_9(struct modules *VAR_3, const char * VAR_4) {
 const char *VAR_5;
 const char * VAR_6 = VAR_3->path;
 size_t VAR_7 = FUNC_7(VAR_6);
 size_t VAR_8 = FUNC_7(VAR_4);

 int VAR_9 = VAR_7 + VAR_8;

 void * VAR_10 = ((void*)0);
 char VAR_11[VAR_9];
 do
 {
  FUNC_5(VAR_11,0,VAR_9);
  while (*VAR_6 == ';') VAR_6++;
  if (*VAR_6 == '\0') break;
  VAR_5 = FUNC_6(VAR_6, ';');
  if (VAR_5 == ((void*)0)) VAR_5 = VAR_6 + FUNC_7(VAR_6);
  int VAR_12 = VAR_5 - VAR_6;
  int VAR_13;
  for (VAR_13=0;VAR_6[VAR_13]!='?' && VAR_13 < VAR_12 ;VAR_13++) {
   VAR_11[VAR_13] = VAR_6[VAR_13];
  }
  FUNC_4(VAR_11+VAR_13,VAR_4,VAR_8);
  if (VAR_6[VAR_13] == '?') {
   FUNC_8(VAR_11+VAR_13+VAR_8,VAR_6+VAR_13+1,VAR_12 - VAR_13 - 1);
  } else {
   FUNC_3(VAR_2,"Invalid C service path\n");
   FUNC_2(1);
  }
  VAR_10 = FUNC_1(VAR_11, VAR_1 | VAR_0);
  VAR_6 = VAR_5;
 }while(VAR_10 == ((void*)0));

 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_2, "try open %s failed : %s\n",VAR_4,FUNC_0());
 }

 return VAR_10;
}
