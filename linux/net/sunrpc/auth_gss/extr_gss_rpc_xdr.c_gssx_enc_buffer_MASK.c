
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ gssx_buffer ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_1,
      const gssx_buffer *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, sizeof(u32) + VAR_2->len);
 if (!VAR_3)
  return -VAR_0;
 FUNC_0(VAR_3, VAR_2->data, VAR_2->len);
 return 0;
}
