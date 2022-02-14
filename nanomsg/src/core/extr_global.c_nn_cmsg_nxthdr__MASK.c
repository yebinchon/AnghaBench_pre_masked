
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msghdr {size_t msg_controllen; scalar_t__ msg_control; } ;
struct nn_cmsghdr {int cmsg_len; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

struct nn_cmsghdr *FUNC_4 (const struct nn_msghdr *VAR_1,
    const struct nn_cmsghdr *VAR_2)
{
    char *VAR_3;
    size_t VAR_4;
    struct nn_cmsghdr *VAR_5;
    size_t VAR_6;


    if (FUNC_3 (VAR_1 == ((void*)0)))
        return ((void*)0);


    if (VAR_1->msg_controllen == VAR_0) {
        VAR_3 = *((void**) VAR_1->msg_control);
        VAR_4 = FUNC_2 (VAR_3);
    }
    else {
        VAR_3 = (char*) VAR_1->msg_control;
        VAR_4 = VAR_1->msg_controllen;
    }


    if (FUNC_3 (VAR_4 < FUNC_1 (0)))
        return ((void*)0);



    if (!VAR_2)
        VAR_5 = (struct nn_cmsghdr*) VAR_3;
    else
        VAR_5 = (struct nn_cmsghdr*)
            (((char*) VAR_2) + FUNC_0 (VAR_2->cmsg_len));



    VAR_6 = ((char*) VAR_5) - VAR_3;
    if (VAR_6 + FUNC_1 (0) > VAR_4 ||
          VAR_6 + FUNC_0 (VAR_5->cmsg_len) > VAR_4)
        return ((void*)0);


    return VAR_5;
}
