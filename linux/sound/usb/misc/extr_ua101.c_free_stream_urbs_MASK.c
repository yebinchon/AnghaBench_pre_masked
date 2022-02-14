
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101_stream {unsigned int queue_length; int ** urbs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ua101_stream *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->queue_length; ++VAR_1) {
  FUNC_0(VAR_0->urbs[VAR_1]);
  VAR_0->urbs[VAR_1] = ((void*)0);
 }
}
