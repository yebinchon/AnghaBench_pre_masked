
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int ssize_t ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (struct xdr_stream*,void**,size_t) ;

ssize_t FUNC_2(struct xdr_stream *VAR_1, void **VAR_2,
  size_t VAR_3, gfp_t VAR_4)
{
 ssize_t VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_1(VAR_1, &VAR_6, VAR_3);
 if (VAR_5 > 0) {
  *VAR_2 = FUNC_0(VAR_6, VAR_5, VAR_4);
  if (*VAR_2 != ((void*)0))
   return VAR_5;
  VAR_5 = -VAR_0;
 }
 *VAR_2 = ((void*)0);
 return VAR_5;
}
