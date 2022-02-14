
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static DIR *
FUNC_4(char *VAR_1)
{
 DIR *VAR_2;

 FUNC_0(VAR_1 != ((void*)0));
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  FUNC_3("could not open directory \"%s\": %m", VAR_0);
  FUNC_1(1);
 }

 return VAR_2;
}
