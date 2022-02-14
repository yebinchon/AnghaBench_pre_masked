
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {int connect_thread; int connecting; int output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,int ,struct rtmp_stream*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1)
{
 struct rtmp_stream *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_2->output, 0))
  return 0;
 if (!FUNC_1(VAR_2->output, 0))
  return 0;

 FUNC_2(&VAR_2->connecting, 1);
 return FUNC_3(&VAR_2->connect_thread, ((void*)0), VAR_0,
         VAR_2) == 0;
}
