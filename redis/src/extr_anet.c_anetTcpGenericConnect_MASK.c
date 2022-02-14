
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; struct addrinfo* ai_next; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int portstr ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct addrinfo*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(char *VAR_8, const char *VAR_9, int VAR_10,
                                 const char *VAR_11, int VAR_12)
{
    int VAR_13 = VAR_3, VAR_14;
    char VAR_15[6];
    struct addrinfo VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;

    FUNC_10(VAR_15,sizeof(VAR_15),"%d",VAR_10);
    FUNC_9(&VAR_16,0,sizeof(VAR_16));
    VAR_16.ai_family = VAR_0;
    VAR_16.ai_socktype = VAR_6;

    if ((VAR_14 = FUNC_8(VAR_9,VAR_15,&VAR_16,&VAR_17)) != 0) {
        FUNC_1(VAR_8, "%s", FUNC_7(VAR_14));
        return VAR_3;
    }
    for (VAR_19 = VAR_17; VAR_19 != ((void*)0); VAR_19 = VAR_19->ai_next) {



        if ((VAR_13 = FUNC_11(VAR_19->ai_family,VAR_19->ai_socktype,VAR_19->ai_protocol)) == -1)
            continue;
        if (FUNC_2(VAR_8,VAR_13) == VAR_3) goto error;
        if (VAR_12 & VAR_2 && FUNC_0(VAR_8,VAR_13) != VAR_4)
            goto error;
        if (VAR_11) {
            int VAR_21 = 0;

            if ((VAR_14 = FUNC_8(VAR_11, ((void*)0), &VAR_16, &VAR_18)) != 0)
            {
                FUNC_1(VAR_8, "%s", FUNC_7(VAR_14));
                goto error;
            }
            for (VAR_20 = VAR_18; VAR_20 != ((void*)0); VAR_20 = VAR_20->ai_next) {
                if (FUNC_3(VAR_13,VAR_20->ai_addr,VAR_20->ai_addrlen) != -1) {
                    VAR_21 = 1;
                    break;
                }
            }
            FUNC_6(VAR_18);
            if (!VAR_21) {
                FUNC_1(VAR_8, "bind: %s", FUNC_12(VAR_7));
                goto error;
            }
        }
        if (FUNC_5(VAR_13,VAR_19->ai_addr,VAR_19->ai_addrlen) == -1) {


            if (VAR_7 == VAR_5 && VAR_12 & VAR_2)
                goto end;
            FUNC_4(VAR_13);
            VAR_13 = VAR_3;
            continue;
        }



        goto end;
    }
    if (VAR_19 == ((void*)0))
        FUNC_1(VAR_8, "creating socket: %s", FUNC_12(VAR_7));

error:
    if (VAR_13 != VAR_3) {
        FUNC_4(VAR_13);
        VAR_13 = VAR_3;
    }

end:
    FUNC_6(VAR_17);



    if (VAR_13 == VAR_3 && VAR_11 && (VAR_12 & VAR_1)) {
        return FUNC_13(VAR_8,VAR_9,VAR_10,((void*)0),VAR_12);
    } else {
        return VAR_13;
    }
}
