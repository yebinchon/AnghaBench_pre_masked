
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_zone {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nf_conntrack_zone*,int ,int ,int ) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(const struct nlattr *VAR_3,
       struct nf_conntrack_zone *VAR_4)
{
 FUNC_0(VAR_4, VAR_2,
   VAR_1, 0);




 if (VAR_3)
  return -VAR_0;

 return 0;
}
