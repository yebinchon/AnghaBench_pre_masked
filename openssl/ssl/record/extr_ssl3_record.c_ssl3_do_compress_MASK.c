
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int compress; } ;
struct TYPE_5__ {int length; int data; int input; } ;
typedef TYPE_1__ SSL3_RECORD ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int ,int ,int,int ,int) ;
 scalar_t__ VAR_0 ;

int FUNC_1(SSL *VAR_1, SSL3_RECORD *VAR_2)
{

    int VAR_3;


    VAR_3 = FUNC_0(VAR_1->compress, VAR_2->data,
                            (int)(VAR_2->length + VAR_0),
                            VAR_2->input, (int)VAR_2->length);
    if (VAR_3 < 0)
        return 0;
    else
        VAR_2->length = VAR_3;

    VAR_2->input = VAR_2->data;

    return 1;
}
