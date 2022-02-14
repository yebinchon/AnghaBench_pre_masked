
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
typedef int connection ;
struct TYPE_6__ {char* replpreamble; int repldbfd; scalar_t__ repldboff; scalar_t__ repldbsize; int conn; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int stat_net_output_bytes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,char*,int) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,scalar_t__,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*,int,int) ;
 TYPE_2__ VAR_6 ;
 int FUNC_13 (int ,char*,char*) ;
 char* FUNC_14 (int ) ;

void FUNC_15(connection *VAR_7) {
    client *VAR_8 = FUNC_2(VAR_7);
    char VAR_9[VAR_3];
    ssize_t VAR_10, VAR_11;




    if (VAR_8->replpreamble) {
        VAR_10 = FUNC_5(VAR_7,VAR_8->replpreamble,FUNC_11(VAR_8->replpreamble));
        if (VAR_10 == -1) {
            FUNC_13(VAR_1,"Write error sending RDB preamble to replica: %s",
                FUNC_1(VAR_7));
            FUNC_6(VAR_8);
            return;
        }
        VAR_6.stat_net_output_bytes += VAR_10;
        FUNC_12(VAR_8->replpreamble,VAR_10,-1);
        if (FUNC_11(VAR_8->replpreamble) == 0) {
            FUNC_10(VAR_8->replpreamble);
            VAR_8->replpreamble = ((void*)0);

        } else {
            return;
        }
    }


    FUNC_7(VAR_8->repldbfd,VAR_8->repldboff,VAR_4);
    VAR_11 = FUNC_9(VAR_8->repldbfd,VAR_9,VAR_3);
    if (VAR_11 <= 0) {
        FUNC_13(VAR_2,"Read error sending DB to replica: %s",
            (VAR_11 == 0) ? "premature EOF" : FUNC_14(VAR_5));
        FUNC_6(VAR_8);
        return;
    }
    if ((VAR_10 = FUNC_5(VAR_7,VAR_9,VAR_11)) == -1) {
        if (FUNC_3(VAR_7) != VAR_0) {
            FUNC_13(VAR_2,"Write error sending DB to replica: %s",
                FUNC_1(VAR_7));
            FUNC_6(VAR_8);
        }
        return;
    }
    VAR_8->repldboff += VAR_10;
    VAR_6.stat_net_output_bytes += VAR_10;
    if (VAR_8->repldboff == VAR_8->repldbsize) {
        FUNC_0(VAR_8->repldbfd);
        VAR_8->repldbfd = -1;
        FUNC_4(VAR_8->conn,((void*)0));
        FUNC_8(VAR_8);
    }
}
