
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_12__ {int s; int member_0; } ;
typedef TYPE_2__ smart_str ;
struct TYPE_13__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_3__ php_stream ;
struct TYPE_11__ {int is_blocked; } ;
struct TYPE_14__ {int ssl_handle; TYPE_1__ s; } ;
typedef TYPE_4__ php_openssl_netstream_data_t ;
typedef int esbuf ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,char*,int) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;




 int VAR_2 ;

 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ,char*,...) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 char* FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,char) ;
 int FUNC_14 (TYPE_2__*,char*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(php_stream *VAR_5, int VAR_6, zend_bool VAR_7)
{
 php_openssl_netstream_data_t *VAR_8 = (php_openssl_netstream_data_t*)VAR_5->abstract;
 int VAR_9 = FUNC_4(VAR_8->ssl_handle, VAR_6);
 char VAR_10[512];
 smart_str VAR_11 = {0};
 unsigned long VAR_12;
 int VAR_13 = 1;

 switch(VAR_9) {
  case 129:

   VAR_13 = 0;
   break;
  case 131:
  case 130:


   VAR_4 = VAR_0;
   VAR_13 = VAR_7 ? 1 : VAR_8->s.is_blocked;
   break;
  case 132:
   if (FUNC_3() == 0) {
    if (VAR_6 == 0) {
     if (!FUNC_9(VAR_5) && FUNC_2() != 0) {
      FUNC_8(((void*)0), VAR_1, "SSL: fatal protocol error");
     }
     FUNC_5(VAR_8->ssl_handle, VAR_3|VAR_2);
     VAR_5->eof = 1;
     VAR_13 = 0;
    } else {
     char *VAR_14 = FUNC_11(FUNC_10(), ((void*)0), 0);

     FUNC_8(((void*)0), VAR_1,
       "SSL: %s", VAR_14);

     FUNC_7(VAR_14);
     VAR_13 = 0;
    }
    break;
   }



  default:

   VAR_12 = FUNC_2();

   switch (FUNC_0(VAR_12)) {
    case 128:
     FUNC_8(((void*)0), VAR_1,
       "SSL_R_NO_SHARED_CIPHER: no suitable shared cipher could be used.  "
       "This could be because the server is missing an SSL certificate "
       "(local_cert context option)");
     VAR_13 = 0;
     break;

    default:
     do {

      FUNC_1(VAR_12, VAR_10, sizeof(VAR_10));
      if (VAR_11.s) {
       FUNC_13(&VAR_11, '\n');
      }
      FUNC_14(&VAR_11, VAR_10);
     } while ((VAR_12 = FUNC_2()) != 0);

     FUNC_12(&VAR_11);

     FUNC_8(((void*)0), VAR_1,
       "SSL operation failed with code %d. %s%s",
       VAR_9,
       VAR_11.s ? "OpenSSL Error messages:\n" : "",
       VAR_11.s ? FUNC_6(VAR_11.s) : "");
     if (VAR_11.s) {
      FUNC_15(&VAR_11);
     }
   }

   VAR_13 = 0;
   VAR_4 = 0;
 }
 return VAR_13;
}
