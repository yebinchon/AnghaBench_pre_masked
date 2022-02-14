
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

void
FUNC_6(const char *VAR_4, void *VAR_5)
{
 int VAR_6 = *((int *) VAR_5);





 if (FUNC_0())
 {





  if (VAR_2)
   return;






  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("cannot change client_encoding during a parallel operation")));
 }


 if (FUNC_1(VAR_6) < 0)
  FUNC_2(VAR_3, "SetClientEncoding(%d) failed", VAR_6);
}
