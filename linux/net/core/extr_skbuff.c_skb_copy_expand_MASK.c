
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; scalar_t__ head; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff const*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;

struct sk_buff *FUNC_9(const struct sk_buff *VAR_1,
    int VAR_2, int VAR_3,
    gfp_t VAR_4)
{



 struct sk_buff *VAR_5 = FUNC_1(VAR_2 + VAR_1->len + VAR_3,
     VAR_4, FUNC_2(VAR_1),
     VAR_0);
 int VAR_6 = FUNC_6(VAR_1);
 int VAR_7, VAR_8;

 if (!VAR_5)
  return ((void*)0);

 FUNC_8(VAR_5, VAR_2);


 FUNC_7(VAR_5, VAR_1->len);

 VAR_7 = VAR_6;
 VAR_8 = 0;
 if (VAR_2 <= VAR_7)
  VAR_7 = VAR_2;
 else
  VAR_8 = VAR_2 - VAR_7;


 FUNC_0(FUNC_3(VAR_1, -VAR_7, VAR_5->head + VAR_8,
        VAR_1->len + VAR_7));

 FUNC_4(VAR_5, VAR_1);

 FUNC_5(VAR_5, VAR_2 - VAR_6);

 return VAR_5;
}
