
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQExpBufferData ;
typedef int * PQExpBuffer ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

PQExpBuffer
FUNC_2(void)
{
 PQExpBuffer VAR_0;

 VAR_0 = (PQExpBuffer) FUNC_1(sizeof(PQExpBufferData));
 if (VAR_0 != ((void*)0))
  FUNC_0(VAR_0);

 return VAR_0;
}
