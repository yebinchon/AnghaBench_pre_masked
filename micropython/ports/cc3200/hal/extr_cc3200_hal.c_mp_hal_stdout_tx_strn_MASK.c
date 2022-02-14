
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int * write; int stream_o; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*,size_t) ;
 int FUNC_5 (int ,char const*,size_t) ;

void FUNC_6(const char *VAR_3, size_t VAR_4) {
    if (FUNC_0(VAR_1)) {
        if (FUNC_2(FUNC_0(VAR_1)->stream_o, &VAR_2)) {
            FUNC_5(FUNC_0(VAR_1)->stream_o, VAR_3, VAR_4);
        } else {
            FUNC_0(VAR_1)->write[2] = FUNC_3(&VAR_0, (const byte *)VAR_3, VAR_4);
            FUNC_1(1, 0, FUNC_0(VAR_1)->write);
        }
    }

    FUNC_4(VAR_3, VAR_4);
}
