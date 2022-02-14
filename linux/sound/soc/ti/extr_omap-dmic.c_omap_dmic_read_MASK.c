
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct omap_dmic {scalar_t__ io_base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct omap_dmic *VAR_0, u16 VAR_1)
{
 return FUNC_0(VAR_0->io_base + VAR_1);
}
