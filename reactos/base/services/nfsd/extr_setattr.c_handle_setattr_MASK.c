
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int set_class; } ;
typedef TYPE_2__ setattr_upcall_args ;
struct TYPE_10__ {TYPE_2__ setattr; } ;
struct TYPE_12__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int VAR_0 ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(nfs41_upcall *VAR_1)
{
    setattr_upcall_args *VAR_2 = &VAR_1->args.setattr;
    int VAR_3;

    switch (VAR_2->set_class) {
    case 132:
        VAR_3 = FUNC_5(VAR_2);
        break;
    case 131:
        VAR_3 = FUNC_2(VAR_2);
        break;
    case 128:
        VAR_3 = FUNC_3(VAR_2);
        break;
    case 133:
    case 130:
        VAR_3 = FUNC_4(VAR_2);
        break;
    case 129:
        VAR_3 = FUNC_1(VAR_2);
        break;
    default:
        FUNC_0("unknown set_file information class %d\n",
            VAR_2->set_class);
        VAR_3 = VAR_0;
        break;
    }

    return VAR_3;
}
