
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {scalar_t__ len; TYPE_1__* head; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {scalar_t__* iov_base; unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_7 (scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_8 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct xdr_buf *VAR_4)
{
 __be32 *VAR_5, *VAR_6, *VAR_7;
 unsigned int VAR_8;


 if (VAR_4->len <= VAR_2)
  goto out_short;

 VAR_7 = VAR_4->head[0].iov_base;
 if (*(VAR_7 + 1) != VAR_3)
  goto out_version;

 switch (*(VAR_7 + 3)) {
 case 129:
  break;
 case 128:
  break;

 case 131:
  goto out_drop;

 case 130:
  goto out_drop;

 default:
  goto out_proc;
 }

 VAR_6 = (__be32 *)((unsigned long)VAR_7 + VAR_4->len);
 VAR_5 = FUNC_6(VAR_7 + 4, VAR_6);
 if (!VAR_5)
  goto out_inval;
 VAR_5 = FUNC_8(VAR_5, VAR_6);
 if (!VAR_5)
  goto out_inval;
 VAR_5 = FUNC_7(VAR_5, VAR_6);
 if (!VAR_5)
  goto out_inval;
 if (VAR_5 > VAR_6)
  goto out_inval;

 VAR_4->head[0].iov_base = VAR_5;
 VAR_8 = (unsigned long)VAR_5 - (unsigned long)VAR_7;
 VAR_4->head[0].iov_len -= VAR_8;
 VAR_4->len -= VAR_8;
 FUNC_4(VAR_7, VAR_8);
 return VAR_8;

out_short:
 FUNC_5(VAR_4->len);
 return -VAR_0;

out_version:
 FUNC_1(VAR_7);
 return -VAR_1;

out_drop:
 FUNC_2(VAR_7);
 return 0;

out_proc:
 FUNC_0(VAR_7);
 return -VAR_0;

out_inval:
 FUNC_3(VAR_7);
 return -VAR_0;
}
