
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PLpgSQL_nsitem_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,int,char const*) ;
 int * FUNC_4 (int ,int,char const*,int *,int *,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(PLpgSQL_nsitem_type VAR_2, int VAR_3, const char *VAR_4)
{







 if (FUNC_4(FUNC_5(), 1,
        VAR_4, ((void*)0), ((void*)0),
        ((void*)0)) != ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("parameter name \"%s\" used more than once",
      VAR_4)));


 FUNC_3(VAR_2, VAR_3, VAR_4);
}
