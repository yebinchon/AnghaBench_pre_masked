
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set_type {int features; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct nft_set_type *VAR_1, u32 VAR_2)
{
 return (VAR_2 & VAR_1->features) == (VAR_2 & VAR_0);
}
