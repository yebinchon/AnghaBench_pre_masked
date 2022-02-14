
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shortbuf ;
typedef int buf ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (char*,char*,char const*,char const*,char const*) ;
 size_t FUNC_7 (char const*) ;
 char FUNC_8 (char) ;

__attribute__((used)) static void FUNC_9(const char *VAR_5, const char *VAR_6,
                               const char *VAR_7)
{
    char VAR_8[VAR_3], VAR_9[VAR_3];
    HANDLE VAR_10;
    size_t VAR_11;

    FUNC_4(FUNC_7(VAR_5) + FUNC_7(VAR_6) + FUNC_7(VAR_7) + 2 < sizeof(VAR_8));
    FUNC_6(VAR_8,"%s\\%s\\%s",VAR_5,VAR_6,VAR_7);
    FUNC_3(VAR_8,VAR_9,sizeof(VAR_9));
    VAR_10 = FUNC_1(VAR_9,VAR_0|VAR_1,0,((void*)0),VAR_4,0,((void*)0));
    FUNC_5(VAR_10!=VAR_2,"CreateFileA failed (%d)\n",FUNC_2());
    FUNC_0(VAR_10);

    for(VAR_11=0;VAR_11<FUNC_7(VAR_9);VAR_11++)
        if (VAR_11 % 2)
            VAR_9[VAR_11] = FUNC_8(VAR_9[VAR_11]);
    VAR_10 = FUNC_1(VAR_9,VAR_0|VAR_1,0,((void*)0),VAR_4,0,((void*)0));
    FUNC_5(VAR_10!=VAR_2,"CreateFileA failed (%d)\n",FUNC_2());
    FUNC_0(VAR_10);
}
