
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,char*) ;

bool
FUNC_3(PGconn *VAR_2)
{
 int VAR_3,
    VAR_4;
 int VAR_5;







 VAR_3 = 903;
 VAR_4 = VAR_1 / 100;
 VAR_5 = FUNC_1(VAR_2) / 100;
 if (VAR_5 < VAR_3)
 {
  const char *VAR_6 = FUNC_0(VAR_2, "server_version");

  FUNC_2("incompatible server version %s; client does not support streaming from server versions older than %s",
      VAR_6 ? VAR_6 : "'unknown'",
      "9.3");
  return 0;
 }
 else if (VAR_5 > VAR_4)
 {
  const char *VAR_7 = FUNC_0(VAR_2, "server_version");

  FUNC_2("incompatible server version %s; client does not support streaming from server versions newer than %s",
      VAR_7 ? VAR_7 : "'unknown'",
      VAR_0);
  return 0;
 }
 return 1;
}
