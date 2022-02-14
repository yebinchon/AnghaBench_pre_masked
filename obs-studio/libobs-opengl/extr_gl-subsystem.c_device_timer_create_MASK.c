
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_timer {void** queries; } ;
typedef struct gs_timer gs_timer_t ;
typedef int gs_device_t ;
typedef void* GLuint ;


 int FUNC_0 (int *) ;
 struct gs_timer* FUNC_1 (int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (char*) ;

gs_timer_t *FUNC_4(gs_device_t *VAR_0)
{
 FUNC_0(VAR_0);

 struct gs_timer *VAR_1;

 GLuint VAR_2[2];
 FUNC_2(2, VAR_2);
 if (!FUNC_3("glGenQueries"))
  return ((void*)0);

 VAR_1 = FUNC_1(sizeof(struct gs_timer));
 VAR_1->queries[0] = VAR_2[0];
 VAR_1->queries[1] = VAR_2[1];

 return VAR_1;
}
