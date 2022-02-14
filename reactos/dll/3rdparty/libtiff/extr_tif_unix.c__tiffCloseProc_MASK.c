
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thandle_t ;
struct TYPE_2__ {int fd; int h; } ;
typedef TYPE_1__ fd_as_handle_union_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(thandle_t VAR_0)
{
 fd_as_handle_union_t VAR_1;
 VAR_1.h = VAR_0;
 return(FUNC_0(VAR_1.fd));
}
