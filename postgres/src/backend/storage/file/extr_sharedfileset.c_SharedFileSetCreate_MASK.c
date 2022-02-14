
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SharedFileSet ;
typedef int Oid ;
typedef scalar_t__ File ;


 int FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int *,char const*) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (char*,int ) ;

File
FUNC_6(SharedFileSet *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0];
 File VAR_4;

 FUNC_3(VAR_3, VAR_1, VAR_2);
 VAR_4 = FUNC_2(VAR_3, 0);


 if (VAR_4 <= 0)
 {
  char VAR_5[VAR_0];
  char VAR_6[VAR_0];
  Oid VAR_7 = FUNC_0(VAR_1, VAR_2);

  FUNC_5(VAR_5, VAR_7);
  FUNC_4(VAR_6, VAR_1, VAR_7);
  FUNC_1(VAR_5, VAR_6);
  VAR_4 = FUNC_2(VAR_3, 1);
 }

 return VAR_4;
}
