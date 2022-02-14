
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_cb {int application_data; int acceptor_address; int acceptor_addrtype; int initiator_address; int initiator_addrtype; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1, struct gssx_cb *VAR_2)
{
 __be32 *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_2(VAR_1, 8);
 if (!VAR_3)
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_3, VAR_2->initiator_addrtype);


 VAR_4 = FUNC_0(VAR_1, &VAR_2->initiator_address);
 if (VAR_4)
  return VAR_4;


 VAR_3 = FUNC_2(VAR_1, 8);
 if (!VAR_3)
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_3, VAR_2->acceptor_addrtype);


 VAR_4 = FUNC_0(VAR_1, &VAR_2->acceptor_address);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_1, &VAR_2->application_data);

 return VAR_4;
}
