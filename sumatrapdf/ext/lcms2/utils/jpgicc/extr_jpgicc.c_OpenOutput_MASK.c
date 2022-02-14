
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsBool ;
struct TYPE_7__ {void* output_message; void* error_exit; } ;
struct TYPE_8__ {TYPE_2__ pub; } ;
struct TYPE_6__ {int input_components; int num_components; int err; } ;


 TYPE_1__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 void* VAR_4 ;

__attribute__((used)) static
cmsBool FUNC_5(const char* VAR_5)
{

    VAR_2 = FUNC_1(VAR_5, "wb");
    if (VAR_2 == ((void*)0)) {
        FUNC_0("Cannot create '%s'", VAR_5);

    }

    VAR_0.err = FUNC_3(&VAR_1.pub);
    VAR_1.pub.error_exit = VAR_4;
    VAR_1.pub.output_message = VAR_4;

    VAR_0.input_components = VAR_0.num_components = 4;

    FUNC_2(&VAR_0);
    FUNC_4(&VAR_0, VAR_2);
    return VAR_3;
}
