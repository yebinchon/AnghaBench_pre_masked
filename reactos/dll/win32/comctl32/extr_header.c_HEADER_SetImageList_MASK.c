
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int himl; } ;
typedef int LRESULT ;
typedef int HIMAGELIST ;
typedef TYPE_1__ HEADER_INFO ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static LRESULT
FUNC_1 (HEADER_INFO *VAR_0, HIMAGELIST VAR_1)
{
    HIMAGELIST VAR_2;

    FUNC_0("(himl %p)\n", VAR_1);
    VAR_2 = VAR_0->himl;
    VAR_0->himl = VAR_1;



    return (LRESULT)VAR_2;
}
