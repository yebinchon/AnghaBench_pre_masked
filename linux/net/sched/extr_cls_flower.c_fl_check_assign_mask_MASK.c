
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int ht_node; int refcnt; } ;
struct cls_fl_head {int ht; } ;
struct cls_fl_filter {struct fl_flow_mask* mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fl_flow_mask*) ;
 int FUNC_1 (struct fl_flow_mask*) ;
 struct fl_flow_mask* FUNC_2 (struct cls_fl_head*,struct fl_flow_mask*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct fl_flow_mask* FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct cls_fl_head *VAR_3,
    struct cls_fl_filter *VAR_4,
    struct cls_fl_filter *VAR_5,
    struct fl_flow_mask *VAR_6)
{
 struct fl_flow_mask *VAR_7;
 int VAR_8 = 0;

 FUNC_3();





 VAR_4->mask = FUNC_6(&VAR_3->ht,
             &VAR_6->ht_node,
             VAR_2);
 if (!VAR_4->mask) {
  FUNC_4();

  if (VAR_5) {
   VAR_8 = -VAR_1;
   goto errout_cleanup;
  }

  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (FUNC_0(VAR_7)) {
   VAR_8 = FUNC_1(VAR_7);
   goto errout_cleanup;
  }

  VAR_4->mask = VAR_7;
  return 0;
 } else if (FUNC_0(VAR_4->mask)) {
  VAR_8 = FUNC_1(VAR_4->mask);
 } else if (VAR_5 && VAR_5->mask != VAR_4->mask) {
  VAR_8 = -VAR_1;
 } else if (!FUNC_5(&VAR_4->mask->refcnt)) {

  VAR_8 = -VAR_0;
 }
 FUNC_4();
 return VAR_8;

errout_cleanup:
 FUNC_7(&VAR_3->ht, &VAR_6->ht_node,
          VAR_2);
 return VAR_8;
}
