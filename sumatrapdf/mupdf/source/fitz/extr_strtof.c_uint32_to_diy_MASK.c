
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {unsigned int f; unsigned int e; int member_1; int member_0; } ;
typedef TYPE_1__ strtof_fp_t ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static strtof_fp_t
FUNC_1 (uint32_t VAR_0)
{
 strtof_fp_t VAR_1 = {VAR_0, 0};
 unsigned VAR_2 = FUNC_0(VAR_0);

 VAR_1.f <<= VAR_2;
 VAR_1.e -= VAR_2;
 return VAR_1;
}
