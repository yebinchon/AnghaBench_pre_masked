
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_top_level_parameter {unsigned int annotation_count; int param; int * annotations; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct d3dx_top_level_parameter*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct d3dx_top_level_parameter *VAR_1)
{
    if (VAR_1->annotations)
    {
        unsigned int VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1->annotation_count; ++VAR_2)
            FUNC_3(&VAR_1->annotations[VAR_2], VAR_0, VAR_0);
        FUNC_1(FUNC_0(), 0, VAR_1->annotations);
    }
    FUNC_2(VAR_1);
    FUNC_3(&VAR_1->param, VAR_0, VAR_0);
}
