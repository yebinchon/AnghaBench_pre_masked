
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 char const* FUNC_2 (char*,char const*,...) ;

__attribute__((used)) static const char *
FUNC_3(const unsigned char *VAR_0, int VAR_1)
{
    const char * VAR_2;
    char VAR_3[80];
    int VAR_4=-1;
    VAR_3[0]='\0';
    VAR_2 = FUNC_2("%s","");
    while (--VAR_1 >= 0)
    {
        if (VAR_4++ % 20 == 19)
        {
            VAR_2 = FUNC_2("%s%s",VAR_2,VAR_3);
            VAR_3[0]='\0';
        }
        FUNC_0(VAR_3+FUNC_1(VAR_3),"%s%02x", VAR_4 ? "," : "", *VAR_0++);
    }
    return FUNC_2("%s%s",VAR_2,VAR_3);
}
