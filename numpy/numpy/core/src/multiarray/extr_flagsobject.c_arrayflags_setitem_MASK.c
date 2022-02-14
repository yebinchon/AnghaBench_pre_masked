
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayFlagsObject ;


 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_13(PyArrayFlagsObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    char *VAR_4;
    char VAR_5[16];
    int VAR_6;
    if (FUNC_5(VAR_2)) {
        PyObject *VAR_7;
        VAR_7 = FUNC_4(VAR_2);
        VAR_4 = FUNC_0(VAR_7);
        VAR_6 = FUNC_2(VAR_7);
        if (VAR_6 > 16) VAR_6 = 16;
        FUNC_11(VAR_5, VAR_4, VAR_6);
        FUNC_6(VAR_7);
        VAR_4 = VAR_5;
    }
    else if (FUNC_1(VAR_2)) {
        VAR_4 = FUNC_0(VAR_2);
        VAR_6 = FUNC_2(VAR_2);
    }
    else {
        goto fail;
    }
    if (((VAR_6==9) && (FUNC_12(VAR_4, "WRITEABLE", VAR_6) == 0)) ||
        ((VAR_6==1) && (FUNC_12(VAR_4, "W", VAR_6) == 0))) {
        return FUNC_9(VAR_1, VAR_3);
    }
    else if (((VAR_6==7) && (FUNC_12(VAR_4, "ALIGNED", VAR_6) == 0)) ||
             ((VAR_6==1) && (FUNC_12(VAR_4, "A", VAR_6) == 0))) {
        return FUNC_7(VAR_1, VAR_3);
    }
    else if (((VAR_6==12) && (FUNC_12(VAR_4, "UPDATEIFCOPY", VAR_6) == 0)) ||
             ((VAR_6==1) && (FUNC_12(VAR_4, "U", VAR_6) == 0))) {
        return FUNC_8(VAR_1, VAR_3);
    }
    else if (((VAR_6==15) && (FUNC_12(VAR_4, "WRITEBACKIFCOPY", VAR_6) == 0)) ||
             ((VAR_6==1) && (FUNC_12(VAR_4, "X", VAR_6) == 0))) {
        return FUNC_10(VAR_1, VAR_3);
    }

 fail:
    FUNC_3(VAR_0, "Unknown flag");
    return -1;
}
