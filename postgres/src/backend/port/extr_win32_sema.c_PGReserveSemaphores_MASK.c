
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(int VAR_5)
{
 VAR_3 = (HANDLE *) FUNC_1(VAR_5 * sizeof(HANDLE));
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, "out of memory");
 VAR_4 = 0;
 VAR_2 = VAR_5;

 FUNC_2(VAR_1, 0);
}
