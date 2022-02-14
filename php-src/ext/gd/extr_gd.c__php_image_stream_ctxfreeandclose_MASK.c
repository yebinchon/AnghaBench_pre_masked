
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdIOCtx {int * data; } ;
typedef int php_stream ;


 int FUNC_0 (struct gdIOCtx*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gdIOCtx *VAR_0)
{

 if(VAR_0->data) {
  FUNC_1((php_stream *) VAR_0->data);
  VAR_0->data = ((void*)0);
 }
 if(VAR_0) {
  FUNC_0(VAR_0);
 }
}
