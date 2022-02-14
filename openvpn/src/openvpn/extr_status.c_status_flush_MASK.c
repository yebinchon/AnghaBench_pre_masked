
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_output {scalar_t__ fd; int flags; int read_buf; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__,long const) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int,char*) ;

void
FUNC_7(struct status_output *VAR_4)
{
    if (VAR_4 && VAR_4->fd >= 0 && (VAR_4->flags & VAR_3))
    {
        if (FUNC_1(&VAR_4->read_buf))
        {
            FUNC_0(FUNC_2(&VAR_4->read_buf, 0));
        }
    }
}
