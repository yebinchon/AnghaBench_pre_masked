
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

char *FUNC_8(void)
{
 char *VAR_6 = ((void*)0);
 size_t VAR_7 = 0;
 size_t VAR_8 = 0;

 FUNC_5(VAR_2);

 for (;;) {
  ssize_t VAR_9;

  if (VAR_7 >= VAR_8) {
   char *VAR_10;

   VAR_10 = FUNC_3(VAR_6, VAR_8 + 80);
   if (!VAR_10) {
    FUNC_2("realloc");
    FUNC_0(VAR_1);
   }

   VAR_6 = VAR_10;
   VAR_8 += 80;
  }

  do {
   VAR_9 = FUNC_4(VAR_3, &VAR_6[VAR_7], 1, 0);
   FUNC_6("recv");
  } while (VAR_9 < 0 && VAR_4 == VAR_0);

  if (VAR_9 == 0) {
   FUNC_1(VAR_5, "unexpected EOF on control socket\n");
   FUNC_0(VAR_1);
  }

  if (VAR_9 != 1) {
   FUNC_2("recv");
   FUNC_0(VAR_1);
  }

  if (VAR_6[VAR_7] == '\n') {
   VAR_6[VAR_7] = '\0';
   break;
  }

  VAR_7++;
 }

 FUNC_7();

 return VAR_6;
}
