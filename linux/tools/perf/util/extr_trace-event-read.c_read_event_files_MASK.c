
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tep_handle*) ;
 unsigned long long FUNC_2 (struct tep_handle*) ;
 int FUNC_3 (struct tep_handle*,char*,unsigned long long) ;
 char* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct tep_handle *VAR_0)
{
 unsigned long long VAR_1;
 char *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5,VAR_6;
 int VAR_7;

 VAR_3 = FUNC_1(VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_2 = FUNC_4();
  if (VAR_2 == ((void*)0))
   return -1;

  VAR_4 = FUNC_1(VAR_0);

  for (VAR_6=0; VAR_6 < VAR_4; VAR_6++) {
   VAR_1 = FUNC_2(VAR_0);
   VAR_7 = FUNC_3(VAR_0, VAR_2, VAR_1);
   if (VAR_7) {
    FUNC_0(VAR_2);
    return VAR_7;
   }
  }
  FUNC_0(VAR_2);
 }
 return 0;
}
