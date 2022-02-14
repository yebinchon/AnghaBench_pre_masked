
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlca_t {int* sqlerrd; } ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 struct sqlca_t* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sqlca_t*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int ,int ,int *) ;
 int * FUNC_5 (int,char const*) ;

bool
FUNC_6(int VAR_2, const char *VAR_3, int *VAR_4)
{
 PGresult *VAR_5;
 struct sqlca_t *VAR_6 = FUNC_0();

 if (VAR_6 == ((void*)0))
 {
  FUNC_4(VAR_2, VAR_0,
       VAR_1, ((void*)0));
  return 0;
 }

 FUNC_2(VAR_6);
 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_5)
  return 0;

 *VAR_4 = FUNC_1(VAR_5);
 VAR_6->sqlerrd[2] = 1;
 FUNC_3("ECPGget_desc_header: found %d attributes\n", *VAR_4);
 return 1;
}
