
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rio ;
typedef int rdbSaveInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,int*,int ,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int FUNC_5(rio *VAR_6, int *VAR_7, rdbSaveInfo *VAR_8) {
    char VAR_9[VAR_4];

    FUNC_3(VAR_3);
    FUNC_0(VAR_9,VAR_4);
    if (VAR_7) *VAR_7 = 0;
    if (FUNC_2(VAR_6,"$EOF:",5) == 0) goto werr;
    if (FUNC_2(VAR_6,VAR_9,VAR_4) == 0) goto werr;
    if (FUNC_2(VAR_6,"\r\n",2) == 0) goto werr;
    if (FUNC_1(VAR_6,VAR_7,VAR_2,VAR_8) == VAR_0) goto werr;
    if (FUNC_2(VAR_6,VAR_9,VAR_4) == 0) goto werr;
    FUNC_4(1);
    return VAR_1;

werr:

    if (VAR_7 && *VAR_7 == 0) *VAR_7 = VAR_5;
    FUNC_4(0);
    return VAR_0;
}
