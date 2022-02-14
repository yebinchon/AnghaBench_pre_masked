
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct xdr_netobj {int len; } ;
struct gssx_option_array {int count; } ;
struct gssx_name_attr_array {int count; } ;
struct gssx_name {struct xdr_netobj display_name; } ;


 int FUNC_0 (struct xdr_stream*,struct gssx_name_attr_array*) ;
 int FUNC_1 (struct xdr_stream*,struct gssx_option_array*) ;
 int FUNC_2 (struct xdr_stream*,struct xdr_netobj*) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_0,
    struct gssx_name *VAR_1)
{
 struct xdr_netobj VAR_2 = { .len = 0 };
 struct gssx_name_attr_array VAR_3 = { .count = 0 };
 struct gssx_option_array VAR_4 = { .count = 0 };
 int VAR_5;


 VAR_5 = FUNC_2(VAR_0, &VAR_1->display_name);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_5)
  return VAR_5;



 VAR_5 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_5)
  return VAR_5;



 VAR_5 = FUNC_1(VAR_0, &VAR_4);

 return VAR_5;
}
