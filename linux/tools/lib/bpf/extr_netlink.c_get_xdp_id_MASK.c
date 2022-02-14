
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_id_md {scalar_t__ ifindex; int id; int flags; } ;
struct nlattr {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (struct nlattr*) ;
 unsigned char FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, void *VAR_5, struct nlattr **VAR_6)
{
 struct nlattr *VAR_7[VAR_2 + 1];
 struct xdp_id_md *VAR_8 = VAR_4;
 struct ifinfomsg *VAR_9 = VAR_5;
 unsigned char VAR_10, VAR_11;
 int VAR_12;

 if (VAR_8->ifindex && VAR_8->ifindex != VAR_9->ifi_index)
  return 0;

 if (!VAR_6[VAR_0])
  return 0;

 VAR_12 = FUNC_3(VAR_7, VAR_2, VAR_6[VAR_0], ((void*)0));
 if (VAR_12)
  return VAR_12;

 if (!VAR_7[VAR_1])
  return 0;

 VAR_10 = FUNC_2(VAR_7[VAR_1]);
 if (VAR_10 == VAR_3)
  return 0;

 VAR_11 = FUNC_0(VAR_10, VAR_8->flags);
 if (!VAR_11 || !VAR_7[VAR_11])
  return 0;

 VAR_8->id = FUNC_1(VAR_7[VAR_11]);

 return 0;
}
