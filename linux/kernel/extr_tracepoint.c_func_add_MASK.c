
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_func {scalar_t__ func; int prio; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tracepoint_func* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct tracepoint_func* FUNC_2 (int) ;
 int FUNC_3 (struct tracepoint_func*) ;
 int FUNC_4 (struct tracepoint_func*,struct tracepoint_func*,int) ;

__attribute__((used)) static struct tracepoint_func *
FUNC_5(struct tracepoint_func **VAR_3, struct tracepoint_func *VAR_4,
  int VAR_5)
{
 struct tracepoint_func *VAR_6, *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = -1;

 if (FUNC_1(!VAR_4->func))
  return FUNC_0(-VAR_1);

 FUNC_3(*VAR_3);
 VAR_6 = *VAR_3;
 if (VAR_6) {

  for (VAR_8 = 0; VAR_6[VAR_8].func; VAR_8++) {

   if (VAR_9 < 0 && VAR_6[VAR_8].prio < VAR_5)
    VAR_9 = VAR_8;
   if (VAR_6[VAR_8].func == VAR_4->func &&
       VAR_6[VAR_8].data == VAR_4->data)
    return FUNC_0(-VAR_0);
  }
 }

 VAR_7 = FUNC_2(VAR_8 + 2);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_2);
 if (VAR_6) {
  if (VAR_9 < 0) {
   VAR_9 = VAR_8;
   FUNC_4(VAR_7, VAR_6, VAR_8 * sizeof(struct tracepoint_func));
  } else {

   FUNC_4(VAR_7, VAR_6, VAR_9 * sizeof(struct tracepoint_func));

   FUNC_4(VAR_7 + VAR_9 + 1, VAR_6 + VAR_9,
          (VAR_8 - VAR_9) * sizeof(struct tracepoint_func));
  }
 } else
  VAR_9 = 0;
 VAR_7[VAR_9] = *VAR_4;
 VAR_7[VAR_8 + 1].func = ((void*)0);
 *VAR_3 = VAR_7;
 FUNC_3(*VAR_3);
 return VAR_6;
}
