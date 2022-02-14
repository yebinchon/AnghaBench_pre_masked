
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* packet_buffer; int fdkhandle; } ;
typedef TYPE_1__ libfdk_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 libfdk_encoder_t *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->fdkhandle);

 FUNC_1(VAR_2->packet_buffer);
 FUNC_1(VAR_2);

 FUNC_2(VAR_0, "libfdk_aac encoder destroyed");
}
