
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
struct perf_data {TYPE_1__ file; scalar_t__ is_pipe; } ;
struct record {int evlist; TYPE_3__* session; scalar_t__ buildid_all; int no_buildid; scalar_t__ bytes_written; struct perf_data data; } ;
struct TYPE_6__ {int data_size; } ;
struct TYPE_7__ {TYPE_2__ header; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct perf_data*) ;
 int FUNC_3 (TYPE_3__*,int ,int,int) ;
 int FUNC_4 (struct record*) ;

__attribute__((used)) static void
FUNC_5(struct record *VAR_1)
{
 struct perf_data *VAR_2 = &VAR_1->data;
 int VAR_3 = FUNC_2(VAR_2);

 if (VAR_2->is_pipe)
  return;

 VAR_1->session->header.data_size += VAR_1->bytes_written;
 VAR_2->file.size = FUNC_1(FUNC_2(VAR_2), 0, VAR_0);

 if (!VAR_1->no_buildid) {
  FUNC_4(VAR_1);

  if (VAR_1->buildid_all)
   FUNC_0(VAR_1->session);
 }
 FUNC_3(VAR_1->session, VAR_1->evlist, VAR_3, 1);

 return;
}
