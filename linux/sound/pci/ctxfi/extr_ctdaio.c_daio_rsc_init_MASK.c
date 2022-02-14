
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hw {int chip_type; } ;
struct daio_desc {size_t type; int msr; } ;
struct TYPE_5__ {int * ops; } ;
struct daio {scalar_t__ type; TYPE_1__ rscl; TYPE_1__ rscr; } ;
struct TYPE_7__ {unsigned int left; unsigned int right; } ;
struct TYPE_6__ {unsigned int left; unsigned int right; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int ,int ,struct hw*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct daio *VAR_8,
    const struct daio_desc *VAR_9,
    struct hw *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12, VAR_13;

 switch (VAR_10->chip_type) {
 case 129:
  VAR_12 = VAR_6[VAR_9->type].left;
  VAR_13 = VAR_6[VAR_9->type].right;
  break;
 case 128:
  VAR_12 = VAR_7[VAR_9->type].left;
  VAR_13 = VAR_7[VAR_9->type].right;
  break;
 default:
  return -VAR_2;
 }
 VAR_11 = FUNC_0(&VAR_8->rscl, VAR_12, VAR_0, VAR_9->msr, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(&VAR_8->rscr, VAR_13, VAR_0, VAR_9->msr, VAR_10);
 if (VAR_11)
  goto error1;


 if (VAR_9->type <= VAR_1) {
  VAR_8->rscl.ops = VAR_8->rscr.ops = &VAR_5;
 } else {
  switch (VAR_10->chip_type) {
  case 129:
   VAR_8->rscl.ops = VAR_8->rscr.ops = &VAR_3;
   break;
  case 128:
   VAR_8->rscl.ops = VAR_8->rscr.ops = &VAR_4;
   break;
  default:
   break;
  }
 }
 VAR_8->type = VAR_9->type;

 return 0;

error1:
 FUNC_1(&VAR_8->rscl);
 return VAR_11;
}
