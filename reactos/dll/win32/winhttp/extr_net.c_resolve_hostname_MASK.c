
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ai_family; int ai_addrlen; int ai_addr; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; int sin_family; struct sockaddr_storage sin_addr; } ;
struct hostent {int h_addrtype; int h_length; int h_addr; } ;
struct addrinfo {int ai_family; int ai_addrlen; int ai_addr; } ;
typedef int WCHAR ;
typedef int INTERNET_PORT ;
typedef int DWORD ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct sockaddr_storage*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int *,struct sockaddr_storage*,struct sockaddr_storage**) ;
 struct hostent* FUNC_7 (char*) ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct sockaddr_storage*,int ,int ) ;
 int FUNC_11 (struct sockaddr_storage*,int ,int) ;
 char* FUNC_12 (int const*) ;

__attribute__((used)) static DWORD FUNC_13( const WCHAR *VAR_5, INTERNET_PORT VAR_6, struct sockaddr_storage *VAR_7 )
{
    char *VAR_8;




    struct hostent *VAR_9;
    struct sockaddr_in *VAR_10 = (struct sockaddr_in *)VAR_7;


    if (!(VAR_8 = FUNC_12( VAR_5 ))) return VAR_0;
    FUNC_0( &VAR_3 );

    VAR_9 = FUNC_7( VAR_8 );
    FUNC_8( VAR_8 );
    if (!VAR_9)
    {
        FUNC_2("failed to get address of %s (%d)\n", FUNC_3(VAR_5), VAR_4);
        FUNC_1( &VAR_3 );
        return VAR_2;
    }
    FUNC_11( VAR_7, 0, sizeof(struct sockaddr_in) );
    FUNC_10( &VAR_10->sin_addr, VAR_9->h_addr, VAR_9->h_length );
    VAR_10->sin_family = VAR_9->h_addrtype;
    VAR_10->sin_port = FUNC_9( VAR_6 );

    FUNC_1( &VAR_3 );
    return VAR_1;

}
