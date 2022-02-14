
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_int64 ;
typedef int PGconn ;
typedef int Oid ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,char*,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(PGconn *VAR_3, Oid VAR_4, pg_int64 VAR_5, int VAR_6)
{
 int VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_0);
 if (VAR_7 < 0)
  FUNC_1(VAR_2, "cannot open large object %u", VAR_4);

 if (FUNC_4(VAR_3, VAR_7, VAR_5, VAR_1) < 0)
  FUNC_1(VAR_2, "error in lo_lseek64: %s", FUNC_0(VAR_3));

 if (FUNC_7(VAR_3, VAR_7) != VAR_5)
  FUNC_1(VAR_2, "error in lo_tell64: %s", FUNC_0(VAR_3));

 VAR_8 = FUNC_8(VAR_6 + 1);

 VAR_10 = 0;
 while (VAR_6 - VAR_10 > 0)
 {
  VAR_9 = FUNC_6(VAR_3, VAR_7, VAR_8, VAR_6 - VAR_10);
  VAR_8[VAR_9] = '\0';
  FUNC_1(VAR_2, ">>> %s", VAR_8);
  VAR_10 += VAR_9;
  if (VAR_9 <= 0)
   break;
 }
 FUNC_2(VAR_8);
 FUNC_1(VAR_2, "\n");
 FUNC_3(VAR_3, VAR_7);
}
