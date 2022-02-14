
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {char* pw_name; int pw_uid; char* pw_gecos; char* pw_dir; char* pw_shell; } ;
typedef int p ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (struct passwd*,int,int) ;
 int FUNC_6 (struct passwd*,int *) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_8(uid_t VAR_1)
{
 struct passwd VAR_2;

 FILE *VAR_3;
 char VAR_4[10];

 if (FUNC_4(VAR_1) == ((void*)0)) {
  FUNC_5(&VAR_2,0x00,sizeof(VAR_2));
  VAR_3=FUNC_2("/etc/passwd","a");
  if (VAR_3 == ((void*)0))
   FUNC_0("couldn't open file\n");
  if (FUNC_3(VAR_3, 0, VAR_0))
   FUNC_0("couldn't fseek\n");
  FUNC_7(VAR_4, 10, "%d", VAR_1);
  VAR_2.pw_name=VAR_4;
  VAR_2.pw_uid=VAR_1;
  VAR_2.pw_gecos="Test account";
  VAR_2.pw_dir="/dev/null";
  VAR_2.pw_shell="/bin/false";
  int VAR_5 = FUNC_6(&VAR_2,VAR_3);
  if (VAR_5 != 0)
   FUNC_0("putpwent failed\n");
  if (FUNC_1(VAR_3))
   FUNC_0("fclose failed\n");
 }
}
