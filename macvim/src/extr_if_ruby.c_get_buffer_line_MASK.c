
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ linenr_T ;
struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_6__ {TYPE_1__ b_ml; } ;
typedef TYPE_2__ buf_T ;
typedef int VALUE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,long) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static VALUE FUNC_3(buf_T *VAR_2, linenr_T VAR_3)
{
    if (VAR_3 <= 0 || VAR_3 > VAR_2->b_ml.ml_line_count)
 FUNC_1(VAR_1, "line number %ld out of range", (long)VAR_3);
    return FUNC_2((char *)FUNC_0(VAR_2, VAR_3, VAR_0));
}
