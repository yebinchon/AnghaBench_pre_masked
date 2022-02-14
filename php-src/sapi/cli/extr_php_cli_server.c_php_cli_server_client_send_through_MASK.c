
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int member_0; int member_1; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ php_cli_server_client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct timeval*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,char const*,scalar_t__,int ) ;

__attribute__((used)) static size_t FUNC_4(php_cli_server_client *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct timeval VAR_5 = { 10, 0 };



 ssize_t VAR_6 = (ssize_t)VAR_4;

 do {



  ssize_t VAR_7;


  VAR_7 = FUNC_3(VAR_2->sock, VAR_3 + VAR_4 - VAR_6, VAR_6, 0);
  if (VAR_7 < 0) {
   int VAR_8 = FUNC_2();
   if (VAR_8 == VAR_1) {
    int VAR_9 = FUNC_1(VAR_2->sock, VAR_0, &VAR_5);
    if (VAR_9 > 0) {
     continue;
    } else if (VAR_9 < 0) {

     FUNC_0();
     return VAR_6;
    } else {

     FUNC_0();
     return VAR_6;
    }
   } else {
    FUNC_0();
    return VAR_6;
   }
  }
  VAR_6 -= VAR_7;
 } while (VAR_6 > 0);

 return VAR_4;
}
