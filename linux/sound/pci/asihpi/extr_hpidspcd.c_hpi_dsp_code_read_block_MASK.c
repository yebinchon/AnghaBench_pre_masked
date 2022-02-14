
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dsp_code {scalar_t__ word_count; scalar_t__ block_length; TYPE_2__* pvt; } ;
struct TYPE_4__ {TYPE_1__* firmware; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 short VAR_0 ;

short FUNC_0(size_t VAR_1,
 struct dsp_code *VAR_2, u32 **VAR_3)
{
 if (VAR_2->word_count + VAR_1 > VAR_2->block_length)
  return VAR_0;

 *VAR_3 =
  ((u32 *)(VAR_2->pvt->firmware->data)) +
  VAR_2->word_count;
 VAR_2->word_count += VAR_1;
 return 0;
}
