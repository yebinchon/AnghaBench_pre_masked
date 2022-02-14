
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int ssize_t ;
typedef int gfp_t ;


 int VAR_0 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,void*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct xdr_stream*,void**,size_t) ;

ssize_t FUNC_4(struct xdr_stream *VAR_1, char **VAR_2,
  size_t VAR_3, gfp_t VAR_4)
{
 void *VAR_5;
 ssize_t VAR_6;

 VAR_6 = FUNC_3(VAR_1, &VAR_5, VAR_3);
 if (VAR_6 > 0) {
  char *VAR_7 = FUNC_0(VAR_6 + 1, VAR_4);
  if (VAR_7 != ((void*)0)) {
   FUNC_1(VAR_7, VAR_5, VAR_6);
   VAR_7[VAR_6] = '\0';
   *VAR_2 = VAR_7;
   return FUNC_2(VAR_7);
  }
  VAR_6 = -VAR_0;
 }
 *VAR_2 = ((void*)0);
 return VAR_6;
}
