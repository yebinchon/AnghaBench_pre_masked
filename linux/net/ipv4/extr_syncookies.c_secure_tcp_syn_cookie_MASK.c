
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __u32 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int) ;
 int FUNC_1 () ;

__attribute__((used)) static __u32 FUNC_2(__be32 VAR_2, __be32 VAR_3, __be16 VAR_4,
       __be16 VAR_5, __u32 VAR_6, __u32 VAR_7)
{
 u32 VAR_8 = FUNC_1();
 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0, 0) +
  VAR_6 + (VAR_8 << VAR_0) +
  ((FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8, 1) + VAR_7)
   & VAR_1));
}
