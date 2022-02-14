
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ iconv_t ;
struct TYPE_3__ {size_t string_len; scalar_t__ string; int language_id; int encoding_id; int platform_id; } ;
typedef TYPE_1__ FT_SfntName ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (int ,int ,int ) ;
 size_t FUNC_3 (scalar_t__,char**,size_t*,char**,size_t*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char const*) ;

char *FUNC_6(FT_SfntName *VAR_3)
{
 const char *VAR_4 = FUNC_2(VAR_3->platform_id,
           VAR_3->encoding_id,
           VAR_3->language_id);
 char VAR_5[256];
 char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;

 if (!VAR_4) {
  FUNC_0(VAR_0,
       "invalid character set found, "
       "platform_id: %d, encoding_id: %d, "
       "language_id: %d",
       VAR_3->platform_id, VAR_3->encoding_id,
       VAR_3->language_id);
  return ((void*)0);
 }

 iconv_t VAR_10 = FUNC_5("UTF-8", VAR_4);
 if (VAR_10 == (iconv_t)-1) {
  FUNC_0(VAR_0,
       "couldn't intialize font code page "
       "conversion:  '%s' to 'utf-8': errno = %d",
       VAR_4, (int)VAR_2);
  return ((void*)0);
 }

 VAR_6 = (char *)VAR_3->string;
 VAR_7 = VAR_5;
 VAR_8 = VAR_3->string_len;
 VAR_9 = 256;

 size_t VAR_11 = FUNC_3(VAR_10, &VAR_6, &VAR_8, &VAR_7, &VAR_9);
 if (VAR_11 == (size_t)-1) {
  FUNC_0(VAR_1, "couldn't convert font name text: errno = %d",
       (int)VAR_2);
  FUNC_4(VAR_10);
  return ((void*)0);
 }

 FUNC_4(VAR_10);
 *VAR_7 = 0;
 return FUNC_1(VAR_5);
}
