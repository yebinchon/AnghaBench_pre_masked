
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef int PGPing ;


 int * FUNC_0 (char const* const*,char const* const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

PGPing
FUNC_3(const char *const *VAR_0,
    const char *const *VAR_1,
    int VAR_2)
{
 PGconn *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 PGPing VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 return VAR_4;
}
