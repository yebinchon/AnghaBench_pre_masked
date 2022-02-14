
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int,int,void*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1,
          void *VAR_2, int VAR_3,
          void *VAR_4, int VAR_5,
          int VAR_6)
{
 int VAR_7;

 if (VAR_4 && !FUNC_0(VAR_4, 0, VAR_6))
  return 0;

 VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 != VAR_0) {
  VAR_7 = FUNC_1(VAR_1, VAR_5, VAR_6, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
