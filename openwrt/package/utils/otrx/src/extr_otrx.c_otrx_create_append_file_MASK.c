
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ssize_t ;
typedef int buf ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (int *,int,int,int *) ;
 size_t FUNC_4 (int *,int,size_t,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_5(FILE *VAR_4, const char *VAR_5) {
 FILE *VAR_6;
 size_t VAR_7;
 ssize_t VAR_8 = 0;
 uint8_t VAR_9[1024];

 VAR_6 = FUNC_1(VAR_5, "r");
 if (!VAR_6) {
  FUNC_2(VAR_2, "Couldn't open %s\n", VAR_5);
  return -VAR_0;
 }

 while ((VAR_7 = FUNC_3(VAR_9, 1, sizeof(VAR_9), VAR_6)) > 0) {
  if (FUNC_4(VAR_9, 1, VAR_7, VAR_4) != VAR_7) {
   FUNC_2(VAR_2, "Couldn't write %zu B to %s\n", VAR_7, VAR_3);
   VAR_8 = -VAR_1;
   break;
  }
  VAR_8 += VAR_7;
 }

 FUNC_0(VAR_6);

 return VAR_8;
}
