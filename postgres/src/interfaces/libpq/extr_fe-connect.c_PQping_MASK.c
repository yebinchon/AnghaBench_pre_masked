
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef int PGPing ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

PGPing
FUNC_3(const char *VAR_0)
{
 PGconn *VAR_1 = FUNC_0(VAR_0);
 PGPing VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 return VAR_2;
}
