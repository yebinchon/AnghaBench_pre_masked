
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*,int ,char*,int) ;
 struct sk_buff* FUNC_3 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1) + 1;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_3(FUNC_0(VAR_2));
 if (VAR_3)
  FUNC_2(VAR_3, VAR_0, VAR_1, VAR_2);

 return VAR_3;
}
