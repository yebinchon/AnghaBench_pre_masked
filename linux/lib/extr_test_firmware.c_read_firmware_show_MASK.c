
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct test_batched_req {TYPE_1__* fw; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {size_t read_fw_idx; size_t num_requests; struct test_batched_req* reqs; } ;
struct TYPE_3__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,size_t,int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_6,
      struct device_attribute *VAR_7,
      char *VAR_8)
{
 struct test_batched_req *VAR_9;
 u8 VAR_10;
 ssize_t VAR_11 = 0;

 FUNC_1(&VAR_5);

 VAR_10 = VAR_4->read_fw_idx;
 if (VAR_10 >= VAR_4->num_requests) {
  VAR_11 = -VAR_2;
  goto out;
 }

 if (!VAR_4->reqs) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_9 = &VAR_4->reqs[VAR_10];
 if (!VAR_9->fw) {
  FUNC_3("#%u: failed to async load firmware\n", VAR_10);
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_4("#%u: loaded %zu\n", VAR_10, VAR_9->fw->size);

 if (VAR_9->fw->size > VAR_3) {
  FUNC_3("Testing interface must use PAGE_SIZE firmware for now\n");
  VAR_11 = -VAR_0;
  goto out;
 }
 FUNC_0(VAR_8, VAR_9->fw->data, VAR_9->fw->size);

 VAR_11 = VAR_9->fw->size;
out:
 FUNC_2(&VAR_5);

 return VAR_11;
}
