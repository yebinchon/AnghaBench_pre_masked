
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* batch; size_t batch_len; size_t batch_pos; void* pfd; } ;
struct nn_usock {TYPE_1__ in; int s; } ;
struct msghdr {int msg_iovlen; unsigned char* msg_control; int msg_controllen; unsigned char* msg_accrights; int msg_accrightslen; struct iovec* msg_iov; } ;
struct iovec {unsigned char* iov_base; size_t iov_len; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef scalar_t__ ssize_t ;
typedef int hdr ;
typedef int fd ;
typedef int ctrl ;


 unsigned char* FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (void*,unsigned char*,size_t) ;
 int FUNC_5 (struct msghdr*,int ,int) ;
 unsigned char* FUNC_6 (size_t,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_12 (struct nn_usock *VAR_7, void *VAR_8, size_t *VAR_9)
{
    size_t VAR_10;
    size_t VAR_11;
    ssize_t VAR_12;
    struct iovec VAR_13;
    struct msghdr VAR_14;
    unsigned char VAR_15 [256];



    int VAR_16;




    if (FUNC_10 (!VAR_7->in.batch)) {
        VAR_7->in.batch = FUNC_6 (VAR_3, "AIO batch buffer");
        FUNC_3 (VAR_7->in.batch);
    }


    VAR_11 = *VAR_9;
    VAR_10 = VAR_7->in.batch_len - VAR_7->in.batch_pos;
    if (VAR_10) {
        if (VAR_10 > VAR_11)
            VAR_10 = VAR_11;
        FUNC_4 (VAR_8, VAR_7->in.batch + VAR_7->in.batch_pos, VAR_10);
        VAR_7->in.batch_pos += VAR_10;
        VAR_8 = ((char*) VAR_8) + VAR_10;
        VAR_11 -= VAR_10;
        if (!VAR_11)
            return 0;
    }



    if (VAR_11 > VAR_3) {
        VAR_13.iov_base = VAR_8;
        VAR_13.iov_len = VAR_11;
    }
    else {
        VAR_13.iov_base = VAR_7->in.batch;
        VAR_13.iov_len = VAR_3;
    }
    FUNC_5 (&VAR_14, 0, sizeof (VAR_14));
    VAR_14.msg_iov = &VAR_13;
    VAR_14.msg_iovlen = 1;




    *((int*) VAR_15) = -1;
    VAR_14.msg_accrights = VAR_15;
    VAR_14.msg_accrightslen = sizeof (int);

    VAR_12 = FUNC_11 (VAR_7->s, &VAR_14, 0);


    if (FUNC_10 (VAR_12 <= 0)) {

        if (FUNC_10 (VAR_12 == 0))
            return -VAR_1;


        if (FUNC_9 (VAR_6 == VAR_0 || VAR_6 == VAR_2))
            VAR_12 = 0;
        else {


            return -VAR_1;
        }
    }


    if (VAR_12 > 0) {
        if (VAR_14.msg_accrightslen > 0) {
            FUNC_7 (VAR_14.msg_accrightslen == sizeof (int));
            if (VAR_7->in.pfd) {
                FUNC_4 (VAR_7->in.pfd, VAR_14.msg_accrights,
                    sizeof (*VAR_7->in.pfd));
                VAR_7->in.pfd = ((void*)0);
            }
            else {
                FUNC_4 (&VAR_16, VAR_14.msg_accrights, sizeof (VAR_16));
                FUNC_8 (VAR_16);
            }
        }

    }



    if (VAR_11 > VAR_3) {
        VAR_11 -= VAR_12;
        *VAR_9 -= VAR_11;
        return 0;
    }



    VAR_7->in.batch_len = VAR_12;
    VAR_7->in.batch_pos = 0;
    if (VAR_12) {
        VAR_10 = VAR_12 > (ssize_t)VAR_11 ? VAR_11 : (size_t)VAR_12;
        FUNC_4 (VAR_8, VAR_7->in.batch, VAR_10);
        VAR_11 -= VAR_10;
        VAR_7->in.batch_pos += VAR_10;
    }

    *VAR_9 -= VAR_11;
    return 0;
}
