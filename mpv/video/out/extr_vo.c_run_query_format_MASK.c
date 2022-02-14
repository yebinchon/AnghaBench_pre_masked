
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vo {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* query_format ) (struct vo*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vo*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
    void **VAR_3 = VAR_2;
    struct vo *VAR_4 = VAR_3[0];
    uint8_t *VAR_5 = VAR_3[1];
    for (int VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++)
        VAR_5[VAR_6 - VAR_1] = VAR_4->driver->query_format(VAR_4, VAR_6);
}
