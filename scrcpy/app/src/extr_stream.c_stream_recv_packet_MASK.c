
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct stream {int socket; } ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ pts; int * data; } ;
typedef TYPE_1__ AVPacket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static bool
FUNC_7(struct stream *VAR_3, AVPacket *VAR_4) {
    uint8_t VAR_5[VAR_1];
    ssize_t VAR_6 = FUNC_6(VAR_3->socket, VAR_5, VAR_1);
    if (VAR_6 < VAR_1) {
        return 0;
    }

    uint64_t VAR_7 = FUNC_5(VAR_5);
    uint32_t VAR_8 = FUNC_4(&VAR_5[8]);
    FUNC_1(VAR_8);

    if (FUNC_2(VAR_4, VAR_8)) {
        FUNC_0("Could not allocate packet");
        return 0;
    }

    VAR_6 = FUNC_6(VAR_3->socket, VAR_4->data, VAR_8);
    if (VAR_6 < VAR_8) {
        FUNC_3(VAR_4);
        return 0;
    }

    VAR_4->pts = VAR_7 != VAR_2 ? VAR_7 : VAR_0;

    return 1;
}
