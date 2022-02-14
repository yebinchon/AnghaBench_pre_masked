
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int dummy; } ;


 struct data FUNC_0 (struct data,char) ;
 struct data FUNC_1 (struct data,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const char *VAR_1, int VAR_2)
{
 struct data *VAR_3 = VAR_0;

 if (VAR_2 == 0)
  VAR_2 = FUNC_2(VAR_1);

 *VAR_3 = FUNC_1(*VAR_3, VAR_1, VAR_2);
 *VAR_3 = FUNC_0(*VAR_3, '\0');
}
