
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int maxattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nlattr** FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nlmsghdr const*,int ,struct nlattr**,int ,int ,int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

int FUNC_2(const struct nlmsghdr *VAR_4, struct nlattr ***VAR_5)
{
 u32 VAR_6 = VAR_2.maxattr;

 *VAR_5 = FUNC_0(&VAR_2);
 if (!*VAR_5)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_1, *VAR_5, VAR_6,
          VAR_3, ((void*)0));
}
