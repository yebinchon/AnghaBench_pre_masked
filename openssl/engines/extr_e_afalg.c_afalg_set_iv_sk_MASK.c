
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
struct af_alg_iv {unsigned int ivlen; int iv; } ;


 int FUNC_0 (unsigned int const) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cmsghdr*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,unsigned char const*,unsigned int const) ;

__attribute__((used)) static void FUNC_4(struct cmsghdr *VAR_2, const unsigned char *VAR_3,
                            const unsigned int VAR_4)
{
    struct af_alg_iv *VAR_5;

    VAR_2->cmsg_level = VAR_1;
    VAR_2->cmsg_type = VAR_0;
    VAR_2->cmsg_len = FUNC_2(FUNC_0(VAR_4));
    VAR_5 = (struct af_alg_iv *)FUNC_1(VAR_2);
    VAR_5->ivlen = VAR_4;
    FUNC_3(VAR_5->iv, VAR_3, VAR_4);
}
