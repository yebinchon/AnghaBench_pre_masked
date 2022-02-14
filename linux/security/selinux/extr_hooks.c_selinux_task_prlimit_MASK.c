
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cred {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct cred const*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(const struct cred *VAR_6, const struct cred *VAR_7,
    unsigned int VAR_8)
{
 u32 VAR_9 = 0;

 if (!VAR_8)
  return 0;
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_3;
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_2;
 return FUNC_0(&VAR_5,
       FUNC_1(VAR_6), FUNC_1(VAR_7),
       VAR_4, VAR_9, ((void*)0));
}
