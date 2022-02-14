
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* filters; int opt_lzma; } ;
typedef TYPE_2__ lzma_options_easy ;
struct TYPE_4__ {int id; int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

extern bool
FUNC_1(lzma_options_easy *VAR_2, uint32_t VAR_3)
{
 if (FUNC_0(&VAR_2->opt_lzma, VAR_3))
  return 1;

 VAR_2->filters[0].id = VAR_0;
 VAR_2->filters[0].options = &VAR_2->opt_lzma;
 VAR_2->filters[1].id = VAR_1;

 return 0;
}
