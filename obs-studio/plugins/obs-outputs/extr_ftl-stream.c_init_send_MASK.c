
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftl_stream {int output; int active; int send_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ,struct ftl_stream*) ;
 int FUNC_3 (struct ftl_stream*) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct ftl_stream *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_3);

 VAR_4 = FUNC_2(&VAR_3->send_thread, ((void*)0), VAR_2, VAR_3);
 if (VAR_4 != 0) {
  FUNC_4("Failed to create send thread");
  return VAR_0;
 }

 FUNC_1(&VAR_3->active, 1);

 FUNC_0(VAR_3->output, 0);

 return VAR_1;
}
