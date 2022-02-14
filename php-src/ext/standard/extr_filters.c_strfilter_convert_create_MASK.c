
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int uint8_t ;
typedef int php_stream_filter ;
typedef int php_convert_filter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *,int,int *,char const*,int ) ;
 int FUNC_5 (int *,int ,char*,char const*) ;
 int * FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*,char) ;
 int VAR_7 ;

__attribute__((used)) static php_stream_filter *FUNC_9(const char *VAR_8, zval *VAR_9, uint8_t VAR_10)
{
 php_convert_filter *VAR_11;
 php_stream_filter *VAR_12 = ((void*)0);

 char *VAR_13;
 int VAR_14 = 0;

 if (VAR_9 != ((void*)0) && FUNC_1(VAR_9) != VAR_1) {
  FUNC_5(((void*)0), VAR_0, "stream filter (%s): invalid filter parameter", VAR_8);
  return ((void*)0);
 }

 if ((VAR_13 = FUNC_8(VAR_8, '.')) == ((void*)0)) {
  return ((void*)0);
 }
 ++VAR_13;

 VAR_11 = FUNC_3(sizeof(php_convert_filter), VAR_10);

 if (FUNC_7(VAR_13, "base64-encode") == 0) {
  VAR_14 = VAR_3;
 } else if (FUNC_7(VAR_13, "base64-decode") == 0) {
  VAR_14 = VAR_2;
 } else if (FUNC_7(VAR_13, "quoted-printable-encode") == 0) {
  VAR_14 = VAR_5;
 } else if (FUNC_7(VAR_13, "quoted-printable-decode") == 0) {
  VAR_14 = VAR_4;
 }

 if (FUNC_4(VAR_11, VAR_14,
  (VAR_9 != ((void*)0) ? FUNC_0(VAR_9) : ((void*)0)),
  VAR_8, VAR_10) != VAR_6) {
  goto out;
 }

 VAR_12 = FUNC_6(&VAR_7, VAR_11, VAR_10);
out:
 if (VAR_12 == ((void*)0)) {
  FUNC_2(VAR_11, VAR_10);
 }

 return VAR_12;
}
