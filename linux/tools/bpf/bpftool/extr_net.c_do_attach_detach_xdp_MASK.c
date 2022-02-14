
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum net_attach_type { ____Placeholder_net_attach_type } net_attach_type ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_7, enum net_attach_type VAR_8,
    int VAR_9, bool VAR_10)
{
 __u32 VAR_11 = 0;

 if (!VAR_10)
  VAR_11 = VAR_6;
 if (VAR_8 == VAR_1)
  VAR_11 |= VAR_5;
 if (VAR_8 == VAR_0)
  VAR_11 |= VAR_3;
 if (VAR_8 == VAR_2)
  VAR_11 |= VAR_4;

 return FUNC_0(VAR_9, VAR_7, VAR_11);
}
