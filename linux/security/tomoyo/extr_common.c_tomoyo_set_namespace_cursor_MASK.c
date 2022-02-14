
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* ns; scalar_t__ eof; } ;
struct tomoyo_io_buffer {scalar_t__ type; TYPE_1__ r; } ;
struct list_head {struct list_head* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 struct list_head VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct tomoyo_io_buffer *VAR_3)
{
 struct list_head *VAR_4;

 if (VAR_3->type != VAR_0 &&
     VAR_3->type != VAR_1)
  return;




 VAR_4 = VAR_3->r.ns;
 if (!VAR_4 || (VAR_3->r.eof && VAR_4->next != &VAR_2)) {

  FUNC_0(&VAR_3->r, 0, sizeof(VAR_3->r));
  VAR_3->r.ns = VAR_4 ? VAR_4->next : VAR_2.next;
 }
}
