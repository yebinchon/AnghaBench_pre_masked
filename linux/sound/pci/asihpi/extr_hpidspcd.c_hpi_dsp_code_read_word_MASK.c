
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dsp_code {int word_count; int block_length; TYPE_2__* pvt; } ;
struct TYPE_4__ {TYPE_1__* firmware; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 short VAR_0 ;

short FUNC_0(struct dsp_code *VAR_1, u32 *VAR_2)
{
 if (VAR_1->word_count + 1 > VAR_1->block_length)
  return VAR_0;

 *VAR_2 = ((u32 *)(VAR_1->pvt->firmware->data))[VAR_1->
  word_count];
 VAR_1->word_count++;
 return 0;
}
