
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_zone {scalar_t__ id; int dir; } ;
typedef enum ctattr_type { ____Placeholder_ctattr_type } ctattr_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr*,struct nf_conntrack_zone*) ;

__attribute__((used)) static int
FUNC_1(struct nlattr *VAR_5, enum ctattr_type VAR_6,
      struct nf_conntrack_zone *VAR_7)
{
 int VAR_8;

 if (VAR_7->id != VAR_2)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_5, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6 == VAR_0)
  VAR_7->dir = VAR_4;
 else
  VAR_7->dir = VAR_3;

 return 0;
}
