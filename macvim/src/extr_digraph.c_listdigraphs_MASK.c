
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ char1; int char2; int result; } ;
typedef TYPE_1__ digr_T ;
struct TYPE_6__ {int ga_len; scalar_t__ ga_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_7 ;

void
FUNC_4()
{
    int VAR_8;
    digr_T *VAR_9;

    FUNC_1('\n');

    VAR_9 = VAR_3;
    for (VAR_8 = 0; VAR_9->char1 != VAR_2 && !VAR_4; ++VAR_8)
    {
 if (FUNC_0(VAR_9->char1, VAR_9->char2, VAR_1) == VAR_9->result



  )
     FUNC_2(VAR_9);

 ++VAR_9;
 FUNC_3();
    }

    VAR_9 = (digr_T *)VAR_7.ga_data;
    for (VAR_8 = 0; VAR_8 < VAR_7.ga_len && !VAR_4; ++VAR_8)
    {
 FUNC_2(VAR_9);
 FUNC_3();
 ++VAR_9;
    }
    VAR_6 = VAR_0;

}
