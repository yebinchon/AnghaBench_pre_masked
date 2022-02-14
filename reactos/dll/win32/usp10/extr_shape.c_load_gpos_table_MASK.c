
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static VOID *FUNC_4(HDC VAR_1)
{
    VOID* VAR_2 = ((void*)0);
    int VAR_3 = FUNC_0(VAR_1, FUNC_1('G', 'P', 'O', 'S'), 0, ((void*)0), 0);
    if (VAR_3 != VAR_0)
    {
        VAR_2 = FUNC_3(VAR_3);
        FUNC_0(VAR_1, FUNC_1('G', 'P', 'O', 'S'), 0, VAR_2, VAR_3);
        FUNC_2("Loaded GPOS table of %i bytes\n",VAR_3);
    }
    return VAR_2;
}
