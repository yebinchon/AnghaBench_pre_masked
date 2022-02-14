
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {int * s; int member_0; } ;
typedef TYPE_1__ smart_str ;
typedef int php_stream ;
typedef int headerbuf ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static zend_string *FUNC_4(php_stream *VAR_0)
{
 smart_str VAR_1 = {0};
 char VAR_2[8192];

 while (FUNC_0(VAR_0, VAR_2, sizeof(VAR_2))) {
  if ((VAR_2[0] == '\r' && VAR_2[1] == '\n') ||
      (VAR_2[0] == '\n')) {

   FUNC_1(&VAR_1);
   return VAR_1.s;
  }


  FUNC_2(&VAR_1, VAR_2);
 }

 FUNC_3(&VAR_1);
 return ((void*)0);
}
