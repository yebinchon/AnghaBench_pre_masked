
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_status {int options; int server_ctx; int minor_status_string; int major_status_string; int minor_status; int mech; int major_status; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1,
      struct gssx_status *VAR_2)
{
 __be32 *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_4(VAR_1, 8);
 if (FUNC_2(VAR_3 == ((void*)0)))
  return -VAR_0;
 VAR_3 = FUNC_3(VAR_3, &VAR_2->major_status);


 VAR_4 = FUNC_1(VAR_1, &VAR_2->mech);
 if (VAR_4)
  return VAR_4;


 VAR_3 = FUNC_4(VAR_1, 8);
 if (FUNC_2(VAR_3 == ((void*)0)))
  return -VAR_0;
 VAR_3 = FUNC_3(VAR_3, &VAR_2->minor_status);


 VAR_4 = FUNC_1(VAR_1, &VAR_2->major_status_string);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_1, &VAR_2->minor_status_string);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_1, &VAR_2->server_ctx);
 if (VAR_4)
  return VAR_4;



 VAR_4 = FUNC_0(VAR_1, &VAR_2->options);

 return VAR_4;
}
