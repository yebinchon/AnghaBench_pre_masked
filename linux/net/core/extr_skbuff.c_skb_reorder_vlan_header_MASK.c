
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {void* data; int mac_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sk_buff *VAR_2)
{
 int VAR_3, VAR_4;
 void *VAR_5;

 if (FUNC_3(VAR_2, FUNC_4(VAR_2)) < 0) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_3 = VAR_2->data - FUNC_5(VAR_2);
 if (FUNC_1(VAR_3 > VAR_1 + VAR_0)) {
  FUNC_2(FUNC_5(VAR_2) + VAR_1, FUNC_5(VAR_2),
   VAR_3 - VAR_1 - VAR_0);
 }

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4) {
  VAR_5 = FUNC_6(VAR_2) - VAR_4;
  FUNC_2(VAR_5 + VAR_1, VAR_5, VAR_4);
 }

 VAR_2->mac_header += VAR_1;
 return VAR_2;
}
