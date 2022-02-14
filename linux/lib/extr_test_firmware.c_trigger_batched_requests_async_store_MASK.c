
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct test_batched_req {size_t name; size_t idx; int rc; int sent; int completion; int * fw; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_requests; size_t name; int send_uevent; int test_result; struct test_batched_req* reqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,size_t,int) ;
 int FUNC_5 (int ,int,size_t,struct device*,int ,struct test_batched_req*,int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct test_batched_req* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static
ssize_t FUNC_8(struct device *VAR_8,
          struct device_attribute *VAR_9,
          const char *VAR_10, size_t VAR_11)
{
 struct test_batched_req *VAR_12;
 bool VAR_13;
 int VAR_14;
 u8 VAR_15;

 FUNC_2(&VAR_6);

 VAR_5->reqs =
  FUNC_6(FUNC_0(sizeof(struct test_batched_req),
        VAR_5->num_requests, 2));
 if (!VAR_5->reqs) {
  VAR_14 = -VAR_0;
  goto out;
 }

 FUNC_4("batched loading '%s' custom fallback mechanism %u times\n",
  VAR_5->name, VAR_5->num_requests);

 VAR_13 = VAR_5->send_uevent ? VAR_1 :
  VAR_2;

 for (VAR_15 = 0; VAR_15 < VAR_5->num_requests; VAR_15++) {
  VAR_12 = &VAR_5->reqs[VAR_15];
  VAR_12->name = VAR_5->name;
  VAR_12->fw = ((void*)0);
  VAR_12->idx = VAR_15;
  FUNC_1(&VAR_12->completion);
  VAR_14 = FUNC_5(VAR_4, VAR_13,
          VAR_12->name,
          VAR_8, VAR_3, VAR_12,
          VAR_7);
  if (VAR_14) {
   FUNC_4("#%u: batched async load failed setup: %d\n",
    VAR_15, VAR_14);
   VAR_12->rc = VAR_14;
   goto out_bail;
  } else
   VAR_12->sent = 1;
 }

 VAR_14 = VAR_11;

out_bail:
 for (VAR_15 = 0; VAR_15 < VAR_5->num_requests; VAR_15++) {
  VAR_12 = &VAR_5->reqs[VAR_15];
  if (VAR_12->sent)
   FUNC_7(&VAR_12->completion);
 }


 if (VAR_14 < 0)
  VAR_5->test_result = VAR_14;

out:
 FUNC_3(&VAR_6);

 return VAR_14;
}
