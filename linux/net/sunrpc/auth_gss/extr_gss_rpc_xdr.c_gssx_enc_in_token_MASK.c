
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct gssp_in_token {int page_len; int page_base; int pages; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct xdr_stream*,int) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1,
        const struct gssp_in_token *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, 4);
 if (!VAR_3)
  return -VAR_0;
 *VAR_3 = FUNC_0(VAR_2->page_len);


 FUNC_2(VAR_1, VAR_2->pages, VAR_2->page_base, VAR_2->page_len);

 return 0;
}
