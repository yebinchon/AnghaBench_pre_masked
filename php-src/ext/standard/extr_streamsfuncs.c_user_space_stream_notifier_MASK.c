
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {TYPE_1__* notifier; } ;
typedef TYPE_2__ php_stream_context ;
struct TYPE_4__ {int ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int,int *,int ,int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(php_stream_context *VAR_2, int VAR_3, int VAR_4,
  char *VAR_5, int VAR_6, size_t VAR_7, size_t VAR_8, void * VAR_9)
{
 zval *VAR_10 = &VAR_2->notifier->ptr;
 zval VAR_11;
 zval VAR_12[6];
 int VAR_13;

 FUNC_0(&VAR_12[0], VAR_3);
 FUNC_0(&VAR_12[1], VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_12[2], VAR_5);
 } else {
  FUNC_1(&VAR_12[2]);
 }
 FUNC_0(&VAR_12[3], VAR_6);
 FUNC_0(&VAR_12[4], VAR_7);
 FUNC_0(&VAR_12[5], VAR_8);

 if (VAR_1 == FUNC_3(((void*)0), ((void*)0), VAR_10, &VAR_11, 6, VAR_12, 0, ((void*)0))) {
  FUNC_4(((void*)0), VAR_0, "failed to call user notifier");
 }
 for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
  FUNC_5(&VAR_12[VAR_13]);
 }
 FUNC_5(&VAR_11);
}
