
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PQExpBuffer ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static PQExpBuffer
FUNC_2(void)
{
 static PQExpBuffer VAR_0 = ((void*)0);

 if (VAR_0)
 {

  FUNC_1(VAR_0);
 }
 else
 {

  VAR_0 = FUNC_0();
 }

 return VAR_0;
}
