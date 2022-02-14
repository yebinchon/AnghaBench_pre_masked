
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int msgused; int hdrsize; unsigned char* hdrbuf; int request_id; TYPE_2__* msglist; } ;
typedef TYPE_3__ conn ;
typedef void* caddr_t ;
struct TYPE_9__ {int malloc_fails; } ;
struct TYPE_7__ {TYPE_1__* msg_iov; } ;
struct TYPE_6__ {int iov_len; void* iov_base; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (unsigned char*,int) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static int FUNC_5(conn *VAR_2) {
    int VAR_3;
    unsigned char *VAR_4;

    FUNC_2(VAR_2 != ((void*)0));

    if (VAR_2->msgused > VAR_2->hdrsize) {
        void *VAR_5;
        if (VAR_2->hdrbuf) {
            VAR_5 = FUNC_4(VAR_2->hdrbuf, VAR_2->msgused * 2 * VAR_0);
        } else {
            VAR_5 = FUNC_3(VAR_2->msgused * 2 * VAR_0);
        }

        if (! VAR_5) {
            FUNC_0();
            VAR_1.malloc_fails++;
            FUNC_1();
            return -1;
        }
        VAR_2->hdrbuf = (unsigned char *)VAR_5;
        VAR_2->hdrsize = VAR_2->msgused * 2;
    }

    VAR_4 = VAR_2->hdrbuf;
    for (VAR_3 = 0; VAR_3 < VAR_2->msgused; VAR_3++) {
        VAR_2->msglist[VAR_3].msg_iov[0].iov_base = (void*)VAR_4;
        VAR_2->msglist[VAR_3].msg_iov[0].iov_len = VAR_0;
        *VAR_4++ = VAR_2->request_id / 256;
        *VAR_4++ = VAR_2->request_id % 256;
        *VAR_4++ = VAR_3 / 256;
        *VAR_4++ = VAR_3 % 256;
        *VAR_4++ = VAR_2->msgused / 256;
        *VAR_4++ = VAR_2->msgused % 256;
        *VAR_4++ = 0;
        *VAR_4++ = 0;
        FUNC_2((void *) VAR_4 == (caddr_t)VAR_2->msglist[VAR_3].msg_iov[0].iov_base + VAR_0);
    }

    return 0;
}
