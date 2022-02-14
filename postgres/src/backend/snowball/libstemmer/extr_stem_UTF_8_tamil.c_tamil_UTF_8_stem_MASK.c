
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int c; scalar_t__* B; } ;


 int FUNC_0 (struct SN_env*) ;
 int FUNC_1 (struct SN_env*) ;
 int FUNC_2 (struct SN_env*) ;
 int FUNC_3 (struct SN_env*) ;
 int FUNC_4 (struct SN_env*) ;
 int FUNC_5 (struct SN_env*) ;
 int FUNC_6 (struct SN_env*) ;
 int FUNC_7 (struct SN_env*) ;
 int FUNC_8 (struct SN_env*) ;
 int FUNC_9 (struct SN_env*) ;
 int FUNC_10 (struct SN_env*) ;

extern int FUNC_11(struct SN_env * VAR_0) {
    VAR_0->B[1] = 0;
    { int VAR_1 = VAR_0->c;
        { int VAR_2 = FUNC_0(VAR_0);
            if (VAR_2 == 0) goto lab0;
            if (VAR_2 < 0) return VAR_2;
        }
    lab0:
        VAR_0->c = VAR_1;
    }
    { int VAR_3 = FUNC_1(VAR_0);
        if (VAR_3 <= 0) return VAR_3;
    }
    { int VAR_4 = VAR_0->c;
        { int VAR_5 = FUNC_6(VAR_0);
            if (VAR_5 == 0) goto lab1;
            if (VAR_5 < 0) return VAR_5;
        }
    lab1:
        VAR_0->c = VAR_4;
    }
    { int VAR_6 = VAR_0->c;
        { int VAR_7 = FUNC_5(VAR_0);
            if (VAR_7 == 0) goto lab2;
            if (VAR_7 < 0) return VAR_7;
        }
    lab2:
        VAR_0->c = VAR_6;
    }
    { int VAR_8 = VAR_0->c;
        { int VAR_9 = FUNC_7(VAR_0);
            if (VAR_9 == 0) goto lab3;
            if (VAR_9 < 0) return VAR_9;
        }
    lab3:
        VAR_0->c = VAR_8;
    }
    { int VAR_10 = VAR_0->c;
        { int VAR_11 = FUNC_9(VAR_0);
            if (VAR_11 == 0) goto lab4;
            if (VAR_11 < 0) return VAR_11;
        }
    lab4:
        VAR_0->c = VAR_10;
    }
    { int VAR_12 = VAR_0->c;
        { int VAR_13 = FUNC_3(VAR_0);
            if (VAR_13 == 0) goto lab5;
            if (VAR_13 < 0) return VAR_13;
        }
    lab5:
        VAR_0->c = VAR_12;
    }
    { int VAR_14 = VAR_0->c;
        { int VAR_15 = FUNC_10(VAR_0);
            if (VAR_15 == 0) goto lab6;
            if (VAR_15 < 0) return VAR_15;
        }
    lab6:
        VAR_0->c = VAR_14;
    }
    { int VAR_16 = VAR_0->c;
        { int VAR_17 = FUNC_4(VAR_0);
            if (VAR_17 == 0) goto lab7;
            if (VAR_17 < 0) return VAR_17;
        }
    lab7:
        VAR_0->c = VAR_16;
    }
    { int VAR_18 = VAR_0->c;
        { int VAR_19 = FUNC_2(VAR_0);
            if (VAR_19 == 0) goto lab8;
            if (VAR_19 < 0) return VAR_19;
        }
    lab8:
        VAR_0->c = VAR_18;
    }
    { int VAR_20 = VAR_0->c;
        { int VAR_21 = FUNC_8(VAR_0);
            if (VAR_21 == 0) goto lab9;
            if (VAR_21 < 0) return VAR_21;
        }
    lab9:
        VAR_0->c = VAR_20;
    }
    return 1;
}
