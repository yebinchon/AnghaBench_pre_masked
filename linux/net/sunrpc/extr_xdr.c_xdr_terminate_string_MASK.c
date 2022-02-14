
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xdr_buf {size_t const page_base; int * pages; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct xdr_buf *VAR_0, const u32 VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_0->pages[0]);
 VAR_2[VAR_0->page_base + VAR_1] = '\0';
 FUNC_1(VAR_2);
}
