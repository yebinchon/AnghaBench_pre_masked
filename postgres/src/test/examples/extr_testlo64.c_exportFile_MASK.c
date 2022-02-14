
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int,char*,int) ;
 int FUNC_5 (char*,int,int) ;
 int VAR_5 ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void
FUNC_7(PGconn *VAR_6, Oid VAR_7, char *VAR_8)
{
 int VAR_9;
 char VAR_10[VAR_0];
 int VAR_11,
    VAR_12;
 int VAR_13;




 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_1);
 if (VAR_9 < 0)
  FUNC_1(VAR_5, "cannot open large object %u", VAR_7);




 VAR_13 = FUNC_5(VAR_8, VAR_2 | VAR_4 | VAR_3, 0666);
 if (VAR_13 < 0)
 {
  FUNC_1(VAR_5, "cannot open unix file\"%s\"",
    VAR_8);
 }




 while ((VAR_11 = FUNC_4(VAR_6, VAR_9, VAR_10, VAR_0)) > 0)
 {
  VAR_12 = FUNC_6(VAR_13, VAR_10, VAR_11);
  if (VAR_12 < VAR_11)
  {
   FUNC_1(VAR_5, "error while writing \"%s\"",
     VAR_8);
  }
 }

 FUNC_2(VAR_6, VAR_9);
 FUNC_0(VAR_13);

 return;
}
