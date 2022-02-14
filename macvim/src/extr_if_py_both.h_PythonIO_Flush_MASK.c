
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {size_t ga_len; scalar_t__ ga_data; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void)
{
    if (&FUNC_0 != ((void*)0) && VAR_1.ga_len > 0)
    {
 ((char_u *)VAR_1.ga_data)[VAR_1.ga_len] = VAR_0;
 FUNC_0((char_u *)VAR_1.ga_data);
    }
    VAR_1.ga_len = 0;
}
