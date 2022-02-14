
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct evlist*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,struct evlist*) ;
 int FUNC_6 (struct evlist*) ;
 char* VAR_3 ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct evlist *VAR_4)
{
 char *VAR_5;
 const char *VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_3;
 if (VAR_6 == ((void*)0)) {
  if (FUNC_2(VAR_1)) {




   return 0;
  }

  VAR_6 = FUNC_1(VAR_4);
 }

 VAR_5 = FUNC_7(VAR_6);
 if (VAR_5 == ((void*)0)) {
  FUNC_3("Not enough memory to setup sort keys");
  return -VAR_0;
 }




 if (!FUNC_2(VAR_1)) {
  VAR_5 = FUNC_4(VAR_5);
  if (VAR_5 == ((void*)0)) {
   FUNC_3("Not enough memory to setup overhead keys");
   return -VAR_0;
  }
 }

 VAR_7 = FUNC_5(&VAR_2, VAR_5, VAR_4);

 FUNC_0(VAR_5);
 return VAR_7;
}
