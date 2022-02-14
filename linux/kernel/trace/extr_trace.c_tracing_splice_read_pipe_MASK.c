
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int mutex; int cpu_file; int seq; int ent; TYPE_1__* trace; } ;
struct splice_pipe_desc {unsigned int nr_pages; int nr_pages_max; struct partial_page* partial; struct page** pages; int spd_release; int * ops; } ;
struct pipe_inode_info {int dummy; } ;
struct partial_page {int len; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct file {struct trace_iterator* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* splice_read ) (struct trace_iterator*,struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct pipe_inode_info*,struct splice_pipe_desc*) ;
 int FUNC_6 (struct splice_pipe_desc*) ;
 int FUNC_7 (struct pipe_inode_info*,struct splice_pipe_desc*) ;
 int FUNC_8 (struct trace_iterator*,struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct trace_iterator*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *) ;
 size_t FUNC_17 (size_t,struct trace_iterator*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (struct file*) ;

__attribute__((used)) static ssize_t FUNC_19(struct file *VAR_6,
     loff_t *VAR_7,
     struct pipe_inode_info *VAR_8,
     size_t VAR_9,
     unsigned int VAR_10)
{
 struct page *VAR_11[VAR_3];
 struct partial_page VAR_12[VAR_3];
 struct trace_iterator *VAR_13 = VAR_6->private_data;
 struct splice_pipe_desc VAR_14 = {
  .pages = VAR_11,
  .partial = VAR_12,
  .nr_pages = 0,
  .nr_pages_max = VAR_3,
  .ops = &VAR_4,
  .spd_release = VAR_5,
 };
 ssize_t VAR_15;
 size_t VAR_16;
 unsigned int VAR_17;

 if (FUNC_5(VAR_8, &VAR_14))
  return -VAR_1;

 FUNC_2(&VAR_13->mutex);

 if (VAR_13->trace->splice_read) {
  VAR_15 = VAR_13->trace->splice_read(VAR_13, VAR_6,
            VAR_7, VAR_8, VAR_9, VAR_10);
  if (VAR_15)
   goto out_err;
 }

 VAR_15 = FUNC_18(VAR_6);
 if (VAR_15 <= 0)
  goto out_err;

 if (!VAR_13->ent && !FUNC_13(VAR_13)) {
  VAR_15 = -VAR_0;
  goto out_err;
 }

 FUNC_11();
 FUNC_9(VAR_13->cpu_file);


 for (VAR_17 = 0, VAR_16 = VAR_9; VAR_17 < VAR_14.nr_pages_max && VAR_16; VAR_17++) {
  VAR_14.pages[VAR_17] = FUNC_1(VAR_2);
  if (!VAR_14.pages[VAR_17])
   break;

  VAR_16 = FUNC_17(VAR_16, VAR_13);


  VAR_15 = FUNC_15(&VAR_13->seq,
       FUNC_4(VAR_14.pages[VAR_17]),
       FUNC_16(&VAR_13->seq));
  if (VAR_15 < 0) {
   FUNC_0(VAR_14.pages[VAR_17]);
   break;
  }
  VAR_14.partial[VAR_17].offset = 0;
  VAR_14.partial[VAR_17].len = FUNC_16(&VAR_13->seq);

  FUNC_14(&VAR_13->seq);
 }

 FUNC_10(VAR_13->cpu_file);
 FUNC_12();
 FUNC_3(&VAR_13->mutex);

 VAR_14.nr_pages = VAR_17;

 if (VAR_17)
  VAR_15 = FUNC_7(VAR_8, &VAR_14);
 else
  VAR_15 = 0;
out:
 FUNC_6(&VAR_14);
 return VAR_15;

out_err:
 FUNC_3(&VAR_13->mutex);
 goto out;
}
