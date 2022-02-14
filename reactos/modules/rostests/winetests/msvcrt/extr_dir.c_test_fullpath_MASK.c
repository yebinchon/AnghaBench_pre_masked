
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    char VAR_4[VAR_2];
    char VAR_5[VAR_2];
    char VAR_6[VAR_2];
    char VAR_7[VAR_2];
    char VAR_8[VAR_2];
    char VAR_9[VAR_2];
    char *VAR_10;
    BOOL VAR_11,VAR_12,VAR_13;

    VAR_12=VAR_13=VAR_3;
    FUNC_1(VAR_2, VAR_6);
    FUNC_3(VAR_2,VAR_5);
    FUNC_12(VAR_7,VAR_5);
    FUNC_10(VAR_7,"msvcrt-test\\");

    VAR_11 = FUNC_0(VAR_7,((void*)0));
    if (!VAR_11 && FUNC_2()==VAR_0)
        VAR_12=VAR_1;

    FUNC_12(VAR_8,VAR_7);
    FUNC_10(VAR_8,"nextlevel\\");
    VAR_11 = FUNC_0(VAR_8,((void*)0));
    if (!VAR_11 && FUNC_2()==VAR_0)
        VAR_13=VAR_1;
    FUNC_5(VAR_8);

    FUNC_9(FUNC_6(VAR_4,"test", VAR_2)!=((void*)0),"_fullpath failed\n");
    FUNC_12(VAR_9,VAR_8);
    FUNC_10(VAR_9,"test");
    FUNC_9(FUNC_11(VAR_4,VAR_9)==0,"Invalid Path returned %s\n",VAR_4);
    FUNC_9(FUNC_6(VAR_4,"\\test", VAR_2)!=((void*)0),"_fullpath failed\n");
    FUNC_8(VAR_9,VAR_8,3);
    VAR_9[3]=0;
    FUNC_10(VAR_9,"test");
    FUNC_9(FUNC_11(VAR_4,VAR_9)==0,"Invalid Path returned %s\n",VAR_4);
    FUNC_9(FUNC_6(VAR_4,"..\\test", VAR_2)!=((void*)0),"_fullpath failed\n");
    FUNC_12(VAR_9,VAR_7);
    FUNC_10(VAR_9,"test");
    FUNC_9(FUNC_11(VAR_4,VAR_9)==0,"Invalid Path returned %s\n",VAR_4);
    FUNC_9(FUNC_6(VAR_4,"..\\test", 10)==((void*)0),"_fullpath failed to generate error\n");

    VAR_10 = FUNC_6(((void*)0),"test", 0);
    FUNC_9(VAR_10!=((void*)0),"No path returned\n");
    FUNC_12(VAR_9,VAR_8);
    FUNC_10(VAR_9,"test");
    FUNC_9(FUNC_11(VAR_10,VAR_9)==0,"Invalid Path returned %s\n",VAR_10);
    FUNC_7(VAR_10);

    FUNC_5(VAR_6);
    if (VAR_13)
        FUNC_4(VAR_8);
    if (VAR_12)
        FUNC_4(VAR_7);
}
