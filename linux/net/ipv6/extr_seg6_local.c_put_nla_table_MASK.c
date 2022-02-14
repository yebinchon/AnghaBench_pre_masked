
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct seg6_local_lwt {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2, struct seg6_local_lwt *VAR_3)
{
 if (FUNC_0(VAR_2, VAR_1, VAR_3->table))
  return -VAR_0;

 return 0;
}
