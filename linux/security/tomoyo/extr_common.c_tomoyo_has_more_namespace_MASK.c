
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ns; scalar_t__ eof; } ;
struct tomoyo_io_buffer {scalar_t__ type; TYPE_2__ r; } ;
struct TYPE_3__ {int * next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct tomoyo_io_buffer *VAR_3)
{
 return (VAR_3->type == VAR_0 ||
  VAR_3->type == VAR_1) && VAR_3->r.eof &&
  VAR_3->r.ns->next != &VAR_2;
}
