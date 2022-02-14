
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 long FUNC_2 (unsigned char*,int,long,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 unsigned char* FUNC_5 (long) ;

int FUNC_6(const char* VAR_2,long* VAR_3,unsigned char** VAR_4)
{
    FILE* VAR_5;
    unsigned char* VAR_6;
    int VAR_7=1;
    VAR_5=FUNC_1(VAR_2, "rb");
    if (VAR_5==((void*)0))
        return 0;

    FUNC_3(VAR_5,0,VAR_0);

    *VAR_3=FUNC_4(VAR_5);
    FUNC_3(VAR_5,0,VAR_1);
    VAR_6=FUNC_5((*VAR_3)+1);
    if (VAR_6==((void*)0))
        VAR_7=0;
    else
    {
        if (FUNC_2(VAR_6, 1, *VAR_3,VAR_5) != (*VAR_3))
            VAR_7=0;
    }
    FUNC_0(VAR_5);
    *VAR_4=VAR_6;
    return VAR_7;
}
