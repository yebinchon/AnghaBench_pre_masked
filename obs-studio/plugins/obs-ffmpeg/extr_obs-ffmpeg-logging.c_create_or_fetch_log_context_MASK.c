
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct log_context {void* context; char* str; int print_prefix; } ;
struct TYPE_6__ {size_t num; struct log_context** array; } ;
struct TYPE_5__ {size_t num; struct log_context** array; } ;


 TYPE_1__ VAR_0 ;
 struct log_context* FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_1__,struct log_context**) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct log_context *FUNC_5(void *VAR_3)
{
 FUNC_3(&VAR_2);
 for (size_t VAR_4 = 0; VAR_4 < VAR_0.num; VAR_4++) {
  if (VAR_3 == VAR_0.array[VAR_4]->context) {
   FUNC_4(&VAR_2);
   return VAR_0.array[VAR_4];
  }
 }

 struct log_context *VAR_5 = ((void*)0);

 size_t VAR_6 = VAR_1.num;
 if (!!VAR_6) {
  VAR_5 = VAR_1.array[VAR_6 - 1];
  FUNC_1(VAR_1);
 }

 if (!VAR_5)
  VAR_5 = FUNC_0(sizeof(struct log_context));

 VAR_5->context = VAR_3;
 VAR_5->str[0] = '\0';
 VAR_5->print_prefix = 1;

 FUNC_2(VAR_0, &VAR_5);

 FUNC_4(&VAR_2);

 return VAR_5;
}
