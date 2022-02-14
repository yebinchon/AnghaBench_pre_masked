
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_port; TYPE_1__ sin_addr; int member_0; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int fd; scalar_t__ port; int ip; } ;
struct Output {unsigned int is_append; scalar_t__ format; int is_virgin_file; TYPE_3__* funcs; TYPE_2__ redis; } ;
typedef int sin ;
typedef int ptrdiff_t ;
struct TYPE_6__ {int (* open ) (struct Output*,int *) ;} ;
typedef int SOCKET ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned short) ;
 int VAR_3 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int **,char const*,unsigned int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_9 (struct Output*,int *) ;

__attribute__((used)) static FILE *
FUNC_10(struct Output *VAR_6, const char *VAR_7)
{
    FILE *VAR_8 = 0;
    unsigned VAR_9 = VAR_6->is_append;
    int VAR_10;




    if (VAR_6->format == VAR_1) {
        ptrdiff_t VAR_11 = VAR_6->redis.fd;
        if (VAR_11 < 1) {
            struct sockaddr_in VAR_12 = {0};
            VAR_11 = (ptrdiff_t)FUNC_8(VAR_0, VAR_2, 0);
            if (VAR_11 == -1) {
                FUNC_0(0, "redis: socket() failed to create socket\n");
                FUNC_2(1);
            }
            VAR_12.sin_addr.s_addr = FUNC_4(VAR_6->redis.ip);
            VAR_12.sin_port = FUNC_5((unsigned short)VAR_6->redis.port);
            VAR_12.sin_family = VAR_0;
            VAR_10 = FUNC_1((SOCKET)VAR_11, (struct sockaddr*)&VAR_12, sizeof(VAR_12));
            if (VAR_10 != 0) {
                FUNC_0(0, "redis: connect() failed\n");
                FUNC_6("connect");
            }
            VAR_6->redis.fd = VAR_11;
        }
        VAR_6->funcs->open(VAR_6, (FILE*)VAR_11);

        return (FILE*)VAR_11;
    }


    if (VAR_7[0] == '-' && VAR_7[1] == '\0')
        VAR_8 = VAR_5;




    if (VAR_8 == 0) {
        VAR_10 = FUNC_7(&VAR_8, VAR_7, VAR_9);
        if (VAR_10 != 0 || VAR_8 == ((void*)0)) {
            FUNC_3(VAR_4, "out: could not open file for %s\n",
                    VAR_9?"appending":"writing");
            FUNC_6(VAR_7);
            VAR_3 = 1;
            return ((void*)0);
        }
    }





    VAR_6->is_virgin_file = 1;

    return VAR_8;
}
