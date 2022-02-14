
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_1)
{
 if (FUNC_0(VAR_0))
  return 0;

 return
  VAR_1 <= 64 - 16 ? 16 :
  VAR_1 <= 128 - 32 ? 32 :
  VAR_1 <= 512 - 64 ? 64 :
  VAR_1 <= 4096 - 128 ? 128 :
  VAR_1 <= (1 << 14) - 256 ? 256 :
  VAR_1 <= (1 << 15) - 512 ? 512 :
  VAR_1 <= (1 << 16) - 1024 ? 1024 : 2048;
}
