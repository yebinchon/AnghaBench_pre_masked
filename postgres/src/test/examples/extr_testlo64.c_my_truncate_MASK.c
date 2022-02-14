
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_int64 ;
typedef int PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(PGconn *VAR_3, Oid VAR_4, pg_int64 VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_0 | VAR_1);
 if (VAR_6 < 0)
  FUNC_1(VAR_2, "cannot open large object %u", VAR_4);

 if (FUNC_4(VAR_3, VAR_6, VAR_5) < 0)
  FUNC_1(VAR_2, "error in lo_truncate64: %s", FUNC_0(VAR_3));

 FUNC_2(VAR_3, VAR_6);
}
