
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line6_pcm_stream {scalar_t__* urbs; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct line6_pcm_stream *VAR_0, int VAR_1)
{
 int VAR_2;


 if (VAR_0->urbs == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0->urbs[VAR_2]) {
   FUNC_2(VAR_0->urbs[VAR_2]);
   FUNC_1(VAR_0->urbs[VAR_2]);
  }
 }
 FUNC_0(VAR_0->urbs);
 VAR_0->urbs = ((void*)0);
}
