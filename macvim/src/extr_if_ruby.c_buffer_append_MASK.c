
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int colnr_T ;
typedef int char_u ;
struct TYPE_5__ {long ml_line_count; } ;
struct TYPE_6__ {TYPE_1__ b_ml; } ;
typedef TYPE_2__ buf_T ;
typedef int aco_save_T ;
typedef int VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (long,long) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (long,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (long) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static VALUE FUNC_11(VALUE VAR_4, VALUE VAR_5, VALUE VAR_6)
{
    buf_T *VAR_7 = FUNC_6(VAR_4);
    char *VAR_8 = FUNC_1(VAR_6);
    long VAR_9 = FUNC_0(VAR_5);
    aco_save_T VAR_10;

    if (VAR_8 == ((void*)0))
    {
 FUNC_8(VAR_3, "NULL line");
    }
    else if (VAR_9 >= 0 && VAR_9 <= VAR_7->b_ml.ml_line_count)
    {

 FUNC_3(&VAR_10, VAR_7);

 if (FUNC_9(VAR_9 + 1) == VAR_2) {
     FUNC_7(VAR_9, (char_u *) VAR_8, (colnr_T) 0, VAR_0);



     FUNC_2(VAR_9, 1L);

     FUNC_5();
 }


 FUNC_4(&VAR_10);


 FUNC_10(VAR_1);
    }
    else
    {
 FUNC_8(VAR_3, "line number %ld out of range", VAR_9);
    }
    return VAR_6;
}
