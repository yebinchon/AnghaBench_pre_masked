
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned long long VAR_0)
{

 int VAR_1 = -(VAR_0 == 0);
 if (VAR_0 >= (1ull << 32)) { VAR_1 += 32; VAR_0 >>= 32; }; if (VAR_0 >= (1ull << 16)) { VAR_1 += 16; VAR_0 >>= 16; }; if (VAR_0 >= (1ull << 8)) { VAR_1 += 8; VAR_0 >>= 8; }; if (VAR_0 >= (1ull << 4)) { VAR_1 += 4; VAR_0 >>= 4; }; if (VAR_0 >= (1ull << 2)) { VAR_1 += 2; VAR_0 >>= 2; }; if (VAR_0 >= (1ull << 1)) { VAR_1 += 1; VAR_0 >>= 1; };
 return VAR_1;

}
