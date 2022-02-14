
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu10k1x_midi {scalar_t__ port; } ;
struct emu10k1x {int dummy; } ;


 scalar_t__ FUNC_0 (struct emu10k1x*,scalar_t__,int ) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct emu10k1x *VAR_0, struct emu10k1x_midi *VAR_1, int VAR_2)
{
 return (unsigned char)FUNC_0(VAR_0, VAR_1->port + VAR_2, 0);
}
