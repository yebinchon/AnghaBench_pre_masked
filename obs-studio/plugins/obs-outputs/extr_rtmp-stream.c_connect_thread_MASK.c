
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct rtmp_stream {int connecting; int connect_thread; TYPE_1__ path; int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct rtmp_stream*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rtmp_stream*) ;
 int FUNC_7 (struct rtmp_stream*) ;

__attribute__((used)) static void *FUNC_8(void *VAR_2)
{
 struct rtmp_stream *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_4("rtmp-stream: connect_thread");

 if (!FUNC_1(VAR_3)) {
  FUNC_2(VAR_3->output, VAR_0);
  return ((void*)0);
 }

 VAR_4 = FUNC_7(VAR_3);

 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_3->output, VAR_4);
  FUNC_0("Connection to %s failed: %d", VAR_3->path.array, VAR_4);
 }

 if (!FUNC_6(VAR_3))
  FUNC_5(VAR_3->connect_thread);

 FUNC_3(&VAR_3->connecting, 0);
 return ((void*)0);
}
