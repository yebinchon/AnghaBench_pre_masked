
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float UINT ;
struct TYPE_4__ {scalar_t__ wheel_remain; scalar_t__ top_item; scalar_t__ page_size; } ;
typedef scalar_t__ SHORT ;
typedef int LRESULT ;
typedef TYPE_1__ LB_DESCR ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,float*,int ) ;
 int VAR_1 ;
 float VAR_2 ;
 float FUNC_2 (float,float) ;

__attribute__((used)) static LRESULT FUNC_3(LB_DESCR *VAR_3, SHORT VAR_4 )
{
    UINT VAR_5 = 3;

    FUNC_1(VAR_0,0, &VAR_5, 0);


    if ((VAR_4 < 0 && VAR_3->wheel_remain < 0) ||
        (VAR_4 > 0 && VAR_3->wheel_remain > 0))
        VAR_3->wheel_remain += VAR_4;
    else
        VAR_3->wheel_remain = VAR_4;

    if (VAR_3->wheel_remain && VAR_5)
    {
        int VAR_6;
        VAR_5 = FUNC_2((UINT) VAR_3->page_size, VAR_5);
        VAR_6 = VAR_5 * (float)VAR_3->wheel_remain / VAR_2;
        VAR_3->wheel_remain -= VAR_2 * VAR_6 / (int)VAR_5;
        FUNC_0( VAR_3, VAR_3->top_item - VAR_6, VAR_1 );
    }
    return 0;
}
