
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_option {int value; int option; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;

__attribute__((used)) static int FUNC_1(struct xdr_stream *VAR_0,
      struct gssx_option *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->option);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, &VAR_1->value);
 return VAR_2;
}
