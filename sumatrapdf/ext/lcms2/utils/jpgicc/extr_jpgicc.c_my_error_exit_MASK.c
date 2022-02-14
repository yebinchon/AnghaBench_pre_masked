
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_6__ {TYPE_1__* err; } ;
struct TYPE_5__ {int (* format_message ) (TYPE_2__*,char*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*) ;

__attribute__((used)) static
void FUNC_2 (j_common_ptr VAR_1)
{
  char VAR_2[VAR_0];

  (*VAR_1->err->format_message) (VAR_1, VAR_2);
  FUNC_0(VAR_2);
}
