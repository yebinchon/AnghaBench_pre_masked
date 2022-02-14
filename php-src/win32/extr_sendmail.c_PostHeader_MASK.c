
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char**,char*,char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int * FUNC_6 (char*,int,int ,int) ;
 int FUNC_7 (char*,int ,char*,char*) ;
 size_t FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int *) ;
 char FUNC_12 (char) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(char *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6)
{



 int VAR_7;
 char *VAR_8;
 char *VAR_9 = ((void*)0);
 size_t VAR_10;

 if (VAR_6) {
  size_t VAR_11;

  VAR_9 = FUNC_5(VAR_6);
  VAR_11 = FUNC_8(VAR_9);

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   VAR_9[VAR_10] = FUNC_12(VAR_9[VAR_10]);
  }
 }

 VAR_8 = FUNC_3(1, VAR_0);

 if (!VAR_6 || !FUNC_10(VAR_9, "date:")) {
  time_t VAR_12 = FUNC_11(((void*)0));
  zend_string *VAR_13 = FUNC_6("r", 1, VAR_12, 1);

  FUNC_7(VAR_8, VAR_0, "Date: %s\r\n", FUNC_1(VAR_13));
  FUNC_13(VAR_13);
 }

 if (!VAR_9 || !FUNC_10(VAR_9, "from:")) {
  if (!FUNC_2(&VAR_8, "From: %s\r\n", VAR_3)) {
   goto PostHeader_outofmem;
  }
 }
 if (!FUNC_2(&VAR_8, "Subject: %s\r\n", VAR_4)) {
  goto PostHeader_outofmem;
 }


 if ((VAR_9 && (!FUNC_10(VAR_9, "\r\nto:") && (FUNC_9(VAR_9, "to:", 3) != 0))) || !VAR_9) {
  if (!FUNC_2(&VAR_8, "To: %s\r\n", VAR_5)) {
   goto PostHeader_outofmem;
  }
 }
 if (VAR_6) {
  if (!FUNC_2(&VAR_8, "%s\r\n", VAR_6)) {
   goto PostHeader_outofmem;
  }
 }

 if (VAR_9) {
  FUNC_4(VAR_9);
 }
 if ((VAR_7 = FUNC_0(VAR_8)) != VAR_2) {
  FUNC_4(VAR_8);
  return (VAR_7);
 }
 FUNC_4(VAR_8);

 if ((VAR_7 = FUNC_0("\r\n")) != VAR_2) {
  return (VAR_7);
 }

 return (VAR_2);

PostHeader_outofmem:
 if (VAR_9) {
  FUNC_4(VAR_9);
 }
 return VAR_1;
}
