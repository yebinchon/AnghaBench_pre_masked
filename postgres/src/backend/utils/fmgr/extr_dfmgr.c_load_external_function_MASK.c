
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PGFunction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,char*) ;
 char* FUNC_4 (char const*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

PGFunction
FUNC_7(const char *VAR_2, const char *VAR_3,
        bool VAR_4, void **VAR_5)
{
 char *VAR_6;
 void *VAR_7;
 PGFunction VAR_8;


 VAR_6 = FUNC_4(VAR_2);


 VAR_7 = FUNC_5(VAR_6);


 if (VAR_5)
  *VAR_5 = VAR_7;


 VAR_8 = (PGFunction) FUNC_0(VAR_7, VAR_3);

 if (VAR_8 == ((void*)0) && VAR_4)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("could not find function \"%s\" in file \"%s\"",
      VAR_3, VAR_6)));

 FUNC_6(VAR_6);
 return VAR_8;
}
