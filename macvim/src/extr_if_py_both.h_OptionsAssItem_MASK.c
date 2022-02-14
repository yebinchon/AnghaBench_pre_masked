
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_3__ {scalar_t__ opt_type; int from; scalar_t__ (* Check ) (int ) ;} ;
typedef int PyObject ;
typedef TYPE_1__ OptionsObject ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,long*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__* FUNC_6 (int *,int **) ;
 int FUNC_7 (scalar_t__*,int *,int *,scalar_t__,int ) ;
 int FUNC_8 (scalar_t__*,int,scalar_t__*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_11(OptionsObject *VAR_11, PyObject *VAR_12, PyObject *VAR_13)
{
    char_u *VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17 = 0;
    PyObject *VAR_18;

    if (VAR_11->Check(VAR_11->from))
 return -1;

    if (!(VAR_14 = FUNC_6(VAR_12, &VAR_18)))
 return -1;

    if (*VAR_14 == VAR_0)
    {
 VAR_6;
 FUNC_5(VAR_18);
 return -1;
    }

    VAR_15 = FUNC_7(VAR_14, ((void*)0), ((void*)0),
        VAR_11->opt_type, VAR_11->from);

    if (VAR_15 == 0)
    {
 FUNC_3(VAR_4, VAR_12);
 FUNC_5(VAR_18);
 return -1;
    }

    if (VAR_13 == ((void*)0))
    {
 if (VAR_11->opt_type == VAR_10)
 {
     FUNC_2(VAR_5,
      FUNC_0("unable to unset global option %s"), VAR_14);
     FUNC_5(VAR_18);
     return -1;
 }
 else if (!(VAR_15 & VAR_8))
 {
     FUNC_2(VAR_5,
      FUNC_0("unable to unset option %s "
         "which does not have global value"), VAR_14);
     FUNC_5(VAR_18);
     return -1;
 }
 else
 {
     FUNC_10(VAR_14, VAR_11->from);
     FUNC_5(VAR_18);
     return 0;
 }
    }

    VAR_16 = (VAR_11->opt_type ? VAR_3 : VAR_2);

    if (VAR_15 & VAR_7)
    {
 int VAR_19 = FUNC_4(VAR_13);

 if (VAR_19 == -1)
     VAR_17 = -1;
 else
     VAR_17 = FUNC_8(VAR_14, VAR_19, ((void*)0),
        VAR_16, VAR_11->opt_type, VAR_11->from);
    }
    else if (VAR_15 & VAR_9)
    {
 long VAR_20;

 if (FUNC_1(VAR_13, &VAR_20, VAR_1))
 {
     FUNC_5(VAR_18);
     return -1;
 }

 VAR_17 = FUNC_8(VAR_14, (int) VAR_20, ((void*)0), VAR_16,
    VAR_11->opt_type, VAR_11->from);
    }
    else
    {
 char_u *VAR_21;
 PyObject *VAR_22;

 if ((VAR_21 = FUNC_6(VAR_13, &VAR_22)))
 {
     VAR_17 = FUNC_8(VAR_14, 0, VAR_21, VAR_16,
        VAR_11->opt_type, VAR_11->from);
     FUNC_5(VAR_22);
 }
 else
     VAR_17 = -1;
    }

    FUNC_5(VAR_18);

    return VAR_17;
}
