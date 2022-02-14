
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * right; } ;
struct TYPE_5__ {int * right; } ;
struct TYPE_4__ {int * right; } ;
struct tep_filter_arg {int type; TYPE_3__ num; TYPE_2__ op; TYPE_1__ exp; } ;
__attribute__((used)) static int FUNC_0(struct tep_filter_arg *VAR_0)
{
 switch (VAR_0->type) {
 case 131:
  return VAR_0->exp.right != ((void*)0);

 case 129:
  return VAR_0->op.right != ((void*)0);

 case 130:
  return VAR_0->num.right != ((void*)0);

 case 128:

  return 1;

 case 132:

  return 1;

 default:
  return 0;
 }
}
