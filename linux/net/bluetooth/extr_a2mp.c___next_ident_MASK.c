
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amp_mgr {scalar_t__ ident; } ;



__attribute__((used)) static u8 FUNC_0(struct amp_mgr *VAR_0)
{
 if (++VAR_0->ident == 0)
  VAR_0->ident = 1;

 return VAR_0->ident;
}
