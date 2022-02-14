
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

 int VAR_1 ;

 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(int VAR_2, char *VAR_3[])
{
 static const struct option VAR_4[] = {
  { "parsable", 129, ((void*)0), 'p' },
  { "remote", 128, ((void*)0), 'r' },
  { "local", 129, ((void*)0), 'l' },
  { "device", 129, ((void*)0), 'd' },
  { ((void*)0), 0, ((void*)0), 0 }
 };

 bool VAR_5 = 0;
 int VAR_6;
 int VAR_7 = -1;

 if (FUNC_7(VAR_0))
  FUNC_0("failed to open %s", VAR_0);

 for (;;) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, "pr:ld", VAR_4, ((void*)0));

  if (VAR_6 == -1)
   break;

  switch (VAR_6) {
  case 'p':
   VAR_5 = 1;
   break;
  case 'r':
   VAR_7 = FUNC_3(VAR_1);
   goto out;
  case 'l':
   VAR_7 = FUNC_2(VAR_5);
   goto out;
  case 'd':
   VAR_7 = FUNC_4(VAR_5);
   goto out;
  default:
   goto err_out;
  }
 }

err_out:
 FUNC_5();
out:
 FUNC_6();

 return VAR_7;
}
