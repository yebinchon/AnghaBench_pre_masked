
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, Datum VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_3), VAR_0, ((void*)0)) < 0)
  FUNC_1(VAR_1, "shmctl(%d, %d, 0) failed: %m",
    FUNC_0(VAR_3), VAR_0);
}
