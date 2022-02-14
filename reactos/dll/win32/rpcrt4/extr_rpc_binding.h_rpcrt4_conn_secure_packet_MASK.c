
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum secure_packet_direction { ____Placeholder_secure_packet_direction } secure_packet_direction ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* secure_packet ) (TYPE_2__*,int,int *,unsigned int,unsigned char*,unsigned int,int *,unsigned char*,unsigned int) ;} ;
typedef int RpcPktHdr ;
typedef TYPE_2__ RpcConnection ;
typedef int RpcAuthVerifier ;
typedef int RPC_STATUS ;


 int FUNC_0 (TYPE_2__*,int,int *,unsigned int,unsigned char*,unsigned int,int *,unsigned char*,unsigned int) ;

__attribute__((used)) static inline RPC_STATUS FUNC_1(
    RpcConnection *VAR_0, enum secure_packet_direction VAR_1,
    RpcPktHdr *VAR_2, unsigned int VAR_3, unsigned char *VAR_4,
    unsigned int VAR_5, RpcAuthVerifier *VAR_6,
    unsigned char *VAR_7, unsigned int VAR_8)
{
    return VAR_0->ops->secure_packet(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
