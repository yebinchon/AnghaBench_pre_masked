
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int svm_port; } ;
struct TYPE_7__ {int sin6_port; } ;
struct TYPE_6__ {int sin_port; } ;
struct TYPE_5__ {int sa_family; } ;
union sockaddr_union {TYPE_4__ vm; TYPE_3__ in6; TYPE_2__ in; TYPE_1__ sa; } ;
struct sockaddr {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (union sockaddr_union*) ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(const struct sockaddr *VAR_1, unsigned *VAR_2) {
        union sockaddr_union *VAR_3 = (union sockaddr_union*) VAR_1;



        FUNC_0(VAR_3);

        switch (VAR_3->sa.sa_family) {

        case 130:
                *VAR_2 = FUNC_1(VAR_3->in.sin_port);
                return 0;

        case 129:
                *VAR_2 = FUNC_1(VAR_3->in6.sin6_port);
                return 0;

        case 128:
                *VAR_2 = VAR_3->vm.svm_port;
                return 0;

        default:
                return -VAR_0;
        }
}
