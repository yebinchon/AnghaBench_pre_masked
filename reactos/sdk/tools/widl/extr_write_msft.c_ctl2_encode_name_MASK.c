
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int varflags; int lcid; } ;
struct TYPE_5__ {TYPE_1__ typelib_header; } ;
typedef TYPE_2__ msft_typelib_t ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(
 msft_typelib_t *VAR_0,
 const char *VAR_1,
 char **VAR_2)
{
    int VAR_3;
    static char VAR_4[0x104];
    int VAR_5;
    int VAR_6;

    VAR_3 = FUNC_2(VAR_1);
    FUNC_1(VAR_4 + 4, VAR_1, VAR_3);

    VAR_4[VAR_3 + 4] = 0;


    VAR_6 = FUNC_0(VAR_0->typelib_header.varflags & 0x0f, VAR_0->typelib_header.lcid, VAR_4 + 4);







    VAR_4[0] = VAR_3 & 0xff;
    VAR_4[1] = 0x00;
    VAR_4[2] = VAR_6;
    VAR_4[3] = VAR_6 >> 8;


    for (VAR_5 = (4 - VAR_3) & 3; VAR_5; VAR_5--) VAR_4[VAR_3 + VAR_5 + 3] = 0x57;

    *VAR_2 = VAR_4;

    return (VAR_3 + 7) & ~3;
}
