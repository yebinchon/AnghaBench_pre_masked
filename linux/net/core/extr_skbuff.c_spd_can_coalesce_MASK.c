
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {int nr_pages; TYPE_1__* partial; struct page** pages; } ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned int offset; unsigned int len; } ;



__attribute__((used)) static bool FUNC_0(const struct splice_pipe_desc *VAR_0,
        struct page *VAR_1,
        unsigned int VAR_2)
{
 return VAR_0->nr_pages &&
  VAR_0->pages[VAR_0->nr_pages - 1] == VAR_1 &&
  (VAR_0->partial[VAR_0->nr_pages - 1].offset +
   VAR_0->partial[VAR_0->nr_pages - 1].len == VAR_2);
}
