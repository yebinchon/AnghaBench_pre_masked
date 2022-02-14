
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int request_rec ;
struct TYPE_4__ {TYPE_2__* r; } ;
typedef TYPE_1__ php_struct ;
struct TYPE_5__ {int output_filters; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int * FUNC_1 (char*,TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static request_rec *FUNC_2(char *VAR_1)
{
 php_struct *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_1 || !VAR_2 || !VAR_2->r) {
  return ((void*)0);
 }

 return FUNC_1(VAR_1, VAR_2->r, VAR_2->r->output_filters);
}
