
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
typedef int buf ;
typedef int WCHAR ;




 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,void*,char*,int) ;
 int * FUNC_2 (char*) ;

__attribute__((used)) static WCHAR *FUNC_3( struct sockaddr_storage *VAR_1 )
{
    char VAR_2[VAR_0];
    void *VAR_3;

    switch (VAR_1->ss_family)
    {
    case 129:
        VAR_3 = &((struct sockaddr_in *)VAR_1)->sin_addr;
        break;
    case 128:
        VAR_3 = &((struct sockaddr_in6 *)VAR_1)->sin6_addr;
        break;
    default:
        FUNC_0("unsupported address family %d\n", VAR_1->ss_family);
        return ((void*)0);
    }
    if (!FUNC_1( VAR_1->ss_family, VAR_3, VAR_2, sizeof(VAR_2) )) return ((void*)0);
    return FUNC_2( VAR_2 );
}
