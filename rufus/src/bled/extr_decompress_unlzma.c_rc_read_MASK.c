
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ptr; void* buffer_end; int fd; } ;
typedef TYPE_1__ rc_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,void*,int ) ;

__attribute__((used)) static void FUNC_2(rc_t *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->fd, VAR_0, VAR_1);


 if (VAR_3 <= 0)
  FUNC_0("unexpected EOF");
 VAR_2->buffer_end = VAR_0 + VAR_3;
 VAR_2->ptr = VAR_0;
}
