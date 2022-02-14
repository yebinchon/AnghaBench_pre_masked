
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct test_batched_req {size_t idx; int completion; scalar_t__ sent; int * task; struct device* dev; int name; int * fw; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t num_requests; int test_result; struct test_batched_req* reqs; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int,size_t,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,struct test_batched_req*,char*,int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (char*,int ,size_t) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct test_batched_req* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_5,
           struct device_attribute *VAR_6,
           const char *VAR_7, size_t VAR_8)
{
 struct test_batched_req *VAR_9;
 int VAR_10;
 u8 VAR_11;

 FUNC_4(&VAR_3);

 VAR_2->reqs =
  FUNC_8(FUNC_1(sizeof(struct test_batched_req),
        VAR_2->num_requests, 2));
 if (!VAR_2->reqs) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 FUNC_7("batched sync firmware loading '%s' %u times\n",
  VAR_2->name, VAR_2->num_requests);

 for (VAR_11 = 0; VAR_11 < VAR_2->num_requests; VAR_11++) {
  VAR_9 = &VAR_2->reqs[VAR_11];
  VAR_9->fw = ((void*)0);
  VAR_9->idx = VAR_11;
  VAR_9->name = VAR_2->name;
  VAR_9->dev = VAR_5;
  FUNC_2(&VAR_9->completion);
  VAR_9->task = FUNC_3(VAR_4, VAR_9,
          "%s-%u", VAR_1, VAR_9->idx);
  if (!VAR_9->task || FUNC_0(VAR_9->task)) {
   FUNC_6("Setting up thread %u failed\n", VAR_9->idx);
   VAR_9->task = ((void*)0);
   VAR_10 = -VAR_0;
   goto out_bail;
  }
 }

 VAR_10 = VAR_8;
out_bail:
 for (VAR_11 = 0; VAR_11 < VAR_2->num_requests; VAR_11++) {
  VAR_9 = &VAR_2->reqs[VAR_11];
  if (VAR_9->task || VAR_9->sent)
   FUNC_9(&VAR_9->completion);
 }


 if (VAR_10 < 0)
  VAR_2->test_result = VAR_10;

out_unlock:
 FUNC_5(&VAR_3);

 return VAR_10;
}
