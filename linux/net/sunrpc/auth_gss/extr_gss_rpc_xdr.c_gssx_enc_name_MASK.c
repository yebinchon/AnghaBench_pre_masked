
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_name {int display_name; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_3,
    struct gssx_name *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3, &VAR_4->display_name);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_5)
  return VAR_5;




 VAR_5 = FUNC_0(VAR_3, &VAR_0);
 if (VAR_5)
  return VAR_5;




 VAR_5 = FUNC_1(VAR_3, &VAR_2);

 return VAR_5;
}
