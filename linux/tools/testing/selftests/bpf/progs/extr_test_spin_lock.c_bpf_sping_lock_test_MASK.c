
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmap_elem {int cnt; int lock; } ;
struct cls_elem {int lock; int cnt; } ;
struct bpf_vqueue {int volatile credit; unsigned long long lasttime; int lock; int rate; } ;
struct __sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long long,int ) ;
 struct cls_elem* FUNC_1 (int *,int ) ;
 unsigned long long FUNC_2 () ;
 void* FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int*,struct hmap_elem*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_7(struct __sk_buff *VAR_3)
{
 volatile int VAR_4 = 0, VAR_5 = 100, VAR_6 = 64;
 struct hmap_elem VAR_7 = {}, *VAR_8;
 unsigned long long VAR_9;
 struct bpf_vqueue *VAR_10;
 struct cls_elem *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_8 = FUNC_3(&VAR_1, &VAR_12);
 if (!VAR_8) {
  FUNC_4(&VAR_1, &VAR_12, &VAR_7, 0);
  VAR_8 = FUNC_3(&VAR_1, &VAR_12);
  if (!VAR_8) {
   VAR_13 = 1;
   goto err;
  }
 }

 FUNC_5(&VAR_8->lock);
 if (VAR_8->cnt)
  VAR_8->cnt--;
 else
  VAR_8->cnt++;
 if (VAR_8->cnt != 0 && VAR_8->cnt != 1)
  VAR_13 = 1;
 FUNC_6(&VAR_8->lock);


 VAR_10 = FUNC_3(&VAR_2, &VAR_12);
 if (!VAR_10)
  goto err;
 VAR_9 = FUNC_2();
 FUNC_5(&VAR_10->lock);
 VAR_10->credit += FUNC_0(VAR_9 - VAR_10->lasttime, VAR_10->rate);
 VAR_10->lasttime = VAR_9;
 if (VAR_10->credit > VAR_5)
  VAR_10->credit = VAR_5;
 VAR_10->credit -= VAR_6;
 VAR_4 = VAR_10->credit;
 FUNC_6(&VAR_10->lock);


 VAR_11 = FUNC_1(&VAR_0, 0);
 FUNC_5(&VAR_11->lock);
 VAR_11->cnt++;
 FUNC_6(&VAR_11->lock);

err:
 return VAR_13;
}
