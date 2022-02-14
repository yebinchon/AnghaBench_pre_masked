
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_set_info {int index; } ;
struct tcf_ematch {int datalen; unsigned long data; } ;
struct net {int dummy; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_5, void *VAR_6, int VAR_7,
      struct tcf_ematch *VAR_8)
{
 struct xt_set_info *VAR_9 = VAR_6;
 ip_set_id_t VAR_10;

 if (VAR_7 != sizeof(*VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_5, VAR_9->index);
 if (VAR_10 == VAR_4)
  return -VAR_1;

 VAR_8->datalen = sizeof(*VAR_9);
 VAR_8->data = (unsigned long)FUNC_2(VAR_6, VAR_8->datalen, VAR_3);
 if (VAR_8->data)
  return 0;

 FUNC_1(VAR_5, VAR_10);
 return -VAR_2;
}
