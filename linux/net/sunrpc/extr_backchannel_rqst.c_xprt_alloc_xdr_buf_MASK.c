
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct xdr_buf*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct xdr_buf *VAR_2, gfp_t VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 FUNC_2(VAR_2, FUNC_1(VAR_4), VAR_1);
 return 0;
}
