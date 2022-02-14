
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct cred const*,int *,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct cred const*,int ,unsigned int,int) ;
 struct cred* FUNC_2 () ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3(bool VAR_4)
{
 const struct cred *VAR_5 = FUNC_2();
 unsigned int VAR_6 = VAR_4 ? VAR_2 : VAR_1;

 if (FUNC_0(VAR_5, &VAR_3, VAR_0, VAR_6))
  return 0;
 if (FUNC_1(VAR_5, VAR_0, VAR_6, 1))
  return 0;
 return 1;
}
