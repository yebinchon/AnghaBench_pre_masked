
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ max_length; } ;
typedef TYPE_1__ List ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(List *VAR_0)
{

 if (VAR_0->length >= VAR_0->max_length)
  FUNC_0(VAR_0, VAR_0->length + 1);
 VAR_0->length++;
}
