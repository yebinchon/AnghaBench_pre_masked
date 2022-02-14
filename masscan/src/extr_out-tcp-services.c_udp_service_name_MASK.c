
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_name; } ;
typedef int buf ;


 struct servent* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,struct servent*,char*,int,struct servent**) ;
 int FUNC_2 (unsigned short) ;
 char* FUNC_3 (int ) ;
 char const** VAR_0 ;

const char *
FUNC_4(int VAR_1)
{
    if (VAR_0[VAR_1])
        return VAR_0[VAR_1];

    int VAR_2;
    struct servent VAR_3;
    struct servent *VAR_4;
    char VAR_5[2048];

    VAR_2 = FUNC_1(FUNC_2(VAR_1), "udp", &VAR_3,VAR_5, sizeof(VAR_5), &VAR_4);


    if (VAR_2 != 0 || VAR_4 == ((void*)0))
        return "unknown";

    return VAR_0[VAR_1] = FUNC_3(VAR_3.s_name);
}
