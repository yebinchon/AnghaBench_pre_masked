
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_3(__le16 VAR_1, struct sta_info *VAR_2,
        struct sk_buff *VAR_3)
{
 if (!FUNC_0(VAR_1))
  return 0;

 if (VAR_2 == ((void*)0) || !FUNC_2(VAR_2, VAR_0))
  return 0;

 if (!FUNC_1(VAR_3))
  return 0;

 return 1;
}
