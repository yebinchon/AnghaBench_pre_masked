
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int softspace; } ;
typedef int PyObject ;
typedef TYPE_1__ OutputObject ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(OutputObject *VAR_2, char *VAR_3, PyObject *VAR_4)
{
    if (VAR_4 == ((void*)0))
    {
 FUNC_3(VAR_1,
  FUNC_0("can't delete OutputObject attributes"));
 return -1;
    }

    if (FUNC_4(VAR_3, "softspace") == 0)
    {
 if (FUNC_1(VAR_4, &(VAR_2->softspace), VAR_0))
     return -1;
 return 0;
    }

    FUNC_2(VAR_1, FUNC_0("invalid attribute: %s"), VAR_3);
    return -1;
}
