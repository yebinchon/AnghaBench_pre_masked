
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int m_buf_fsync_backend; int m_buf_written_backend; } ;
struct TYPE_7__ {int num_requests; int requests; scalar_t__ num_backend_fsync; scalar_t__ num_backend_writes; } ;
struct TYPE_6__ {int type; int ftag; } ;
typedef TYPE_1__ CheckpointerRequest ;


 int FUNC_0 () ;
 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(void)
{
 CheckpointerRequest *VAR_4 = ((void*)0);
 CheckpointerRequest *VAR_5;
 int VAR_6;

 if (!FUNC_0())
  return;

 FUNC_2(VAR_1, VAR_3);


 VAR_0.m_buf_written_backend += VAR_2->num_backend_writes;
 VAR_0.m_buf_fsync_backend += VAR_2->num_backend_fsync;

 VAR_2->num_backend_writes = 0;
 VAR_2->num_backend_fsync = 0;
 VAR_6 = VAR_2->num_requests;
 if (VAR_6 > 0)
 {
  VAR_4 = (CheckpointerRequest *) FUNC_7(VAR_6 * sizeof(CheckpointerRequest));
  FUNC_6(VAR_4, VAR_2->requests, VAR_6 * sizeof(CheckpointerRequest));
 }

 FUNC_5();

 VAR_2->num_requests = 0;

 FUNC_3(VAR_1);

 for (VAR_5 = VAR_4; VAR_6 > 0; VAR_5++, VAR_6--)
  FUNC_4(&VAR_5->ftag, VAR_5->type);

 FUNC_1();

 if (VAR_4)
  FUNC_8(VAR_4);
}
