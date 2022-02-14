
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_proto_family {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_proto_family const** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(int VAR_5, const struct net_proto_family *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -VAR_2;

 FUNC_0(&VAR_4);

 if (VAR_3[VAR_5])
  VAR_7 = -VAR_1;
 else
  VAR_3[VAR_5] = VAR_6;

 FUNC_1(&VAR_4);

 return VAR_7;
}
