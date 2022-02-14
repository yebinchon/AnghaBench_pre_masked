
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int*,int*) ;

XLogRecPtr
FUNC_4(void)
{
 XLogRecPtr VAR_0;
 uint32 VAR_1;
 uint32 VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_2("SELECT pg_current_wal_insert_lsn()");

 if (FUNC_3(VAR_3, "%X/%X", &VAR_1, &VAR_2) != 2)
  FUNC_0("unrecognized result \"%s\" for current WAL insert location", VAR_3);

 VAR_0 = ((uint64) VAR_1) << 32 | VAR_2;

 FUNC_1(VAR_3);

 return VAR_0;
}
