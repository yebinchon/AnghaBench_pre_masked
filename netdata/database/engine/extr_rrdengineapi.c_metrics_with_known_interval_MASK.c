
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdeng_page_descr {scalar_t__ start_time; scalar_t__ end_time; int page_length; } ;
typedef int storage_number ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct rrdeng_page_descr *VAR_1)
{
    unsigned VAR_2;

    if (FUNC_1(VAR_0 == VAR_1->start_time || VAR_0 == VAR_1->end_time))
        return 0;
    VAR_2 = VAR_1->page_length / sizeof(storage_number);
    if (FUNC_0(VAR_2 > 1)) {
        return 1;
    }
    return 0;
}
