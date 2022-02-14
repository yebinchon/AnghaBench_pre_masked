
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; } ;
typedef int __wsum ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (void*,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, char *VAR_1, int VAR_2,
         int VAR_3, int VAR_4, struct sk_buff *VAR_5)
{
 __wsum VAR_6;

 VAR_6 = FUNC_1(VAR_0+VAR_2, VAR_1, VAR_3, 0);
 VAR_5->csum = FUNC_0(VAR_5->csum, VAR_6, VAR_4);
 return 0;
}
