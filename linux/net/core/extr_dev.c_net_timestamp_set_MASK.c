
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ tstamp; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1)
{
 VAR_1->tstamp = 0;
 if (FUNC_1(&VAR_0))
  FUNC_0(VAR_1);
}
