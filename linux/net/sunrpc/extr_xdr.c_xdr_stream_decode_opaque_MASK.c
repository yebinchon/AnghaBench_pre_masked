
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,void**,size_t) ;

ssize_t FUNC_2(struct xdr_stream *VAR_0, void *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_1(VAR_0, &VAR_4, VAR_2);
 if (VAR_3 <= 0)
  return VAR_3;
 FUNC_0(VAR_1, VAR_4, VAR_3);
 return VAR_3;
}
