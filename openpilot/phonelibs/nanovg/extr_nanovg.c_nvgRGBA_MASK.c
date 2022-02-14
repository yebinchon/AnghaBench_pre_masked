
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char r; unsigned char g; unsigned char b; unsigned char a; } ;
typedef TYPE_1__ NVGcolor ;



NVGcolor FUNC_0(unsigned char VAR_0, unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 NVGcolor VAR_4;

 VAR_4.r = VAR_0 / 255.0f;
 VAR_4.g = VAR_1 / 255.0f;
 VAR_4.b = VAR_2 / 255.0f;
 VAR_4.a = VAR_3 / 255.0f;
 return VAR_4;
}
