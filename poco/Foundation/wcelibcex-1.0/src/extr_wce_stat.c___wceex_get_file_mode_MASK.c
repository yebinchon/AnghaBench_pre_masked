
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static unsigned short FUNC_3(const char* VAR_8, int VAR_9)
{
    unsigned short VAR_10;
    unsigned VAR_11;
    const char *VAR_12;

    VAR_11 = VAR_9 & VAR_7;


    if ((VAR_12 = VAR_8)[1] == ':')
        VAR_12 += 2;


    VAR_10 = (unsigned short)
        (((FUNC_0(*VAR_12) && !VAR_12[1]) || (VAR_11 & VAR_0) || !*VAR_12)
        ? VAR_3 | VAR_2 : VAR_4);


    VAR_10 |= (VAR_11 & VAR_1) ? VAR_5 : (VAR_5 | VAR_6);


    if ((VAR_12 = FUNC_2(VAR_8, '.')))
    {
        if (!FUNC_1(VAR_12, ".exe") ||
            !FUNC_1(VAR_12, ".cmd") ||
            !FUNC_1(VAR_12, ".bat") ||
            !FUNC_1(VAR_12, ".com"))
            VAR_10 |= VAR_2;
    }


    VAR_10 |= (VAR_10 & 0700) >> 3;
    VAR_10 |= (VAR_10 & 0700) >> 6;

    return(VAR_10);
}
