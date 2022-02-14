
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char,int,int *) ;
 scalar_t__ FUNC_3 (void const*,size_t,int *) ;

int
FUNC_4(PGconn *VAR_2, char VAR_3,
    const void *VAR_4, size_t VAR_5)
{

 if (FUNC_2(VAR_3, 1, VAR_2))
  return VAR_0;


 if (FUNC_3(VAR_4, VAR_5, VAR_2))
  return VAR_0;


 if (FUNC_1(VAR_2))
  return VAR_0;


 if (FUNC_0(VAR_2))
  return VAR_0;

 return VAR_1;
}
