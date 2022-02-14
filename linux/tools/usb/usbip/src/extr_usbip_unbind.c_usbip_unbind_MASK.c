
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int member_1; } ;


 int FUNC_0 (int,char**,char*,struct option const*,int *) ;
 int VAR_0 ;

 int FUNC_1 (int ) ;
 int FUNC_2 () ;

int FUNC_3(int VAR_1, char *VAR_2[])
{
 static const struct option VAR_3[] = {
  { "busid", 128, ((void*)0), 'b' },
  { ((void*)0), 0, ((void*)0), 0 }
 };

 int VAR_4;
 int VAR_5 = -1;

 for (;;) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, "b:", VAR_3, ((void*)0));

  if (VAR_4 == -1)
   break;

  switch (VAR_4) {
  case 'b':
   VAR_5 = FUNC_1(VAR_0);
   goto out;
  default:
   goto err_out;
  }
 }

err_out:
 FUNC_2();
out:
 return VAR_5;
}
