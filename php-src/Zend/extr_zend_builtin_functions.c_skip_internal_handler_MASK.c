
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* prev_execute_data; TYPE_2__* func; } ;
typedef TYPE_7__ zend_execute_data ;
typedef int zend_bool ;
struct TYPE_14__ {TYPE_5__* opline; TYPE_4__* func; } ;
struct TYPE_13__ {scalar_t__ opcode; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_12__ {TYPE_3__ common; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_10__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline zend_bool FUNC_1(zend_execute_data *VAR_5)
{
 return !(VAR_5->func && FUNC_0(VAR_5->func->common.type))
   && VAR_5->prev_execute_data
   && VAR_5->prev_execute_data->func
   && FUNC_0(VAR_5->prev_execute_data->func->common.type)
   && VAR_5->prev_execute_data->opline->opcode != VAR_0
   && VAR_5->prev_execute_data->opline->opcode != VAR_2
   && VAR_5->prev_execute_data->opline->opcode != VAR_3
   && VAR_5->prev_execute_data->opline->opcode != VAR_1
   && VAR_5->prev_execute_data->opline->opcode != VAR_4;
}
