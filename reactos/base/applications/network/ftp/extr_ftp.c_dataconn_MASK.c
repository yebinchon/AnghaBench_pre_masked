
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int from ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;

int FUNC_6(const char *VAR_3)
{
 struct sockaddr_in VAR_4;
 int VAR_5, VAR_6 = sizeof (VAR_4);

 if (VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_0, (struct sockaddr *) &VAR_4, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_5("ftp: accept");
  (void) FUNC_2(VAR_0), VAR_0 = -1;
  return 0;
 }
 if(FUNC_2(VAR_0)) {
  int VAR_7=FUNC_0 ();
  FUNC_4(VAR_2,"Error closing socket(%d)\n",VAR_7);
  (void) FUNC_3(VAR_2);
 }

 VAR_0 = VAR_5;
 return (VAR_0);
}
