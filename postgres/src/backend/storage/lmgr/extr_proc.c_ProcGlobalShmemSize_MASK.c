
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int slock_t ;
typedef int Size ;
typedef int PROC_HDR ;
typedef int PGXACT ;
typedef int PGPROC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

Size
FUNC_2(void)
{
 Size VAR_3 = 0;


 VAR_3 = FUNC_0(VAR_3, sizeof(PROC_HDR));

 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_0, sizeof(PGPROC)));

 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_1, sizeof(PGPROC)));

 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_2, sizeof(PGPROC)));

 VAR_3 = FUNC_0(VAR_3, sizeof(slock_t));

 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_0, sizeof(PGXACT)));
 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_1, sizeof(PGXACT)));
 VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_2, sizeof(PGXACT)));

 return VAR_3;
}
