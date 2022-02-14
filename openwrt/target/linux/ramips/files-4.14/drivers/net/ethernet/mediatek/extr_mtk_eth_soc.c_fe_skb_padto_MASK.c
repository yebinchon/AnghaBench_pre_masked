
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ protocol; } ;
struct fe_priv {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct sk_buff *VAR_5, struct fe_priv *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = 0;
 if (FUNC_4(VAR_5->len < VAR_4)) {
  if ((VAR_6->flags & VAR_2) &&
      !(VAR_6->flags & VAR_3))
   return VAR_8;

  if (FUNC_3(VAR_5))
   VAR_7 = VAR_1;
  else if (VAR_5->protocol == FUNC_0(VAR_0))
   VAR_7 = VAR_4;
  else if (!(VAR_6->flags & VAR_2))
   VAR_7 = VAR_1;
  else
   return VAR_8;

  if (VAR_5->len < VAR_7) {
   VAR_8 = FUNC_1(VAR_5, VAR_7 - VAR_5->len);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_5->len = VAR_7;
   FUNC_2(VAR_5, VAR_7);
  }
 }

 return VAR_8;
}
