
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_3__ {int from; int opt_type; scalar_t__ (* Check ) (int ) ;} ;
typedef int PyObject ;
typedef TYPE_1__ OptionsObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (long) ;
 int * VAR_3 ;
 int FUNC_6 (int *) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__* FUNC_8 (int *,int **) ;
 int FUNC_9 (scalar_t__*,long*,scalar_t__**,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__*) ;

__attribute__((used)) static PyObject *
FUNC_12(OptionsObject *VAR_11, PyObject *VAR_12)
{
    char_u *VAR_13;
    int VAR_14;
    long VAR_15;
    char_u *VAR_16;
    PyObject *VAR_17;

    if (VAR_11->Check(VAR_11->from))
 return ((void*)0);

    if (!(VAR_13 = FUNC_8(VAR_12, &VAR_17)))
 return ((void*)0);

    if (*VAR_13 == VAR_0)
    {
 VAR_6;
 FUNC_7(VAR_17);
 return ((void*)0);
    }

    VAR_14 = FUNC_9(VAR_13, &VAR_15, &VAR_16,
        VAR_11->opt_type, VAR_11->from);

    FUNC_7(VAR_17);

    if (VAR_14 == 0)
    {
 FUNC_4(VAR_1, VAR_12);
 return ((void*)0);
    }

    if (VAR_14 & VAR_10)
    {
 FUNC_6(VAR_4);
 return VAR_4;
    }
    else if (VAR_14 & VAR_7)
    {
 PyObject *VAR_18;
 VAR_18 = VAR_15 ? VAR_5 : VAR_3;
 FUNC_6(VAR_18);
 return VAR_18;
    }
    else if (VAR_14 & VAR_8)
 return FUNC_5(VAR_15);
    else if (VAR_14 & VAR_9)
    {
 if (VAR_16)
 {
     PyObject *VAR_19 = FUNC_1((char *)VAR_16);
     FUNC_11(VAR_16);
     return VAR_19;
 }
 else
 {
     FUNC_2(VAR_2,
      FUNC_0("unable to get option value"));
     return ((void*)0);
 }
    }
    else
    {
 FUNC_3(FUNC_0("internal error: unknown option type"));
 return ((void*)0);
    }
}
