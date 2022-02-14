
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_header {int dummy; } ;
struct feat_fd {size_t size; size_t offset; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void const*,size_t) ;
 size_t FUNC_1 (size_t const,size_t) ;
 void* FUNC_2 (void*,size_t) ;

__attribute__((used)) static int FUNC_3(struct feat_fd *VAR_2, const void *VAR_3, size_t VAR_4)
{

 const size_t VAR_5 = 0xffff - sizeof(struct perf_event_header);
 size_t VAR_6 = VAR_2->size;
 void *VAR_7;

 if (VAR_4 + VAR_2->offset > VAR_5)
  return -VAR_0;

 while (VAR_4 > (VAR_6 - VAR_2->offset))
  VAR_6 <<= 1;
 VAR_6 = FUNC_1(VAR_5, VAR_6);

 if (VAR_2->size < VAR_6) {
  VAR_7 = FUNC_2(VAR_2->buf, VAR_6);
  if (!VAR_7)
   return -VAR_1;
  VAR_2->buf = VAR_7;
  VAR_2->size = VAR_6;
 }

 FUNC_0(VAR_2->buf + VAR_2->offset, VAR_3, VAR_4);
 VAR_2->offset += VAR_4;

 return 0;
}
