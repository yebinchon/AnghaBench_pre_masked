
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct ftl_stream {int connecting; int connect_thread; TYPE_1__ path; int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct ftl_stream*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ftl_stream*) ;
 int FUNC_8 (struct ftl_stream*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_2)
{
 struct ftl_stream *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_5("ftl-stream: connect_thread");

 FUNC_0(VAR_0, "ftl-stream: connect thread");

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != VAR_1) {
  FUNC_3(VAR_3->output, VAR_4);
  return ((void*)0);
 }

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4 != VAR_1) {
  FUNC_3(VAR_3->output, VAR_4);
  FUNC_1("Connection to %s failed: %d", VAR_3->path.array, VAR_4);
 }

 if (!FUNC_7(VAR_3))
  FUNC_6(VAR_3->connect_thread);

 FUNC_4(&VAR_3->connecting, 0);
 return ((void*)0);
}
