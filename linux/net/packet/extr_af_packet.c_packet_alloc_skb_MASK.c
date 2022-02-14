
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {size_t data_len; size_t len; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,size_t) ;
 int FUNC_1 (struct sk_buff*,size_t) ;
 struct sk_buff* FUNC_2 (struct sock*,size_t,size_t,int,int*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sock *VAR_1, size_t VAR_2,
            size_t VAR_3, size_t VAR_4,
            size_t VAR_5, int VAR_6,
            int *VAR_7)
{
 struct sk_buff *VAR_8;


 if (VAR_2 + VAR_4 < VAR_0 || !VAR_5)
  VAR_5 = VAR_4;

 VAR_8 = FUNC_2(VAR_1, VAR_2 + VAR_5, VAR_4 - VAR_5, VAR_6,
       VAR_7, 0);
 if (!VAR_8)
  return ((void*)0);

 FUNC_1(VAR_8, VAR_3);
 FUNC_0(VAR_8, VAR_5);
 VAR_8->data_len = VAR_4 - VAR_5;
 VAR_8->len += VAR_4 - VAR_5;

 return VAR_8;
}
