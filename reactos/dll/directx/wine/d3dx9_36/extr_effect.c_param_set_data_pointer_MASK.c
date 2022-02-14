
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int element_count; unsigned int member_count; unsigned char* data; int bytes; struct d3dx_parameter* members; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d3dx_parameter*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct d3dx_parameter *VAR_1, unsigned char *VAR_2, BOOL VAR_3, BOOL VAR_4)
{
    unsigned char *VAR_5 = VAR_2;
    unsigned int VAR_6, VAR_7;

    VAR_7 = VAR_1->element_count ? VAR_1->element_count : VAR_1->member_count;
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        FUNC_1(&VAR_1->members[VAR_6], VAR_5, VAR_0, VAR_4);
        if (VAR_2)
            VAR_5 += VAR_1->members[VAR_6].bytes;
    }
    if (VAR_4)
        FUNC_0(VAR_1, VAR_3);
    VAR_1->data = VAR_2;
}
