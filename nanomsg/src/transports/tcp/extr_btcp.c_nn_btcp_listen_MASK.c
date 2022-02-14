
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;
struct nn_btcp {int usock; int ep; } ;
typedef int ss ;
typedef int ipv4only ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nn_btcp*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int*,size_t*) ;
 int FUNC_6 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int *,struct sockaddr*,size_t) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char) ;

__attribute__((used)) static int FUNC_14 (struct nn_btcp *VAR_5)
{
    int VAR_6;
    struct sockaddr_storage VAR_7;
    size_t VAR_8;
    int VAR_9;
    size_t VAR_10;
    const char *VAR_11;
    const char *VAR_12;
    const char *VAR_13;
    uint16_t VAR_14;


    VAR_11 = FUNC_4 (VAR_5->ep);
    FUNC_1 (&VAR_7, 0, sizeof (VAR_7));


    VAR_12 = VAR_11 + FUNC_12 (VAR_11);
    VAR_13 = FUNC_13 (VAR_11, ':');
    if (VAR_13 == ((void*)0)) {
        return -VAR_0;
    }
    ++VAR_13;
    VAR_6 = FUNC_7 (VAR_13, VAR_12 - VAR_13);
    if (VAR_6 <= 0)
        return VAR_6;
    VAR_14 = (uint16_t) VAR_6;


    VAR_10 = sizeof (VAR_9);
    FUNC_5 (VAR_5->ep, VAR_3, VAR_2,
        &VAR_9, &VAR_10);
    FUNC_2 (VAR_10 == sizeof (VAR_9));
    VAR_6 = FUNC_6 (VAR_11, VAR_13 - VAR_11 - 1, VAR_9, &VAR_7, &VAR_8);
    if (VAR_6 < 0) {
        return VAR_6;
    }


    switch (VAR_7.ss_family) {
    case 129:
        ((struct sockaddr_in*) &VAR_7)->sin_port = FUNC_0 (VAR_14);
        VAR_8 = sizeof (struct sockaddr_in);
        break;
    case 128:
        ((struct sockaddr_in6*) &VAR_7)->sin6_port = FUNC_0 (VAR_14);
        VAR_8 = sizeof (struct sockaddr_in6);
        break;
    default:
        FUNC_2 (0);
    }


    VAR_6 = FUNC_10 (&VAR_5->usock, VAR_7.ss_family, VAR_4, 0);
    if (VAR_6 < 0) {
        return VAR_6;
    }

    VAR_6 = FUNC_8 (&VAR_5->usock, (struct sockaddr*) &VAR_7, (size_t) VAR_8);
    if (VAR_6 < 0) {
       FUNC_11 (&VAR_5->usock);
       return VAR_6;
    }

    VAR_6 = FUNC_9 (&VAR_5->usock, VAR_1);
    if (VAR_6 < 0) {
        FUNC_11 (&VAR_5->usock);
        return VAR_6;
    }
    FUNC_3(VAR_5);

    return 0;
}
