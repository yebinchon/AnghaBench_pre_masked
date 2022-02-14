
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,struct sigaction const*,int *) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;

int FUNC_11(int VAR_10, char **VAR_11)
{
 const struct sigaction VAR_12 = {
  .sa_handler = VAR_6
 };
 char VAR_13[VAR_0];
 size_t VAR_14 = 0;

 if (VAR_7)
  FUNC_5(VAR_8);

 if (!FUNC_3(VAR_13))
  return -1;

 VAR_9 = FUNC_1(VAR_13, "r");
 if (!VAR_9) {
  FUNC_7("could not open trace pipe: %s", FUNC_10(VAR_5));
  return -1;
 }

 FUNC_9(VAR_1, &VAR_12, ((void*)0));
 FUNC_9(VAR_2, &VAR_12, ((void*)0));
 FUNC_9(VAR_3, &VAR_12, ((void*)0));
 while (1) {
  ssize_t VAR_15;

  VAR_15 = FUNC_4(&VAR_4, &VAR_14, VAR_9);
  if (VAR_15 <= 0) {
   FUNC_7("failed to read content from trace pipe: %s",
         FUNC_10(VAR_5));
   break;
  }
  if (VAR_7)
   FUNC_6(VAR_8, VAR_4);
  else
   FUNC_8("%s", VAR_4);
 }

 FUNC_0(VAR_9);
 FUNC_2(VAR_4);
 return -1;
}
