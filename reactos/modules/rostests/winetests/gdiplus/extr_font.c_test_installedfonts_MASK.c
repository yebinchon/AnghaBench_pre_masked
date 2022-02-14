
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpFontCollection ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3 (void)
{
    GpStatus VAR_2;
    GpFontCollection* VAR_3=((void*)0);

    VAR_2 = FUNC_0(((void*)0));
    FUNC_1 (VAR_0, VAR_2);

    VAR_2 = FUNC_0(&VAR_3);
    FUNC_1 (VAR_1, VAR_2);
    FUNC_2 (VAR_3 != ((void*)0), "got NULL font collection\n");
}
