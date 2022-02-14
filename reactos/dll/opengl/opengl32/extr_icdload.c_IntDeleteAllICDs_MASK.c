
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ICD_Data {int hModule; struct ICD_Data* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,struct ICD_Data*) ;
 struct ICD_Data* VAR_0 ;
 int VAR_1 ;

void FUNC_4(void)
{
    struct ICD_Data* VAR_2;

    FUNC_0(&VAR_1);

    while (VAR_0 != ((void*)0))
    {
        VAR_2 = VAR_0;
        VAR_0 = VAR_2->next;

        FUNC_1(VAR_2->hModule);
        FUNC_3(FUNC_2(), 0, VAR_2);
    }
}
