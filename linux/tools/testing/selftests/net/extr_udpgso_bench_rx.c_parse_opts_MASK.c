
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,char**,char*) ;
 char* VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*,int *,int ) ;
 void* FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(int VAR_17, char **VAR_18)
{
 int VAR_19;


 FUNC_2(VAR_1, "::", &VAR_3);
 while ((VAR_19 = FUNC_1(VAR_17, VAR_18, "4b:C:Gl:n:p:rR:S:tv")) != -1) {
  switch (VAR_19) {
  case '4':
   VAR_8 = VAR_0;
   VAR_2 = sizeof(struct sockaddr_in);
   FUNC_2(VAR_0, "0.0.0.0", &VAR_3);
   break;
  case 'b':
   FUNC_2(VAR_8, VAR_15, &VAR_3);
   break;
  case 'C':
   VAR_4 = FUNC_4(VAR_15, ((void*)0), 0);
   break;
  case 'G':
   VAR_9 = 1;
   break;
  case 'l':
   VAR_6 = FUNC_4(VAR_15, ((void*)0), 0);
   break;
  case 'n':
   VAR_7 = FUNC_4(VAR_15, ((void*)0), 0);
   break;
  case 'p':
   VAR_10 = FUNC_4(VAR_15, ((void*)0), 0);
   break;
  case 'r':
   VAR_12 = 1;
   break;
  case 'R':
   VAR_11 = FUNC_4(VAR_15, ((void*)0), 0);
   break;
  case 'S':
   VAR_5 = FUNC_3(VAR_15, ((void*)0), 0);
   break;
  case 't':
   VAR_13 = 1;
   break;
  case 'v':
   VAR_14 = 1;
   VAR_12 = 1;
   break;
  }
 }

 if (VAR_16 != VAR_17)
  FUNC_5(VAR_18[0]);

 if (VAR_13 && VAR_14)
  FUNC_0(1, 0, "TODO: implement verify mode for tcp");
}
