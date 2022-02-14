
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 char* VAR_0 ;

 int FUNC_2 () ;

int FUNC_3(int VAR_1, char *VAR_2[])
{
 static const struct option VAR_3[] = {
  { "remote", 128, ((void*)0), 'r' },
  { "busid", 128, ((void*)0), 'b' },
  { "device", 128, ((void*)0), 'd' },
  { ((void*)0), 0, ((void*)0), 0 }
 };
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7 = -1;

 for (;;) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, "d:r:b:", VAR_3, ((void*)0));

  if (VAR_6 == -1)
   break;

  switch (VAR_6) {
  case 'r':
   VAR_4 = VAR_0;
   break;
  case 'd':
  case 'b':
   VAR_5 = VAR_0;
   break;
  default:
   goto err_out;
  }
 }

 if (!VAR_4 || !VAR_5)
  goto err_out;

 VAR_7 = FUNC_0(VAR_4, VAR_5);
 goto out;

err_out:
 FUNC_2();
out:
 return VAR_7;
}
