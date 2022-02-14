
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpPen ;
typedef int ARGB ;


 int FUNC_0 (int ,float,int ,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_3;
    GpPen *VAR_4 = ((void*)0);

    VAR_3 = FUNC_0((ARGB)0xffff00ff, 10.0f, VAR_2, ((void*)0));
    FUNC_2(VAR_0, VAR_3);
    FUNC_3(VAR_4 == ((void*)0), "Expected pen to be NULL\n");

    VAR_3 = FUNC_0((ARGB)0xffff00ff, 10.0f, VAR_2, &VAR_4);
    FUNC_2(VAR_1, VAR_3);
    FUNC_3(VAR_4 != ((void*)0), "Expected pen to be initialized\n");

    VAR_3 = FUNC_1(((void*)0));
    FUNC_2(VAR_0, VAR_3);

    VAR_3 = FUNC_1(VAR_4);
    FUNC_2(VAR_1, VAR_3);
}
