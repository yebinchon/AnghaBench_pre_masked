
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_length; int * h_addr_list; } ;
typedef int local ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 struct hostent* FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,TYPE_1__*) ;
 int FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_3, int VAR_4) {
    struct sockaddr_in VAR_5;
    struct hostent *VAR_6;
    int VAR_7;

    FUNC_8(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.sin_family = VAR_0;
    VAR_5.sin_port = FUNC_3(VAR_4);
    if (VAR_3 == 0 || *VAR_3 == 0) {
        VAR_5.sin_addr.s_addr = VAR_1;
    }
    else if (!FUNC_5(VAR_3[0]) ||
        FUNC_4(VAR_3, &VAR_5.sin_addr) == 0)
    {
        if ((VAR_6 = FUNC_2(VAR_3)) != 0) {
            FUNC_7(&VAR_5.sin_addr, VAR_6->h_addr_list[0], VAR_6->h_length);
        }
        else {
            VAR_5.sin_addr.s_addr = VAR_1;
        }
    }
    if ((VAR_7 = FUNC_9(VAR_0, VAR_2, 0)) < 0) {
        return VAR_7;
    }
    if (FUNC_0(VAR_7, (struct sockaddr *) &VAR_5, sizeof(VAR_5)) < 0 ||
        FUNC_6(VAR_7, 5) < 0)
    {
        FUNC_1(VAR_7);
        return -1;
    }
    return VAR_7;
}
