
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned long long) ;
 int FUNC_3 (struct tep_handle*,char*,unsigned long long,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct tep_handle *VAR_0, char *VAR_1,
      unsigned long long VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_4("memory allocation failure\n");
  return -1;
 }

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_3(VAR_0, VAR_4, VAR_2, VAR_1);
 if (VAR_3 < 0)
  FUNC_4("error parsing event file.\n");
out:
 FUNC_1(VAR_4);
 return VAR_3;
}
