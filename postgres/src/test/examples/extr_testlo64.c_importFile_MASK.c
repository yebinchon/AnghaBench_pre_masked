
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (int *,int,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static Oid
FUNC_8(PGconn *VAR_5, char *VAR_6)
{
 Oid VAR_7;
 int VAR_8;
 char VAR_9[VAR_0];
 int VAR_10,
    VAR_11;
 int VAR_12;




 VAR_12 = FUNC_6(VAR_6, VAR_3, 0666);
 if (VAR_12 < 0)
 {
  FUNC_1(VAR_4, "cannot open unix file\"%s\"\n", VAR_6);
 }




 VAR_7 = FUNC_3(VAR_5, VAR_1 | VAR_2);
 if (VAR_7 == 0)
  FUNC_1(VAR_4, "cannot create large object");

 VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_2);




 while ((VAR_10 = FUNC_7(VAR_12, VAR_9, VAR_0)) > 0)
 {
  VAR_11 = FUNC_5(VAR_5, VAR_8, VAR_9, VAR_10);
  if (VAR_11 < VAR_10)
   FUNC_1(VAR_4, "error while reading \"%s\"", VAR_6);
 }

 FUNC_0(VAR_12);
 FUNC_2(VAR_5, VAR_8);

 return VAR_7;
}
