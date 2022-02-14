
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int php_stream_wrapper ;
struct TYPE_6__ {struct TYPE_6__* wrapperthis; int mode; } ;
typedef TYPE_1__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(php_stream_wrapper *VAR_2, php_stream *VAR_3)
{
 php_stream *VAR_4 = VAR_3->wrapperthis;
 int VAR_5 = 0;

 if (VAR_4) {
  if (FUNC_4(VAR_3->mode, "wa+")) {
   char VAR_6[512];
   int VAR_7;


   VAR_7 = FUNC_0(VAR_4);
   if (VAR_7 != 226 && VAR_7 != 250) {
    FUNC_1(((void*)0), VAR_1, "FTP server error %d:%s", VAR_7, VAR_6);
    VAR_5 = VAR_0;
   }
  }

  FUNC_3(VAR_4, "QUIT\r\n");
  FUNC_2(VAR_4);
  VAR_3->wrapperthis = ((void*)0);
 }

 return VAR_5;
}
