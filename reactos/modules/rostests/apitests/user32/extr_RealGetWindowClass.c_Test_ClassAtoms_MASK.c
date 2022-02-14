
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; } ;
typedef TYPE_1__ WNDCLASSW ;
typedef scalar_t__ ATOM ;


 char** VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;

void FUNC_5()
{
    ATOM VAR_1;
    int VAR_2;
    WNDCLASSW VAR_3;


    VAR_1 = FUNC_0(((void*)0), VAR_0[0], &VAR_3);
    if (!VAR_1)
    {
       FUNC_3( "No reference Atom\n" );
       return;
    }

    FUNC_4("First Control Class Atom 0x%x\n",VAR_1);

    for (VAR_2 = 0; VAR_2 < 17; VAR_1++ ,VAR_2++)
    {
        if (FUNC_1(VAR_0[VAR_2],L"\0"))
        {
           ATOM VAR_4 = FUNC_0(((void*)0), VAR_0[VAR_2], &VAR_3);

           if (VAR_4)
           {
              FUNC_2(VAR_4 == VAR_1, "%S class atom did not match %x:%x\n",VAR_0[VAR_2],VAR_4,VAR_1);
              FUNC_2(!FUNC_1(VAR_3.lpszClassName,VAR_0[VAR_2]),"GetClassName returned incorrect name\n");
           }
        }
    }
}
