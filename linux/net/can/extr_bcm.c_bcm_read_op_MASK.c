
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bcm_op {int frames; int nframes; int ival2; int ival1; int count; int flags; } ;
struct bcm_msg_head {int nframes; int ival2; int ival1; int count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bcm_op* FUNC_0 (struct list_head*,struct bcm_msg_head*,int) ;
 int FUNC_1 (struct bcm_op*,struct bcm_msg_head*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct list_head *VAR_2, struct bcm_msg_head *VAR_3,
         int VAR_4)
{
 struct bcm_op *VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (!VAR_5)
  return -VAR_0;


 VAR_3->flags = VAR_5->flags;
 VAR_3->count = VAR_5->count;
 VAR_3->ival1 = VAR_5->ival1;
 VAR_3->ival2 = VAR_5->ival2;
 VAR_3->nframes = VAR_5->nframes;

 FUNC_1(VAR_5, VAR_3, VAR_5->frames, 0);

 return VAR_1;
}
