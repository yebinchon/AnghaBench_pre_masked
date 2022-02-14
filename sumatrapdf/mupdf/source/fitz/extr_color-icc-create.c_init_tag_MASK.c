
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int icTagSignature ;
struct TYPE_3__ {scalar_t__ byte_padding; scalar_t__ size; int sig; scalar_t__ offset; } ;
typedef TYPE_1__ fz_icc_tag ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, fz_icc_tag VAR_2[], int *VAR_3, icTagSignature VAR_4, int VAR_5)
{
 int VAR_6 = (*VAR_3) + 1;

 VAR_2[VAR_6].offset = VAR_2[VAR_6 - 1].offset + VAR_2[VAR_6 - 1].size;
 VAR_2[VAR_6].sig = VAR_4;
 VAR_2[VAR_6].byte_padding = FUNC_0(VAR_0 + VAR_5);
 VAR_2[VAR_6].size = VAR_0 + VAR_5 + VAR_2[VAR_6].byte_padding;
 *VAR_3 = VAR_6;
}
