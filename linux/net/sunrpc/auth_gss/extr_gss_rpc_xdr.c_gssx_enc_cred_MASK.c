
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_cred {int needs_release; int cred_handle_reference; int elements; int desired_name; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (struct xdr_stream*,int *) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_0,
    struct gssx_cred *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_3(VAR_0, &VAR_1->desired_name);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_0(VAR_0, &VAR_1->elements);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_2(VAR_0, &VAR_1->cred_handle_reference);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, VAR_1->needs_release);

 return VAR_2;
}
