
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* context; } ;
struct TYPE_8__ {int * str; } ;
struct TYPE_7__ {scalar_t__ grep; int buf_size; int buf_len; int * buf; } ;
struct TYPE_6__ {TYPE_3__ grep; int buffer_sz; int buffer_len; int * buffer; } ;
typedef TYPE_2__ RConsStack ;
typedef int RConsGrep ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(RConsStack *VAR_1, bool VAR_2) {
 if (VAR_2) {
  FUNC_0 (VAR_0.context->buffer);
 }
 VAR_0.context->buffer = VAR_1->buf;
 VAR_1->buf = ((void*)0);
 VAR_0.context->buffer_len = VAR_1->buf_len;
 VAR_0.context->buffer_sz = VAR_1->buf_size;

 if (VAR_1->grep) {
  FUNC_0 (VAR_0.context->grep.str);
  FUNC_1 (&VAR_0.context->grep, VAR_1->grep, sizeof (RConsGrep));
 }
}
