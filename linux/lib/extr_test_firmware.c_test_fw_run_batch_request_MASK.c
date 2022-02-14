
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct test_batched_req {int rc; int sent; int * task; int completion; TYPE_2__* fw; int idx; int dev; int name; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int test_result; int (* req_firmware ) (TYPE_2__**,int ,int ) ;scalar_t__ into_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_2__**,int ,int ,void*,int ) ;
 int FUNC_5 (TYPE_2__**,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_6(void *VAR_5)
{
 struct test_batched_req *VAR_6 = VAR_5;

 if (!VAR_6) {
  VAR_4->test_result = -VAR_0;
  return -VAR_0;
 }

 if (VAR_4->into_buf) {
  void *VAR_7;

  VAR_7 = FUNC_2(VAR_3, VAR_2);
  if (!VAR_7)
   return -VAR_1;

  VAR_6->rc = FUNC_4(&VAR_6->fw,
          VAR_6->name,
          VAR_6->dev,
          VAR_7,
          VAR_3);
  if (!VAR_6->fw)
   FUNC_1(VAR_7);
 } else {
  VAR_6->rc = VAR_4->req_firmware(&VAR_6->fw,
             VAR_6->name,
             VAR_6->dev);
 }

 if (VAR_6->rc) {
  FUNC_3("#%u: batched sync load failed: %d\n",
   VAR_6->idx, VAR_6->rc);
  if (!VAR_4->test_result)
   VAR_4->test_result = VAR_6->rc;
 } else if (VAR_6->fw) {
  VAR_6->sent = 1;
  FUNC_3("#%u: batched sync loaded %zu\n",
   VAR_6->idx, VAR_6->fw->size);
 }
 FUNC_0(&VAR_6->completion);

 VAR_6->task = ((void*)0);

 return 0;
}
