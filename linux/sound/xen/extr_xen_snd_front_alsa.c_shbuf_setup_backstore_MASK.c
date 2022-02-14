
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_pcm_stream_info {size_t buffer_sz; int num_pages; scalar_t__ buffer; int * pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct xen_snd_front_pcm_stream_info *VAR_3,
     size_t VAR_4)
{
 int VAR_5;

 VAR_3->buffer = FUNC_1(VAR_4, VAR_1);
 if (!VAR_3->buffer)
  return -VAR_0;

 VAR_3->buffer_sz = VAR_4;
 VAR_3->num_pages = FUNC_0(VAR_3->buffer_sz, VAR_2);
 VAR_3->pages = FUNC_2(VAR_3->num_pages, sizeof(struct page *),
    VAR_1);
 if (!VAR_3->pages)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_pages; VAR_5++)
  VAR_3->pages[VAR_5] = FUNC_3(VAR_3->buffer + VAR_5 * VAR_2);

 return 0;
}
