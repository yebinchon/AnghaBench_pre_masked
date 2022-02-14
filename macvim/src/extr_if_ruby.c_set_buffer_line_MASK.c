
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ linenr_T ;
typedef int char_u ;
struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_6__ {TYPE_1__ b_ml; } ;
typedef TYPE_2__ buf_T ;
typedef int aco_save_T ;
typedef int VALUE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,long) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static VALUE FUNC_9(buf_T *VAR_4, linenr_T VAR_5, VALUE VAR_6)
{
    char *VAR_7 = FUNC_0(VAR_6);
    aco_save_T VAR_8;

    if (VAR_5 > 0 && VAR_5 <= VAR_4->b_ml.ml_line_count && VAR_7 != ((void*)0))
    {

 FUNC_1(&VAR_8, VAR_4);

 if (FUNC_7(VAR_5) == VAR_1) {
     FUNC_4(VAR_5, (char_u *)VAR_7, VAR_2);
     FUNC_3();



 }


 FUNC_2(&VAR_8);


 FUNC_8(VAR_0);
    }
    else
    {
 FUNC_5(VAR_3, "line number %ld out of range", (long)VAR_5);
    }
    return VAR_6;
}
