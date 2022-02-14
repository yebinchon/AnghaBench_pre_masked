
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_conv_qprint_encode ;
typedef int php_conv_qprint_decode ;
typedef int php_conv_base64_encode ;
typedef int php_conv_base64_decode ;
typedef char php_conv ;
typedef int HashTable ;


 int FUNC_0 (int const*,int,char*) ;
 int FUNC_1 (int const*,char*,size_t,char*,int ) ;
 int FUNC_2 (int const*,unsigned int,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (int,int) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned int,char*,size_t,int,int) ;
 int FUNC_8 (int *,char*,size_t,int,int) ;
 int FUNC_9 (int *,unsigned int,char*,size_t,int,int,int) ;

__attribute__((used)) static php_conv *FUNC_10(int VAR_2, const HashTable *VAR_3, int VAR_4)
{


 php_conv *VAR_5 = ((void*)0);

 switch (VAR_2) {
  case 130: {
   unsigned int VAR_6 = 0;
   char *VAR_7 = ((void*)0);
   size_t VAR_8;

   if (VAR_3 != ((void*)0)) {
    FUNC_1(VAR_3, VAR_7, VAR_8, "line-break-chars", 0);
    FUNC_2(VAR_3, VAR_6, "line-length");
    if (VAR_6 < 4) {
     if (VAR_7 != ((void*)0)) {
      FUNC_3(VAR_7, 0);
     }
     VAR_7 = ((void*)0);
    } else {
     if (VAR_7 == ((void*)0)) {
      VAR_7 = FUNC_5("\r\n", 0);
      VAR_8 = 2;
     }
    }
   }
   VAR_5 = FUNC_4(sizeof(php_conv_base64_encode), VAR_4);
   if (VAR_7 != ((void*)0)) {
    if (FUNC_7((php_conv_base64_encode *)VAR_5, VAR_6, VAR_7, VAR_8, 1, VAR_4)) {
     if (VAR_7 != ((void*)0)) {
      FUNC_3(VAR_7, 0);
     }
     goto out_failure;
    }
    FUNC_3(VAR_7, 0);
   } else {
    if (FUNC_7((php_conv_base64_encode *)VAR_5, 0, ((void*)0), 0, 0, VAR_4)) {
     goto out_failure;
    }
   }
  } break;

  case 131:
   VAR_5 = FUNC_4(sizeof(php_conv_base64_decode), VAR_4);
   if (FUNC_6((php_conv_base64_decode *)VAR_5)) {
    goto out_failure;
   }
   break;

  case 128: {
   unsigned int VAR_9 = 0;
   char *VAR_10 = ((void*)0);
   size_t VAR_11;
   int VAR_12 = 0;

   if (VAR_3 != ((void*)0)) {
    int VAR_13 = 0;
    int VAR_14 = 0;

    FUNC_1(VAR_3, VAR_10, VAR_11, "line-break-chars", 0);
    FUNC_2(VAR_3, VAR_9, "line-length");
    FUNC_0(VAR_3, VAR_13, "binary");
    FUNC_0(VAR_3, VAR_14, "force-encode-first");

    if (VAR_9 < 4) {
     if (VAR_10 != ((void*)0)) {
      FUNC_3(VAR_10, 0);
     }
     VAR_10 = ((void*)0);
    } else {
     if (VAR_10 == ((void*)0)) {
      VAR_10 = FUNC_5("\r\n", 0);
      VAR_11 = 2;
     }
    }
    VAR_12 |= (VAR_13 ? VAR_0 : 0);
    VAR_12 |= (VAR_14 ? VAR_1 : 0);
   }
   VAR_5 = FUNC_4(sizeof(php_conv_qprint_encode), VAR_4);
   if (VAR_10 != ((void*)0)) {
    if (FUNC_9((php_conv_qprint_encode *)VAR_5, VAR_9, VAR_10, VAR_11, 1, VAR_12, VAR_4)) {
     FUNC_3(VAR_10, 0);
     goto out_failure;
    }
    FUNC_3(VAR_10, 0);
   } else {
    if (FUNC_9((php_conv_qprint_encode *)VAR_5, 0, ((void*)0), 0, 0, VAR_12, VAR_4)) {
     goto out_failure;
    }
   }
  } break;

  case 129: {
   char *VAR_15 = ((void*)0);
   size_t VAR_16;

   if (VAR_3 != ((void*)0)) {

    FUNC_1(VAR_3, VAR_15, VAR_16, "line-break-chars", 0);
   }

   VAR_5 = FUNC_4(sizeof(php_conv_qprint_decode), VAR_4);
   if (VAR_15 != ((void*)0)) {
    if (FUNC_8((php_conv_qprint_decode *)VAR_5, VAR_15, VAR_16, 1, VAR_4)) {
     FUNC_3(VAR_15, 0);
     goto out_failure;
    }
    FUNC_3(VAR_15, 0);
   } else {
    if (FUNC_8((php_conv_qprint_decode *)VAR_5, ((void*)0), 0, 0, VAR_4)) {
     goto out_failure;
    }
   }
  } break;

  default:
   VAR_5 = ((void*)0);
   break;
 }
 return VAR_5;

out_failure:
 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_5, VAR_4);
 }
 return ((void*)0);
}
