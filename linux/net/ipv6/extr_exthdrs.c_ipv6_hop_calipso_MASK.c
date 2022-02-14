
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,unsigned char const*) ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned char* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_0, int VAR_1)
{
 const unsigned char *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2[VAR_1 + 1] < 8)
  goto drop;

 if (VAR_2[VAR_1 + 6] * 4 + 8 > VAR_2[VAR_1 + 1])
  goto drop;

 if (!FUNC_0(VAR_0, VAR_2 + VAR_1))
  goto drop;

 return 1;

drop:
 FUNC_1(VAR_0);
 return 0;
}
