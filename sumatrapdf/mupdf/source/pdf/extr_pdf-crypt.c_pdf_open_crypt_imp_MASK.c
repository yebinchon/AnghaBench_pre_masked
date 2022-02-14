
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ method; } ;
typedef TYPE_1__ pdf_crypt_filter ;
typedef int pdf_crypt ;
typedef int fz_stream ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,unsigned char*,int) ;
 int * FUNC_2 (int *,int *,unsigned char*,int) ;
 int FUNC_3 (int *,TYPE_1__*,int,int,unsigned char*,int) ;

__attribute__((used)) static fz_stream *
FUNC_4(fz_context *VAR_3, fz_stream *VAR_4, pdf_crypt *VAR_5, pdf_crypt_filter *VAR_6, int VAR_7, int VAR_8)
{
 unsigned char VAR_9[32];
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 32);

 if (VAR_6->method == VAR_2)
  return FUNC_2(VAR_3, VAR_4, VAR_9, VAR_10);

 if (VAR_6->method == VAR_0 || VAR_6->method == VAR_1)
  return FUNC_1(VAR_3, VAR_4, VAR_9, VAR_10);

 return FUNC_0(VAR_3, VAR_4);
}
