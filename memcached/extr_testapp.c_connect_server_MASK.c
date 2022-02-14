
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {int sock; int write; int read; int * ssl; int * ssl_ctx; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (struct addrinfo*) ;
 struct addrinfo* FUNC_12 (char const*,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_14 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct conn *FUNC_15(const char *VAR_11, in_port_t VAR_12,
                            bool VAR_13, const bool VAR_14)
{
    struct conn *VAR_15;
    if (!(VAR_15 = (struct conn *)FUNC_6(1, sizeof(struct conn)))) {
        FUNC_10(VAR_8, "Failed to allocate the client connection: %s\n",
                FUNC_14(VAR_5));
        return ((void*)0);
    }

    struct addrinfo *VAR_16 = FUNC_12(VAR_11, VAR_12);
    int VAR_17 = -1;
    if (VAR_16 != ((void*)0)) {
       if ((VAR_17 = FUNC_13(VAR_16->ai_family, VAR_16->ai_socktype,
                          VAR_16->ai_protocol)) != -1) {
          if (FUNC_8(VAR_17, VAR_16->ai_addr, VAR_16->ai_addrlen) == -1) {
             FUNC_10(VAR_8, "Failed to connect socket: %s\n",
                     FUNC_14(VAR_5));
             FUNC_7(VAR_17);
             VAR_17 = -1;
          } else if (VAR_13) {
              int VAR_18 = FUNC_9(VAR_17, VAR_0, 0);
              if (VAR_18 < 0 || FUNC_9(VAR_17, VAR_1, VAR_18 | VAR_2) < 0) {
                  FUNC_10(VAR_8, "Failed to enable nonblocking mode: %s\n",
                          FUNC_14(VAR_5));
                  FUNC_7(VAR_17);
                  VAR_17 = -1;
              }
          }
       } else {
          FUNC_10(VAR_8, "Failed to create socket: %s\n", FUNC_14(VAR_5));
       }

       FUNC_11(VAR_16);
    }
    VAR_15->sock = VAR_17;
    {
        VAR_15->read = VAR_9;
        VAR_15->write = VAR_10;
    }
    return VAR_15;
}
