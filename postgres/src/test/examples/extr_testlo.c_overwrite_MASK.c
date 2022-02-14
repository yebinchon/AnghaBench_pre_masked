
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,char*,int) ;
 char* FUNC_6 (int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(PGconn *VAR_3, Oid VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_0);
 if (VAR_7 < 0)
  FUNC_0(VAR_2, "cannot open large object %u", VAR_4);

 FUNC_3(VAR_3, VAR_7, VAR_5, VAR_1);
 VAR_8 = FUNC_6(VAR_6 + 1);

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  VAR_8[VAR_11] = 'X';
 VAR_8[VAR_11] = '\0';

 VAR_10 = 0;
 while (VAR_6 - VAR_10 > 0)
 {
  VAR_9 = FUNC_5(VAR_3, VAR_7, VAR_8 + VAR_10, VAR_6 - VAR_10);
  VAR_10 += VAR_9;
  if (VAR_9 <= 0)
  {
   FUNC_0(VAR_2, "\nWRITE FAILED!\n");
   break;
  }
 }
 FUNC_1(VAR_8);
 FUNC_0(VAR_2, "\n");
 FUNC_2(VAR_3, VAR_7);
}
