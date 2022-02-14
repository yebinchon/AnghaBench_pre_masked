
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_proto_family {size_t family; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,size_t,size_t) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int ,struct net_proto_family const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(const struct net_proto_family *VAR_5)
{
 int VAR_6;

 if (VAR_5->family >= VAR_2) {
  FUNC_1("protocol %d >= NPROTO(%d)\n", VAR_5->family, VAR_2);
  return -VAR_1;
 }

 FUNC_5(&VAR_4);
 if (FUNC_4(VAR_3[VAR_5->family],
          FUNC_0(&VAR_4)))
  VAR_6 = -VAR_0;
 else {
  FUNC_3(VAR_3[VAR_5->family], VAR_5);
  VAR_6 = 0;
 }
 FUNC_6(&VAR_4);

 FUNC_2("NET: Registered protocol family %d\n", VAR_5->family);
 return VAR_6;
}
