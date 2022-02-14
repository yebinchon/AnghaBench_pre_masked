
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {int l; int c; int lb; char* p; } ;


 int FUNC_0 (struct SN_env*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct SN_env*,int ,int,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_2(struct SN_env * VAR_10) {
    { int VAR_11 = VAR_10->l - VAR_10->c;
        if (FUNC_1(VAR_10, VAR_0, 97, 305, 1) < 0) return 0;
        { int VAR_12 = VAR_10->l - VAR_10->c; (void)VAR_12;
            if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'a') goto lab1;
            VAR_10->c--;
            if (FUNC_1(VAR_10, VAR_1, 97, 305, 1) < 0) goto lab1;
            goto lab0;
        lab1:
            VAR_10->c = VAR_10->l - VAR_12;
            if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'e') goto lab2;
            VAR_10->c--;
            if (FUNC_1(VAR_10, VAR_2, 101, 252, 1) < 0) goto lab2;
            goto lab0;
        lab2:
            VAR_10->c = VAR_10->l - VAR_12;
            if (!(FUNC_0(VAR_10, 2, VAR_7))) goto lab3;
            if (FUNC_1(VAR_10, VAR_3, 97, 305, 1) < 0) goto lab3;
            goto lab0;
        lab3:
            VAR_10->c = VAR_10->l - VAR_12;
            if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'i') goto lab4;
            VAR_10->c--;
            if (FUNC_1(VAR_10, VAR_4, 101, 105, 1) < 0) goto lab4;
            goto lab0;
        lab4:
            VAR_10->c = VAR_10->l - VAR_12;
            if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'o') goto lab5;
            VAR_10->c--;
            if (FUNC_1(VAR_10, VAR_5, 111, 117, 1) < 0) goto lab5;
            goto lab0;
        lab5:
            VAR_10->c = VAR_10->l - VAR_12;
            if (!(FUNC_0(VAR_10, 2, VAR_8))) goto lab6;
            if (FUNC_1(VAR_10, VAR_6, 246, 252, 1) < 0) goto lab6;
            goto lab0;
        lab6:
            VAR_10->c = VAR_10->l - VAR_12;
            if (VAR_10->c <= VAR_10->lb || VAR_10->p[VAR_10->c - 1] != 'u') goto lab7;
            VAR_10->c--;
            if (FUNC_1(VAR_10, VAR_5, 111, 117, 1) < 0) goto lab7;
            goto lab0;
        lab7:
            VAR_10->c = VAR_10->l - VAR_12;
            if (!(FUNC_0(VAR_10, 2, VAR_9))) return 0;
            if (FUNC_1(VAR_10, VAR_6, 246, 252, 1) < 0) return 0;
        }
    lab0:
        VAR_10->c = VAR_10->l - VAR_11;
    }
    return 1;
}
