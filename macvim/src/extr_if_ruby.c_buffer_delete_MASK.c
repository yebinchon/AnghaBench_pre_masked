
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long ml_line_count; } ;
struct TYPE_6__ {TYPE_1__ b_ml; } ;
typedef TYPE_2__ buf_T ;
typedef int aco_save_T ;
typedef int VALUE ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (long,long) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (long,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,long) ;
 scalar_t__ FUNC_8 (long,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static VALUE FUNC_10(VALUE VAR_4, VALUE VAR_5)
{
    buf_T *VAR_6 = FUNC_5(VAR_4);
    long VAR_7 = FUNC_0(VAR_5);
    aco_save_T VAR_8;

    if (VAR_7 > 0 && VAR_7 <= VAR_6->b_ml.ml_line_count)
    {

 FUNC_1(&VAR_8, VAR_6);

 if (FUNC_8(VAR_7, 1) == VAR_1) {
     FUNC_6(VAR_7, 0);



     FUNC_4(VAR_7, 1L);

     FUNC_3();
 }


 FUNC_2(&VAR_8);


 FUNC_9(VAR_0);
    }
    else
    {
 FUNC_7(VAR_3, "line number %ld out of range", VAR_7);
    }
    return VAR_2;
}
