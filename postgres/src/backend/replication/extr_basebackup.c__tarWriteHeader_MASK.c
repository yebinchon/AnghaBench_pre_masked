
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; int st_gid; int st_uid; int st_mode; int st_size; } ;
typedef int int64 ;
typedef int h ;
typedef enum tarError { ____Placeholder_tarError } tarError ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char,char*,int) ;
 int FUNC_4 (char*,char const*,char const*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int64
FUNC_5(const char *VAR_1, const char *VAR_2,
    struct stat *VAR_3, bool VAR_4)
{
 char VAR_5[512];
 enum tarError VAR_6;

 if (!VAR_4)
 {
  VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_2, VAR_3->st_size,
        VAR_3->st_mode, VAR_3->st_uid, VAR_3->st_gid,
        VAR_3->st_mtime);

  switch (VAR_6)
  {
   case 129:
    break;
   case 130:
    FUNC_1(VAR_0,
      (FUNC_2("file name too long for tar format: \"%s\"",
        VAR_1)));
    break;
   case 128:
    FUNC_1(VAR_0,
      (FUNC_2("symbolic link target too long for tar format: "
        "file name \"%s\", target \"%s\"",
        VAR_1, VAR_2)));
    break;
   default:
    FUNC_0(VAR_0, "unrecognized tar error: %d", VAR_6);
  }

  FUNC_3('d', VAR_5, sizeof(VAR_5));
 }

 return sizeof(VAR_5);
}
