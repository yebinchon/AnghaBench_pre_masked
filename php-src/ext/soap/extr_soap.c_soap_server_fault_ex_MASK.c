
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int xmlDocPtr ;
typedef int xmlChar ;
typedef int soapHeader ;
typedef int sdlFunctionPtr ;
typedef int cont_len ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 size_t VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int ,int *,int *,int *,int *,int) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,int **,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int * FUNC_17 (int ,char*,int) ;
 scalar_t__ FUNC_18 (char*,int,int ) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(sdlFunctionPtr VAR_5, zval* VAR_6, soapHeader *VAR_7)
{
 int VAR_8;
 xmlChar *VAR_9;
 char VAR_10[30];
 int VAR_11;
 xmlDocPtr VAR_12;
 zval *VAR_13;
 int VAR_14 = 1;

 VAR_8 = FUNC_1(VAR_8);

 VAR_12 = FUNC_9(VAR_5, ((void*)0), ((void*)0), VAR_6, VAR_7, VAR_8);

 FUNC_13(VAR_12, &VAR_9, &VAR_11);

 if ((FUNC_5(FUNC_0(VAR_4)[VAR_3]) == VAR_0 || FUNC_19(FUNC_2("_SERVER"))) &&
  (VAR_13 = FUNC_17(FUNC_3(FUNC_0(VAR_4)[VAR_3]), "HTTP_USER_AGENT", sizeof("HTTP_USER_AGENT")-1)) != ((void*)0) &&
  FUNC_6(VAR_13) == VAR_1) {
  if (FUNC_12(FUNC_4(VAR_13), "Shockwave Flash", sizeof("Shockwave Flash")-1) == 0) {
   VAR_14 = 0;
  }
 }




 if (VAR_14) {
  FUNC_8("HTTP/1.1 500 Internal Service Error", sizeof("HTTP/1.1 500 Internal Service Error")-1, 1);
 }
 if (FUNC_18("zlib.output_compression", sizeof("zlib.output_compression"), 0)) {
  FUNC_8("Connection: close", sizeof("Connection: close")-1, 1);
 } else {
  FUNC_10(VAR_10, sizeof(VAR_10), "Content-Length: %d", VAR_11);
  FUNC_8(VAR_10, FUNC_11(VAR_10), 1);
 }
 if (VAR_8 == VAR_2) {
  FUNC_8("Content-Type: application/soap+xml; charset=utf-8", sizeof("Content-Type: application/soap+xml; charset=utf-8")-1, 1);
 } else {
  FUNC_8("Content-Type: text/xml; charset=utf-8", sizeof("Content-Type: text/xml; charset=utf-8")-1, 1);
 }

 FUNC_7(VAR_9, VAR_11);

 FUNC_15(VAR_12);
 FUNC_14(VAR_9);
 FUNC_16();
}
