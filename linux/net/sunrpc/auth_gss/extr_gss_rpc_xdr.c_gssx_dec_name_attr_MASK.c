
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_name_attr {int extensions; int value; int attr; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_0,
        struct gssx_name_attr *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0, &VAR_1->attr);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, &VAR_1->value);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_0(VAR_0, &VAR_1->extensions);

 return VAR_2;
}
