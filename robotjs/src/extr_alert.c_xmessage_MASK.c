
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char**,int*) ;

__attribute__((used)) static int FUNC_2(char *VAR_3[], int *VAR_4)
{
 static const char * const VAR_5[] = {"gmessage", "gxmessage",
                                          "kmessage", "xmessage"};
 static int VAR_6 = -1;


 char *VAR_7 = ((void*)0);
 int VAR_8;


 if (VAR_6 >= 0) {
  FUNC_0(VAR_6 < (sizeof(VAR_5) / sizeof(VAR_5[0])));

  VAR_7 = VAR_3[0] = (char *)VAR_5[VAR_6];
  VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4);
 } else {


  size_t VAR_9;
  for (VAR_9 = 0; VAR_9 < (sizeof(VAR_5) / sizeof(VAR_5[0])); ++VAR_9) {
   VAR_7 = VAR_3[0] = (char *)VAR_5[VAR_9];
   VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4);
   if (VAR_8 != VAR_0) break;
  }

  if (VAR_8 == VAR_2) VAR_6 = VAR_9;
 }

 return VAR_8;
}
