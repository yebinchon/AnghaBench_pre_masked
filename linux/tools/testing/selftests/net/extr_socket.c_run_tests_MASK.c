
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_testcase {int domain; int type; int protocol; int expect; scalar_t__ nosupport_ok; } ;


 int FUNC_0 (struct socket_testcase*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,int,int,char*,...) ;
 int FUNC_3 (int,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int) ;
 struct socket_testcase* VAR_4 ;

__attribute__((used)) static int FUNC_5(void)
{
 char VAR_5[VAR_1];
 char VAR_6[VAR_1];
 int VAR_7, VAR_8;

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  struct socket_testcase *VAR_9 = &VAR_4[VAR_7];
  int VAR_10;

  VAR_10 = FUNC_3(VAR_9->domain, VAR_9->type, VAR_9->protocol);
  if (VAR_10 < 0) {
   if (VAR_9->nosupport_ok &&
       VAR_2 == VAR_0)
    continue;

   if (VAR_9->expect < 0 &&
       VAR_2 == -VAR_9->expect)
    continue;

   FUNC_4(-VAR_9->expect, VAR_5, VAR_1);
   FUNC_4(VAR_2, VAR_6, VAR_1);

   FUNC_2(VAR_3, "socket(%d, %d, %d) expected "
    "err (%s) got (%s)\n",
    VAR_9->domain, VAR_9->type, VAR_9->protocol,
    VAR_5, VAR_6);

   VAR_8 = -1;
   break;
  } else {
   FUNC_1(VAR_10);

   if (VAR_9->expect < 0) {
    FUNC_4(VAR_2, VAR_5, VAR_1);

    FUNC_2(VAR_3, "socket(%d, %d, %d) expected "
     "success got err (%s)\n",
     VAR_9->domain, VAR_9->type, VAR_9->protocol,
     VAR_5);

    VAR_8 = -1;
    break;
   }
  }
 }

 return VAR_8;
}
