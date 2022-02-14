
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msxmlsupported_data_t {int * supported; int ** ifaces; int const* clsid; } ;
typedef int * REFIID ;
typedef int GUID ;
typedef int BOOL ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 struct msxmlsupported_data_t* VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(const GUID *VAR_2, REFIID VAR_3)
{
    const struct msxmlsupported_data_t *VAR_4 = VAR_1;
    while (VAR_4->clsid)
    {
        if (VAR_4->clsid == VAR_2)
        {
            int VAR_5;

            for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->ifaces) && VAR_4->ifaces[VAR_5] != ((void*)0); VAR_5++)
                if (VAR_4->ifaces[VAR_5] == VAR_3) return VAR_4->supported[VAR_5];
        }

        VAR_4++;
    }
    return VAR_0;
}
