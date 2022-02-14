
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t size; scalar_t__ read_data; } ;
typedef TYPE_1__ ipc_pipe_server_t ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (scalar_t__,int *,size_t) ;

__attribute__((used)) static inline void FUNC_2(ipc_pipe_server_t *VAR_0,
        uint8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->size + VAR_2;
 FUNC_0(VAR_0, VAR_3);
 FUNC_1(VAR_0->read_data + VAR_0->size, VAR_1, VAR_2);
 VAR_0->size = VAR_3;
}
