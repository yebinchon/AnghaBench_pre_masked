
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;
 int VAR_0 ;
 size_t FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int,char*,size_t) ;

__attribute__((used)) static int FUNC_5(int VAR_1, int VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 ssize_t VAR_5;
 size_t VAR_6;
 int VAR_7 = -1;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_1(VAR_0);
 if (!VAR_3 || !VAR_4)
  goto out;

 while (1) {

  VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_0);
  if (VAR_5 < 0)
   goto out;

  if (!VAR_5)
   break;

  VAR_6 = VAR_5;

  if (FUNC_4(VAR_2, VAR_4, VAR_6) != (int)VAR_6)
   goto out;

  if (FUNC_2(VAR_3, VAR_4, VAR_6))
   goto out;
 }

 VAR_7 = 0;
out:
 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
 return VAR_7;
}
