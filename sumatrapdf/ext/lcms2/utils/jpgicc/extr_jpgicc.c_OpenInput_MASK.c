
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cmsBool ;
struct TYPE_9__ {void* output_message; void* error_exit; } ;
struct TYPE_10__ {TYPE_2__ pub; } ;
struct TYPE_8__ {int err; } ;


 TYPE_1__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static
cmsBool FUNC_8(const char* VAR_9)
{
    int VAR_10;

    VAR_7 = VAR_2;
    VAR_3 = FUNC_1(VAR_9, "rb");
    if (VAR_3 == ((void*)0)) {
        FUNC_0("Cannot open '%s'", VAR_9);
    }


    VAR_0.err = FUNC_6(&VAR_1.pub);
    VAR_1.pub.error_exit = VAR_8;
    VAR_1.pub.output_message = VAR_8;

    FUNC_3(&VAR_0);
    FUNC_7(&VAR_0, VAR_3);

    for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
        FUNC_5(&VAR_0, VAR_4 + VAR_10, 0xFFFF);



    FUNC_2(VAR_3, 0, VAR_5);
    FUNC_4(&VAR_0, VAR_6);

    return VAR_6;
}
