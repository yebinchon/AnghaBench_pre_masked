
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssx_option_array {scalar_t__ count; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_1(struct xdr_stream *VAR_2,
    const struct gssx_option_array *VAR_3)
{
 __be32 *VAR_4;

 if (VAR_3->count != 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, 4);
 if (!VAR_4)
  return -VAR_1;
 *VAR_4 = 0;

 return 0;
}
