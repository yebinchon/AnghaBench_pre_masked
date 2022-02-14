
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trace_iterator {TYPE_3__* tr; int cpu_file; TYPE_2__* trace_buffer; scalar_t__ snapshot; } ;
struct splice_pipe_desc {int nr_pages_max; int nr_pages; struct partial_page* partial; struct page** pages; int spd_release; int * ops; } ;
struct pipe_inode_info {int dummy; } ;
struct partial_page {int len; unsigned long private; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct ftrace_buffer_info {struct trace_iterator iter; } ;
struct file {int f_flags; struct ftrace_buffer_info* private_data; } ;
struct buffer_ref {int * page; int cpu; int buffer; int refcount; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {int buffer_percent; TYPE_1__* current_trace; } ;
struct TYPE_5__ {int buffer; } ;
struct TYPE_4__ {scalar_t__ use_max_tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct buffer_ref*) ;
 struct buffer_ref* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int **,size_t,int ,int) ;
 scalar_t__ FUNC_9 (struct pipe_inode_info*,struct splice_pipe_desc*) ;
 int FUNC_10 (struct splice_pipe_desc*) ;
 int FUNC_11 (struct pipe_inode_info*,struct splice_pipe_desc*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct page* FUNC_14 (int *) ;
 int FUNC_15 (struct trace_iterator*,int ) ;

__attribute__((used)) static ssize_t
FUNC_16(struct file *VAR_12, loff_t *VAR_13,
       struct pipe_inode_info *VAR_14, size_t VAR_15,
       unsigned int VAR_16)
{
 struct ftrace_buffer_info *VAR_17 = VAR_12->private_data;
 struct trace_iterator *VAR_18 = &VAR_17->iter;
 struct partial_page VAR_19[VAR_8];
 struct page *VAR_20[VAR_8];
 struct splice_pipe_desc VAR_21 = {
  .pages = VAR_20,
  .partial = VAR_19,
  .nr_pages_max = VAR_8,
  .ops = &VAR_10,
  .spd_release = VAR_11,
 };
 struct buffer_ref *VAR_22;
 int VAR_23, VAR_24;
 ssize_t VAR_25 = 0;






 if (*VAR_13 & (VAR_7 - 1))
  return -VAR_2;

 if (VAR_15 & (VAR_7 - 1)) {
  if (VAR_15 < VAR_7)
   return -VAR_2;
  VAR_15 &= VAR_6;
 }

 if (FUNC_9(VAR_14, &VAR_21))
  return -VAR_3;

 again:
 FUNC_12(VAR_18->cpu_file);
 VAR_23 = FUNC_6(VAR_18->trace_buffer->buffer, VAR_18->cpu_file);

 for (VAR_24 = 0; VAR_24 < VAR_21.nr_pages_max && VAR_15 && VAR_23; VAR_24++, VAR_15 -= VAR_7) {
  struct page *VAR_26;
  int VAR_27;

  VAR_22 = FUNC_3(sizeof(*VAR_22), VAR_4);
  if (!VAR_22) {
   VAR_25 = -VAR_3;
   break;
  }

  FUNC_4(&VAR_22->refcount, 1);
  VAR_22->buffer = VAR_18->trace_buffer->buffer;
  VAR_22->page = FUNC_5(VAR_22->buffer, VAR_18->cpu_file);
  if (FUNC_0(VAR_22->page)) {
   VAR_25 = FUNC_1(VAR_22->page);
   VAR_22->page = ((void*)0);
   FUNC_2(VAR_22);
   break;
  }
  VAR_22->cpu = VAR_18->cpu_file;

  VAR_27 = FUNC_8(VAR_22->buffer, &VAR_22->page,
       VAR_15, VAR_18->cpu_file, 1);
  if (VAR_27 < 0) {
   FUNC_7(VAR_22->buffer, VAR_22->cpu,
         VAR_22->page);
   FUNC_2(VAR_22);
   break;
  }

  VAR_26 = FUNC_14(VAR_22->page);

  VAR_21.pages[VAR_24] = VAR_26;
  VAR_21.partial[VAR_24].len = VAR_7;
  VAR_21.partial[VAR_24].offset = 0;
  VAR_21.partial[VAR_24].private = (unsigned long)VAR_22;
  VAR_21.nr_pages++;
  *VAR_13 += VAR_7;

  VAR_23 = FUNC_6(VAR_18->trace_buffer->buffer, VAR_18->cpu_file);
 }

 FUNC_13(VAR_18->cpu_file);
 VAR_21.nr_pages = VAR_24;


 if (!VAR_21.nr_pages) {
  if (VAR_25)
   goto out;

  VAR_25 = -VAR_0;
  if ((VAR_12->f_flags & VAR_5) || (VAR_16 & VAR_9))
   goto out;

  VAR_25 = FUNC_15(VAR_18, VAR_18->tr->buffer_percent);
  if (VAR_25)
   goto out;

  goto again;
 }

 VAR_25 = FUNC_11(VAR_14, &VAR_21);
out:
 FUNC_10(&VAR_21);

 return VAR_25;
}
