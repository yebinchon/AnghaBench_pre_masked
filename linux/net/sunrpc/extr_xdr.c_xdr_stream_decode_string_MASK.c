
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,void*,size_t) ;
 size_t FUNC_1 (char*) ;
 size_t FUNC_2 (struct xdr_stream*,void**,size_t) ;

ssize_t FUNC_3(struct xdr_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_2(VAR_0, &VAR_4, VAR_2);
 if (VAR_3 > 0) {
  FUNC_0(VAR_1, VAR_4, VAR_3);
  VAR_1[VAR_3] = '\0';
  return FUNC_1(VAR_1);
 }
 *VAR_1 = '\0';
 return VAR_3;
}
