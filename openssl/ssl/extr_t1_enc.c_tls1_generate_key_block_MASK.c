
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int client_random; int server_random; } ;
struct TYPE_8__ {TYPE_2__* session; TYPE_1__ s3; } ;
struct TYPE_7__ {int master_key_length; int master_key; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ,int ,int ,int *,int ,int *,int ,int ,int ,unsigned char*,size_t,int) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_3, unsigned char *VAR_4, size_t VAR_5)
{
    int VAR_6;


    VAR_6 = FUNC_0(VAR_3,
                   VAR_1,
                   VAR_2, VAR_3->s3.server_random,
                   VAR_0, VAR_3->s3.client_random, VAR_0,
                   ((void*)0), 0, ((void*)0), 0, VAR_3->session->master_key,
                   VAR_3->session->master_key_length, VAR_4, VAR_5, 1);

    return VAR_6;
}
