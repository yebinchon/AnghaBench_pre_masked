
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union semun {int val; } ;
typedef int IpcSemaphoreId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int,int ,union semun) ;

__attribute__((used)) static void
FUNC_4(IpcSemaphoreId VAR_4, int VAR_5, int VAR_6)
{
 union semun VAR_7;

 VAR_7.val = VAR_6;
 if (FUNC_3(VAR_4, VAR_5, VAR_2, VAR_7) < 0)
 {
  int VAR_8 = VAR_3;

  FUNC_0(VAR_1,
    (FUNC_2("semctl(%d, %d, SETVAL, %d) failed: %m",
         VAR_4, VAR_5, VAR_6),
     (VAR_8 == VAR_0) ?
     FUNC_1("You possibly need to raise your kernel's SEMVMX value to be at least "
       "%d.  Look into the PostgreSQL documentation for details.",
       VAR_6) : 0));
 }
}
