
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (struct xdr_stream*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_3, int VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_1(VAR_3, 4);
 if (FUNC_0(VAR_5 == ((void*)0)))
  return -VAR_0;
 *VAR_5 = VAR_4 ? VAR_1 : VAR_2;
 return 0;
}
