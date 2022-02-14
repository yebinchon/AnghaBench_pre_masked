
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,int,int,int) ;

__attribute__((used)) static const char *FUNC_2( DWORD VAR_0 )
{
    static char VAR_1[40];

    VAR_0 = FUNC_0(VAR_0);
    FUNC_1( VAR_1, "%u.%u.%u.%u", (VAR_0 >> 24) & 0xff, (VAR_0 >> 16) & 0xff, (VAR_0 >> 8) & 0xff, VAR_0 & 0xff );
    return VAR_1;
}
