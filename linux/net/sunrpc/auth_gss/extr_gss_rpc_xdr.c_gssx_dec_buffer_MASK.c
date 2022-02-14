
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ gssx_buffer ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_3,
      gssx_buffer *VAR_4)
{
 u32 VAR_5;
 __be32 *VAR_6;

 VAR_6 = FUNC_4(VAR_3, 4);
 if (FUNC_3(VAR_6 == ((void*)0)))
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_6);
 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (FUNC_3(VAR_6 == ((void*)0)))
  return -VAR_1;

 if (VAR_4->len == 0) {

  return 0;
 }
 if (VAR_5 > VAR_4->len)
  return -VAR_1;

 if (!VAR_4->data) {
  VAR_4->data = FUNC_1(VAR_6, VAR_5, VAR_2);
  if (!VAR_4->data)
   return -VAR_0;
 } else {
  FUNC_2(VAR_4->data, VAR_6, VAR_5);
 }
 VAR_4->len = VAR_5;
 return 0;
}
