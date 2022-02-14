
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_TICKET_STATUS ;
typedef int SSL_SESSION ;
typedef int SSL ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



__attribute__((used)) static int FUNC_0(SSL *VAR_4, SSL_SESSION *VAR_5,
                                     const unsigned char *VAR_6,
                                     size_t VAR_7,
                                     SSL_TICKET_STATUS VAR_8,
                                     void *VAR_9)
{
    switch (VAR_8) {
    case 131:
    case 130:
        return VAR_1;
    case 129:
        return VAR_2;
    case 128:
        return VAR_3;
    default:
        break;
    }
    return VAR_0;
}
