
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int,char*,char*,int,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __u32 FUNC_2(void)
{
 __u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_1, &VAR_3);
 FUNC_0(VAR_4 == -1, "lookup_elem(linum_map)", "err:%d errno:%d\n",
       VAR_4, VAR_0);

 return VAR_3;
}
