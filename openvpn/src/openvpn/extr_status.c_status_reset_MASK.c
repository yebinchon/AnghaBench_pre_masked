
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_output {scalar_t__ fd; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

void
FUNC_1(struct status_output *VAR_1)
{
    if (VAR_1 && VAR_1->fd >= 0)
    {
        FUNC_0(VAR_1->fd, (off_t)0, VAR_0);
    }
}
